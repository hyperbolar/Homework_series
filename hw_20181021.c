include <stdio.h>

int Walk(int altar)
{
	if (altar == 1)
		return 1;
	else if (altar == 2)
		return 2;
	else
		return Walk(altar - 1) + Walk(altar - 2);
}

int main(void)
{
	int n;
	printf("How many steps(n = ?): "); scanf_s("%d", &n);
	printf("Totally has %d ways to get on the stairs.", Walk(n));

	return 0;
}
//quest 1


#include <stdio.h>

void Kakutani(int x)
{
	int isOdd = x % 2;
	
	if (x == 1)
	{
		return;
	}
	else if (isOdd)
	{
		printf(" -> %d", 3 * x + 1);
		return Kakutani(3 * x + 1);
	}
	else {
		printf(" -> %d", x / 2);
		return Kakutani(x / 2);
	}
}

int main(void)
{
	int x;
	printf("x = ?");
	scanf_s("%d", &x);

	printf("%d", x);
	Kakutani(x);

	return 0;
}

//

