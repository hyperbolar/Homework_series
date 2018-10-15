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

//quest 02
//机器使用状态数组

#include <stdio.h>
#define LEN 32

/*说明：机器编号为0-31，从左到右依次是0-31号机器的状态*/
void Set(int arr[LEN], int iOpt, char cOpt)
{
	if (cOpt == 'O' || cOpt == 'o') //char 'o' or 'O' represent to occupy the machine
	{
		if (arr[iOpt] == 0)
			arr[iOpt]++;
		else
			printf("Already occupied, try another.\n");
	}
	else if (cOpt == 'R' || cOpt == 'r') //char 'r' or 'R' represent to release the machine
	{
		if (arr[iOpt] == 1)
			arr[iOpt]--;
		else
			printf("Already released, try another\n");
	}
	else
		printf("Invalid input, try again.\n");
	
	printf("Current status\n");
	for (int i = 0; i < LEN - 1; i++) {
		printf("%d", arr[i]);
	}
	printf("%d\n", arr[LEN - 1]);
	//判断完成后打印机器使用情况

	return;
}

int main(void)
{
	int aMec[32] = { 0 };  //初始化都是未被占用的状态；
	int iOpt = 0;  //当没有输入操作机器的编号时，默认对第一台进行操作；
	char cOpt = 'I'; //当没有输入操作代号时，默认为初始化状态；
	
	puts("Initialization completed.");
	puts("Press [Machine index] / [Operation] to operate on the group.");
	puts("'O' or 'o' => Occupy; 'R' or 'r' => Release; 'E' or 'e' => End;");
	puts("Input sample: 16 o => to occupy Machine NO.16.");
	//关于输入规则的文字说明
	
	do{
        scanf_s("%d %c", &iOpt, &cOpt);
		Set(aMec, iOpt, cOpt);
		printf("Continue? Press 'E' to exit or press 'r'/'o' to continue\n");
		scanf_s("&c", &cOpt);
	} while (cOpt != 'E' && cOpt != 'e');

	return 0;
}
