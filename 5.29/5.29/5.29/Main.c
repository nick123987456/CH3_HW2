#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number1,number2,i,j;
	printf("Enter two interger:");
	scanf_s("%d %d", &number1, &number2);
	for (i = 1; i <= number1 * number2; i++)
	{
		if ((i%number1 == 0) && (i%number2==0))
		{
			printf("%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}