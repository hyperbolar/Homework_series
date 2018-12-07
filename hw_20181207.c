<1>

#include <stdio.h>

#include <math.h>



int isPrime(int x)

{

	double sqrt_x = sqrt(x);

	if (x < 2)

		return 0;

	for (int i = 2; i <= sqrt_x; i++)

	{

		if (x % i == 0)

			return 0;

	}

	return 1;

}



int main(void)

{

	int lst[1000];

	for (int i = 0; i < 1000; i++)

	{

		lst[i] = i + 1;

	}



	int *pl = lst;

	for (; pl < lst + 1000; pl++)

	{

		if (isPrime(*pl))

			printf("%d %d\n", *pl, pl);

	}



	return 0;

}



//规律：编译器给同一数组中各变量分配的地址是连续的



<2>

#include <stdio.h>



int main(void)

{

	int x = 41; //int

	int *px = &x; //pointer which points to int

	int **ppx = &px; //pointer points to pointer



	puts("Output~");



	printf("var\tvalue\t\tlocation\n\n");

	printf(" x \t %d \t\t %p \n\n", x, x);

	printf(" px \t %d \t %p ", px, px); 

	printf("\nThe value of the variable pointed to by the pointer variable: %d\n\n", *px);

	printf("ppx \t %d \t %p ", ppx, ppx);

	printf("\nThe value of the variable pointed to by the pointer variable: %d", *ppx);



        return 0;

}

