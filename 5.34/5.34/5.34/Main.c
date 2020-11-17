#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int ponent,i;
	long float base,total;
	printf("Enter ponent and base:");
	scanf_s("%d %fl", &ponent, &base);
	total = base;
	for (i = 1; i <= ponent; i++)
	{
		total = total * base;
	}
	printf("%0.2fl\n", total);
	system("pause");
	return 0;
}





