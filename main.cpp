#include <iostream>
#include "count.cpp"

#define MAX_SIZE_PTRARRAY 512
#define MAX_NUM_PTR 512
#define MAX_NUM_INTVAR 512

void test1()
{
	int **ptrArray[MAX_SIZE_PTRARRAY] = {};
	int  *intPtr[MAX_NUM_PTR];
	int   intVar[MAX_NUM_INTVAR];

	intVar[0] = 7;
	intVar[1] = 6;
	intVar[2] = 2;
	intVar[3] = 9;
	ptrArray[0] = &intPtr[0];
	ptrArray[1] = &intPtr[1];
	ptrArray[2] = &intPtr[2];
	ptrArray[3] = &intPtr[3];
	ptrArray[4] = NULL;
	intPtr[0] = &intVar[0];
	intPtr[1] = &intVar[1];
	intPtr[2] = &intVar[2];
	intPtr[3] = &intVar[3];

    joseph::count(ptrArray);
}

void test2()
{
	int **ptrArray[MAX_SIZE_PTRARRAY] = {};
	int  *intPtr[MAX_NUM_PTR];
	int   intVar[MAX_NUM_INTVAR];

	intVar[0] = 7;
	intVar[1] = 7;
	intVar[2] = 6;
	ptrArray[0] = &intPtr[0];
	ptrArray[1] = &intPtr[1];
	ptrArray[2] = &intPtr[2];
	ptrArray[3] = &intPtr[2];
	ptrArray[4] = &intPtr[3];
	ptrArray[5] = &intPtr[4];
	ptrArray[6] = NULL;
	intPtr[0] = &intVar[0];
	intPtr[1] = &intVar[1];
	intPtr[2] = &intVar[2];
	intPtr[3] = &intVar[2];
	intPtr[4] = &intVar[1];

    joseph::count(ptrArray);
}
int main()
{
	test1();
	test2();
	return 0;
}