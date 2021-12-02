#include<stdio.h>
#include<stdlib.h>

int big(int array[10]);

int main(void)
{
	int i, max , array[10] = { 3,9,7,0,2,4,1,8,6,5 };
	max = 0;

	max = big(array);

	printf("³Ì¤j­È¬°:%d\n", max);

	system("pause");
}

int big(int array[10])
{
	int max = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return max;
}