#include <stdio.h>

int Find_coin(int left, int right, int m)
{
	static int intTime = 0;
	if (right - left <= 1 && (left == m || right == m))
	{
		intTime++;
		printf("Find the coin %d.\n%d", m, intTime);
		
		return m;
	}
	else
	{
		intTime++;

		if (m <= 0.5 * (left + right))
			right = 0.5 * (left + right);
		else
			left = 0.5 * (left + right);
		printf("(%d, %d) -> ", left, right);
		
		return Find_coin(left, right, m);
	}
}

int main(void)
{
	int intCoin, intFake;
	
	printf("How many coins: ");  scanf_s("%d", &intCoin);
	printf("Which is the fake one: ");  scanf_s("%d", &intFake);

	Find_coin(0, intCoin, intFake);

	return 0;
}

//Use binary sort to find the forged coin
