//1
#include <stdio.h>
#define LEN 10

void i_print_all(int arr[LEN])
{
	for (int i = 0; i < LEN; i++)
	{
		printf("%d ", arr[i]);
	}
	puts("\n");
}

int max_element(int arr[LEN])
{
	int max = arr[0];
	for (int i = 1; i < LEN; i++)
	{
		max = arr[i] > max ? arr[i] : max;
	}
	return max;
}

int avr_all(int arr[LEN])
{
	int sum = 0;
	for (int i = 0; i < LEN; i++)
	{
		sum += arr[i];
	}
	return sum / LEN;
}

void rvs_all(int arr[LEN])
{
	for (int i = 0; i < LEN - i - 1; i++) {
		int temp = arr[i];
		arr[i] = arr[LEN - i - 1];
		arr[LEN - i - 1] = temp;
	}
	printf("Reversed array: ");
	i_print_all(arr);
}

int main(void)
{
	int test[LEN] = { 120, 167, 53, 95, 32, 686, 63, 7965, 8456, 92113 };
	printf("Print array test: "); i_print_all(test);
	printf("The max value among array test is %d\n\n", max_element(test));
	printf("Average of all elements in array test is %d\n\n", avr_all(test));
	rvs_all(test);

	return 0;
}

//2
#include <stdio.h>
#define LEN 32

void c_print_all(char str[LEN])
{
	for (int i = 0; i < LEN; i++)\
	{
		printf("%c ", str[i]);
	}
	puts("\n");
}

void ToUpper(char str[LEN])
{
	for (int i = 0; i < LEN; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	printf("Switch lower to upper: ");
	c_print_all(str);
}

void ToLower(char str[LEN])
{
	for (int i = 0; i < LEN; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}

void CountAlpha(char str[LEN])
{
	int r[26] = { 0 };
	ToLower(str);
	for (int i = 0; i < LEN; i++)
	{
		r[str[i] - 97] ++;
	}
	for (int i = 0; i < 26; i++)
		printf("%c: %d\n", 97 + i, r[i]);
}

int main(void)
{
	char test_str[LEN];
	int i = 0;
	while (i < LEN)
	{
		scanf_s("%c", &test_str[i]);
		i++;
		if (test_str[i - 1] == '0')
			break;
	}
	for (int j = i; j < LEN; j++)
		test_str[j] = '0';
	//Define the test string

	printf("Print the string: "); c_print_all(test_str);
	printf("Turn upper: "); ToUpper(test_str);
	printf("Alpha distribution\n"); 
	CountAlpha(test_str);

	return 0;
}

//3
#include <stdio.h>
#include <string.h>
#define MTRX 15

void __init__(char mtrx[MTRX][MTRX])
{
	for (int i = 0; i < MTRX; i++)
	{
		scanf_s("%s", mtrx[i], MTRX);
		for (int j = strlen(mtrx[i]); j < MTRX; j++)
			mtrx[i][j] = '0';
	}
}

void print_matrix(char mtrx[MTRX][MTRX])
{
	for (int i = 0; i < MTRX; i++)
	{
		for (int j = 0; j < MTRX; j++)
		{
			printf("%c", mtrx[i][j]);
		}
		printf("\n");
	}
}

void print_matrix_t(char mtrx[MTRX][MTRX])
{
	for (int i = 0; i < MTRX; i++)
	{
		for (int j = 0; j < MTRX; j++)
		{
			printf("%c", mtrx[j][i]);
		}
		printf("\n");
	}
}

void print_line(char mtrx[MTRX][MTRX], int line)
{
	for (int i = 0; i < MTRX; i++)
	{
		printf("%c", mtrx[line][i]);
	}
	printf("\n");
}

int longest_line(char mtrx[MTRX][MTRX])
{
	int line = 0;
	int len = 0;
	int temp = 0;
	for (int i = 0; i < MTRX; i++)
	{
		int f = 0;
		while (f < MTRX && mtrx[i][f] != '0')
		{
			len++;
			f++;
		}
		if (temp < len) {
			temp = len;
			line = i;
		}
		len = 0;
		
	}

	return line;
}

int main(void)
{
	char str_test[MTRX][MTRX];
	
	__init__(str_test);
	printf("Print every word:\n");
	print_matrix(str_test);
	printf("Printf transposed matrix:\n");
	print_matrix_t(str_test);

	int line_test;
	printf("Which line do u want to print\n"); scanf_s("%d", &line_test);
	printf("line %d is printed.\n", line_test);
	print_line(str_test, line_test);
	printf("The longest line in the matrix is: line %d", longest_line(str_test));

	return 0;
}
