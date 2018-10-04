//hw 20180930 01

#include <stdio.h>

int main(void)
{
	int intPlus = 0, intMinus = 0;
	int iReadInt;
	do {
		scanf_s("%d", &iReadInt);
		if (iReadInt > 0)
			intPlus++;
		else if (iReadInt < 0)
			intMinus++;
	} while (iReadInt);

	printf("Positive number: %d\nNegative number: %d\n",\
		intPlus, intMinus);

	return 0;
}


//hw 20180930 02

#include <stdio.h>

long long int Pow_10(int r)
{
	int intResult = 1;
	while(r)
	{
		intResult *= 10;
		r--;
	}
	return intResult;
}

int main(void)
{
	for (int i = 1; i < 10; i++) {
		printf("%d is cyclic number.\n", i);
	}
	for (int i = 2; i < 11; i++) {
		long long int intFull = Pow_10(i) - 1;
		long long int intTemp = intFull / (i + 1);
		if (intTemp * (i + 1) == intFull && intTemp % 9 == 0)
			printf("%d is cyclic number.\n", intTemp);
	}

	return 0;

}

//hw 20180930 03

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 4; i++){
	    for (int j = 1; j <= 4; j++)
			for (int k = 1; k <= 4; k++)
				if (i != j && i != k && j != k)
				    printf("%d\n", 100 * i + 10 * j + k);
	}

	return 0;
}
