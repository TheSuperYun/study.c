#include<stdio.h>
void my_strcpy(char* arr2, char* arr1)
{
	int i = 0;
	while ((*arr1)!='\0')
	{
		*arr2 = *arr1;
		i++;
		arr1++;
		arr2++;
	}
	*arr2 = *arr1;
	
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}