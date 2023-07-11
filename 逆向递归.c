#include <stdio.h>
void reverse_string(char arr[])
{
	
	if (*arr != '\0')
	{
		reverse_string(arr + 1);
	}
	printf("%c", *arr);
}
int main()
{
	int i = 0;
	char arr[] = "abcdef";
	reverse_string(arr);

	return 0;
}