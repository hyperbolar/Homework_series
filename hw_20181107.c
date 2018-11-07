#include <stdio.h>
#include <math.h>

void Dec_to_Other(int num, int base)
{
	int i = 0;
	switch (base) {
	case 2: case 8: {
		int output[16] = { 0 };
		while (num) {
			output[15 - i] = num % base;
			num /= base;
			i++;
		}
		printf("%d = (", num);
		for (int j = 0; j < 16; j++) {
			printf("%d", output[j]);
		}
		printf(")%d\n", base);
		break;
	}
	case 16: {
		int output[6] = {48, 120, 48, 48, 48, 48};
		while (num) {
			if (num % 16 < 10) {
				output[5 - i] = num % 16 + 48;
			}
			else {
				output[5 - i] = num % 16 + 55;
			}
			num /= 16;
			i++;
		}
		printf("%d = (", num);
		for (int j = 0; j < 6; j++) {
			printf("%c", output[j]);
		}
		printf(")%d\n", base);
		break;
	}
	default:{
		puts("Incorrect input, byebye.");
	}
	}
	
}

int main(void)
{
	int num;
	printf("Input an integer in range(0, 65535)\n");
	scanf_s("%d", &num);
	//printf("Press 2/8/16 to transform the int into binary/octal/hexadecimal system\n");
	//scanf_s("%d", &base);  

	printf("Transformed\n");
	Dec_to_Other(num, 2);
	Dec_to_Other(num, 8);
	Dec_to_Other(num, 16);

	return 0;
}


//--------------//

void Binary_to_Other(void)
{
	int d[16];
	int dec = 0;

	for (int i = 0; i < 16; i++) {
		scanf_s("%d", &d[i]);
		dec += d[i] * pow(2, 15 - i);
	}
	printf("Transform to decimal number is %d\n", dec);
    
	int oct[6] = { 0 };
	oct[0] = d[0];
	for (int i = 1; i < 6; i++) {
		for (int j = 2; j >= 0; j--) {
			oct[i] += d[3 * (i - 1) + 3 - j] * pow(2, j);
		}
	}

	printf("Transform to octal number is (");
	for (int i = 0; i < 6; i++) {
		printf("%d", oct[i]);
	}
	printf(")8\n");

	int hex[6] = { 48, 120, 0, 0, 0, 0 };
	for (int i = 2; i < 6; i++) {
		for (int j = 3; j >= 0; j--) {
			hex[i] += d[4 * ( i - 2 ) + 3 - j] * pow(2, j);
		}
		hex[i] = (hex[i]  < 10) ? (hex[i] + 48) : (hex[i] + 55);
	}
	printf("Transform to hexadecimal number is (");
	for (int i = 0; i < 6; i++) {
		printf("%c", hex[i]);
	}
	printf(")16\n");
}

int main(void)
{
	Binary_to_Other();

	return 0;
}


void Dec_to_Binary(int n)
{
	int arr_t[16] = { 0 };

	arr_t[0] = (n > 0) ? 0 : 1;
	int i = 0;
	while(n){
		arr_t[15 - i] = n % 2;
		n /= 2;
		i++;
	}

	printf("True form\n");
	for (int t = 0; t < 16; t++) {
		printf("%d", arr_t[t]);
	}
	puts("\n");

}

void Dec_to_Binary_2(int n)
{
	int arr_c[16] = { 0 };

	arr_c[0] = (n > 0) ? 0 : 1;
	int n_c = 32768 - n;
	
	int i = 1;
	while (n_c) {
		arr_c[16 - i] = n_c % 2;
		n_c /= 2;
		i++;
	}
	printf("Complement\n");
	for (int t = 0; t < 16; t++) {
		printf("%d", arr_c[t]);
	}
	puts("\n");
}

int main(void)
{
	int x;
	printf("x = ");
	scanf_s("%d", &x);
	Dec_to_Binary(x);
	Dec_to_Binary_2(x);


	return 0;
}

//------------//

int main(void)
{
	const double pi = 3.14159265357989;
	double quater_pi = 0.0;
	long long int deno = 1;
	int kesuu = 1;
	double Q_Pie = pi / 4;
	while (Q_Pie - quater_pi > 0.25*1e-10 || Q_Pie - quater_pi < -0.25*1e-10) {
		quater_pi += (double) kesuu / deno;
		kesuu *= -1;
		deno += 2;
	}
	printf("Pi = %.12f", 4 * quater_pi);

	return 0;
}

//-------------//

int factoria(int n)
{
	if (n <= 1)
		return 1;
	else
		return factoria(n - 1) * n;
}

int main(void)
{
	double my_sin = 0.0;
	int n = 0;
	int kesuu = -1;
	double x;
	printf("x = "); scanf_s("%lf", &x);
	while (n < 6) {
		int ff = factoria(2 * n + 1);
		my_sin += pow(kesuu, n) * pow(x, 2 * n + 1) / ff;
		n++;
	}
	printf("%.4f", my_sin);

	return 0;
}

