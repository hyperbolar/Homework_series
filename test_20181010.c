#include <stdio.h>

void Hayai(int iHour1, int iMin1, int iSec1, int iHour2, int iMin2, int iSec2)
{
	if (iHour1 < iHour2)
		printf("%d %d %d", iHour1, iMin1, iSec1);
	else if (iHour1 > iHour2)
		printf("%d %d %d", iHour2, iMin2, iSec2);
	else if (iHour1 == iHour2)
	{
		if (iMin1 < iMin2)
			printf("%d %d %d", iHour1, iMin1, iSec1);
		else if (iMin1 > iMin2)
			printf("%d %d %d", iHour2, iMin2, iSec2);
		else if (iMin1 == iMin2)
		{
			if (iSec1 < iSec2)
				printf("%d %d %d", iHour1, iMin1, iSec1);
			else if (iSec1 > iSec2)
				printf("%d %d %d", iHour2, iMin2, iSec2);
			else printf("%d %d %d", iHour2, iMin2, iSec2);
		}
	}
}

int main(void)
{
	int iHour1, iMin1, iSec1, iHour2, iMin2, iSec2;
	scanf("%d %d %d\n%d %d %d", &iHour1, &iMin1, &iSec1, &iHour2, &iMin2, &iSec2);
	
	Hayai(iHour1, iMin1, iSec1, iHour2, iMin2, iSec2);

	return 0;
}
//20181010_test_A

int main(void)
{
	char ch = getchar();
	//int flag = 0;
	int f = 0;
	int c = -1;
	while (ch != '#') {
		
		
		if (ch == 'q') {
			c = f + 1;
			break;
		}
		f++;
		
		ch = getchar();

	}
	printf("%d", c);
	
    return 0;
}
//20181010_test_B
