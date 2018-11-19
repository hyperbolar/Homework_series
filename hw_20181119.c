//1
int get(int m, int n)
{
	int t = 1 << (32 - n);
	return m & t >> (32 - n);
}

int release(int m, int n)
{
	int f = get(m, n);
	int t = 1 << (32 - n);
	if (f == 0)
	{
		printf("release %d\n", n);
		m |= t;
		printf("%d\n", m);
		return m;
	}
	else
	{
		printf("Already released\n");
		return -1;
	}
}

int unrelease(int m, int n)
{
	int f = get(m, n);
	int t = 1 << (32 - n);
	if (f != 0)
	{
		printf("release %d\n", n);
		m &= ~t;
		printf("%d\n", m);
		return m;
	}
	else
	{
		printf("Already unreleased\n");
		return -1;
	}
}

void exit(int m)
{
	printf("Current status: %d\n", m);
}

int main(void)
{
	int opt = -1;
	static int mec = 0; //default status: all unreleased;
	int use;
	printf("Operating introduction\n\
1 -> Release\n2 -> Unrelease\n0 -> exit\n");
	scanf_s("%d", &opt);
	switch (opt)
	{
	case 0: exit(); break;
	case 1: release(mec, use); break;
	case 2: unrelease(mec, use); break;
	default: printf("Invalid input"); break;
	}

	return 0;
}

//2
int highest_1(int x)
{
	int h = 0;
	while (x) {
		h++;
		x >>= 1;
	}
	return h;
}

int main(void)
{
	int x_test;
	printf("x = ");
	scanf_s("%d", &x_test);
	printf("The highest 1 appears at \
%d position of %d", highest_1(x_test), x_test);

	return 0;
}

//3
void opposite(int x)
{
	int bin_u[32];
	int p = 31;
	int re = 0;
	if (x < MAX && x >= MIN)
	{
		int u = x - 1;
		//取反后+1在结果上相当于-1 所以先在原数-1再取反即可~
		u = ~u;
		printf("%d's opposite number is %d", x, u);
	}
	else {
		printf("Output Overflow");
	}
}

int main(void)
{
	int x_test;
	printf("x = "); scanf_s("%d", &x_test);
	opposite(x_test);

	return 0;
}

//4
int main(void)
{
	int x, y;
	printf("x = ?\ny = ?\n"); scanf_s("%d %d", &x, &y);
	x = x ^ y; y = x ^ y; x = x ^ y;
	printf("swaped: x = %d, y = %d\n", x, y);

	return 0;
}

//5
int oppo(int a)
{
	int u = a - 1;
	return ~u;
}

int sign(int a)
{
	return a >> 31;
}

int my_abs(int a)
{
	return (sign(a)) ? oppo(a) : a;
}

int my_add(int x, int y)
{
	if (y == 0)
		return x;
	else
	{
		int sum = x ^ y;
		int carry = (x & y) << 1;
		return (my_add(sum, carry));
	}
}

int my_subt(int x, int y)
{
	return my_add(x, oppo(y));
}

int my_mul(int x, int y)
{
	int sign_re = (sign(x) ^ sign(y)) ? 1 : 0;
	int re = 0; //re = result
	x = my_abs(x);
	y = my_abs(y);

	while (y)
	{
		if (y & 1) {
			re = my_add(re, x);
		}
		x <<= 1;
		y >>= 1;
	}

	return sign_re ? oppo(re) : re;
}

int my_div(int x, int y)
{
	if (y & 0)
		printf("Error! divided by 0");
	
	int re = 0;
	int sign_re = sign(x) ^ sign(y) ? 1 : 0;
	x = my_abs(x);
	y = my_abs(y);

	while (x >= y)
	{
		x = my_subt(x, y);
		re = my_add(re, 1);
	}

	return sign_re ? oppo(re) : re;
}

int main(void)
{
	int a = -410;
	int b = -45;
	//test example
	printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d", \
		my_add(a, b), my_subt(a, b), my_mul(a, b), my_div(a, b));

	return 0;
}

