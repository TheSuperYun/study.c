#include<stdio.h>

void daozhun(char* left,int i)
{
	if(*left!='\0')
	{
		int i = 0;
		char temp[10] = { 0 };
		while (*left != ' '&&*left!='\0')
		{
			temp[i] = *left;
			left++;
			i++;
		}
		 daozhun(++left,i);
		int a = 0;		
		while (temp[a] != '\0')
		{

			printf("%c", temp[a]);
			a++;
		}
		printf(" ");
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int i = 0;
	char arr[100] = {"I love you."};
	
	daozhun(arr,i);
	return 0;
}