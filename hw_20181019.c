// lesson[data and compute] homework

// questions -> see in README.md

// equality_test_twobits(x1x0, y1y0) -> eq1/*
zero eq0
flip eq0
test x0 flip eq0
test y0 flip eq0
zero eq1
test x1 flip eq1
test y1 flip eq1
test eq0 flip eq1

// add(x1x0, y1y0) -> z2z1z0
1 zero z0
2 zero z1
3 zero z2
4 flip z0
5 equlity_test (x0, y0)
6 test eq0 goto 8
7 goto 11
8 test x0 goto 10
9 goto 11
10 flip z1
11 equality_test(x1, y1)
12 test eq1 goto 14
13 flip z1
14 test x1 goto 16
15 goto 17
16 flip z2
17 exit()*/

// Find_students_by_id.c
#include "stu.h"
#include <stdio.h>

int StuFind(int left, int right, int id)
{
	if (right - left <= 1 && (aStu[left] == id || aStu[right] == id)) {
		printf("Found\nId: %d, Name: %s", id, \
			((aStu[left] == id) ? sStuName[left] : sStuName[right]));
	}
	else if (right - left <= 1 && aStu[left] != id && aStu[right] != id) {
		printf("Student id %d does not exist.", id);
	}
	else {
		if (id > aStu[(left + right) / 2]) {
			left = (left + right) / 2;
		}
		else right = (left + right) / 2;
		return StuFind(left, right, id);
	}
}


int main(void)
{
	int stuId;
	printf("Input student id to search: ");
	scanf_s("%d", &stuId);

	StuFind(0, 99, stuId);
	
	return 0;
}
