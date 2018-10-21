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
