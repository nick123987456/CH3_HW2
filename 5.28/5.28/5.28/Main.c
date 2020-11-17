#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char word;
	int word_asc;

	printf("Enter a word:");
	scanf_s(" %c", &word);
	word_asc = (int)word;
	if ((90 >= word_asc)&&(word_asc >= 65))
	{
		printf("%c\n", (char)word_asc+32);
	}
	else
	{
		printf("%c\n", (char)word_asc-32);
	}

	system("pause");
	return 0;
}