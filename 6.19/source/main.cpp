#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int s1, s2, s, ss[13] = { 0 };
	int i, r, j;

	for (i = 0; i < 36000; i++)
	{
		s1 = (rand() % 6) + 1;
		s2 = (rand() % 6) + 1;

		s = s1 + s2;
		if (s == 2)
			ss[2] += 1;

		if (s == 3)
			ss[3] += 1;

		if (s == 4)
			ss[4] += 1;

		if (s == 5)
			ss[5] += 1;

		if (s == 6)
			ss[6] += 1;

		if (s == 7)
			ss[7] += 1;

		s = s1 + s2;
		if (s == 8)
			ss[8] += 1;

		if (s == 9)
			ss[9] += 1;

		if (s == 10)
			ss[10] += 1;

		if (s == 11)
			ss[11] += 1;

		if (s == 12)
			ss[12] += 1;
	}


	for (r = 2; r < 13; r++)
	{
		if(ss[r]>1000)
			printf("sum=%d    ",r);

		else
			printf("sum=%d   ", r);
	}

	printf("\n");

	for (j = 2; j < 13; j++)
	{
		printf("%d ¦¸  ", ss[j]);
	}

	system("pause");
	return 0;
}