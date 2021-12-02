#include<stdio.h>
#include<stdlib.h>

int main() {
	int number[15] = { 0,2,4,6,8,10,12,14,16,18,20,22,24,26,28 };
	int a, b;
	int first, last, middle;
	first = 0;
	last = 28;
	printf("Enter a nuber between 0 and 28 :");
	scanf_s("%d", &a);
	for (int i = 0; i < 15; i++)
	{
		printf("%d	", i);
	}
	printf("\n");
	printf("--------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%d	", number[i]);
	}
	printf("\n");
	while (0 <= a <= 28) 
	{
		middle=(first+last)/2;
		if (a > middle) 
		{
			first = middle+2;
		}
		if(a < middle)
		{
			last = middle-2;
		}
		if (a == middle)
		{
			for (int i = 0; i < 15 ;i++)
			{
				if (number[i] == a) 
				{
					b = i;
				}
			}
			printf("%d found in element %d", a,b);
			return 0;
		}
		if (first > last)
		{
			printf("Not found! %d isn't present in the list.\n", a);
			return -1;
		}
	}
}
