#include<stdio.h>
#include<stdlib.h>

long int function(int x);

int main(void)
{
	int number1;
	printf("Enter the number:");
	scanf_s("%d", &number1);
	printf("%d\n", function(number1));
	system("pause");
	return 0;
}

long int function(int x)
{
	int i;
    if (x == 0)
	{
		return 0;
	}
	else if (x==1)
	{
		return 1;
	}
	else
	{
		i = function(x - 1) + function(x - 2);
		return i;
	}
}