//quest_01
//猜数游戏

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Conpr(int iAns, int iGue)
{
	printf((iGue < iAns) ? "It's larger than you guessed." \
		: "It's smaller than you guessed.");
}

int main(void)
{
	srand(time(NULL)); /*随机一个数*/
	int iMyNum = rand() % 1000; /*假定猜的数在1000以内*/
	int iTimes = 1; /*次数初始值为1*/
	int iGuess; 
	printf("Guess the number (range 0~1000): ");
	scanf_s("%d", &iGuess); /*先scanf第一个猜的数*/
	int Temp = iGuess; /*用来储存上一个猜的数的变量Temp*/
	do {
		Conpr(iMyNum, iGuess); /*比较结果和猜的数，并printf大小关系*/
		printf("Try Again.\n");
		if (Temp != iGuess)
			iTimes++;  /*记录次数，如果上一次猜的和这次不一样则记为一次*/
		Temp = iGuess;  /*次数记录的规则：不连续猜同一个数记作两次，连续猜记一次*/
		scanf_s("%d", &iGuess);
	} while (iGuess != iMyNum); /*没猜对就会一直循环直到猜对*/
	
	if (iGuess == iMyNum){
		printf("The mysterious number is: %d\n", iGuess);
		printf("You totally guessed %d times.", iTimes);
	} /*循环结束或者第一次就猜对时会printf结果和猜的次数*/

	return 0;
}
