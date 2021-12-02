#include<stdio.h>
#include<stdlib.h>

int main() {
	int number[] = { 10,25,36,83,56,84,99,41,65,2 };
	for (int i = 0; i < 10; i++) 
	{
		printf("%d\t", number[i]);
	}
	int m=number[0];
	for (int j = 1; j < 10; j++)
	{
		if (number[j] > m) 
		{
			m = number[j];
		}
	}
	printf("\nThe max number is %d", m);
	return 0;
}
