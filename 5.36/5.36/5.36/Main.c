#include<stdio.h>
#include<stdlib.h>

function(int x,char A,char B,char C);

long int temp = 0;

int main(void)
{
	int x,temp=1;
	printf("Enter the level:");
	scanf_s("%d", &x);
	function(x, 'A', 'B', 'C');
	system("pause");
	return 0;
}

 function(int x, char A, char B, char C)
{
	if (x == 1)
	{
		printf("%d次,%d從%c到%c\n", ++temp, x, A, C);
	}
	else
	{
		function(x - 1, A , C , B);
		printf("%d次,%d從%c到%c\n", ++temp, x, A, C);
		function(x - 1, B , A , C);
	}
}