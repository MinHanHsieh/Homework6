#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#define SIZE 7

int main(void)
{
	int face,face2,f,i,j;
	int roll;
	int sum[36] = { 0 };

	srand(time(0));
	
	for (roll = 1; roll <= 36000; roll++)
	{
		face = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		for ( i = 1; i <= 6; i++)
		{
			if (face2 == i)
			{
				for ( j = 1; j <= 6; j++)
				{
					if(face == j)
					++sum[ j - 1+(i-1)*6];
				}
			}
		}
	}

	printf("	1	2	3	4	5	6\n");

	for ( i = 1; i <= 6; i++) 
	{
		printf("%d",i);
		for (j = 1; j <= 6; j++) 
		{
			printf("	%d ", sum [j - 1 + (i - 1) * 6]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}