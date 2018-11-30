#include <stdio.h>
#define LEN 5

char sqr[LEN][LEN];
int pos[2] = { -1, -1 }; 
//initialize position (-1, -1), if not set position of 'X'

void print(char arr[LEN][LEN])
{
	system("cls");
	for (int i = 0; i < LEN; i++)
	{
		for (int j = 0; j < LEN; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

void set(int i, int j)
{
	if (i < 0 || j < 0 || i >= LEN || j >= LEN)
	{
		printf("Error: Invalid Position\n");
	}
	else
	{
		sqr[i][j] += 56;
		pos[0] = i;
		pos[1] = j;
	}
	print(sqr);
}

void move(char mov)
{
	
	if (pos[0] == -1 || pos[1] == -1)
		printf("You have to set the position of 'X' first!\n");
	else {
		sqr[pos[0]][pos[1]] -= 56; //remove x from its former position
		switch (mov)
		{
		case 'w': 
			if (pos[0] != 0)
				sqr[pos[0] - 1][pos[1]] += 56; //if not at the first line
			else
				sqr[LEN - 1][pos[1]] = 56; //if at the first line, 'w' will move 'X' to the bottom
			pos[0] = (pos[0] == 0) ? LEN - 1 : pos[0] - 1;
			break;
		case 's': 
			if (pos[0] != LEN - 1)
				sqr[pos[0] + 1][pos[1]] += 56; //if not at the last line
			else
				sqr[0][pos[1]] += 56; //if at the last line, 's' will move 'X' to the top
			pos[0] = (pos[0] == LEN - 1) ? 0 : pos[0] + 1;
			break;
		case 'a':
			if (pos[1] != 0)
				sqr[pos[0]][pos[1] - 1] += 56;
			else
				sqr[pos[0]][LEN - 1] += 56;
			pos[1] = (pos[1] == 0) ? (LEN - 1) : pos[1] - 1;
			break;
		case 'd':
			if (pos[1] != LEN - 1)
				sqr[pos[0]][pos[1] + 1] += 56;
			else
				sqr[pos[0]][0] += 56;
			
			pos[1] = (pos[1] == LEN - 1) ? 0 : pos[1] + 1; 
			break;
		}
	}
	print(sqr);
}

int main(void)
{
	for (int i = 0; i < LEN; i++)
	{
		for (int j = 0; j < LEN; j++)
		{
			sqr[i][j] = ' ';
		}
	}

	char ch = getchar();
	while (ch != 'e') {
		if (ch == 's')
		{
			printf("input i j\n");
			int x, y;
			scanf_s("%d %d", &x, &y);
			set(x, y);
		}
		else if (ch == 'm')
		{
			printf("a(left) w(up) d(right) s(down)\n");
			char mov = getchar();
			if (mov == '\n')
			{
				mov = getchar();
				move(mov);
			}
			else
				move(mov);
		}
		else if (ch == 'p')
		{
			print(sqr);
		}
		else if (ch == '\n')
		{
			ch = getchar();
			continue;
		}
		ch = getchar();
	}

	
	
	return 0;
}
