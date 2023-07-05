#include <stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "fdsafa";
	int len = my_strlen(arr);
	printf("len=%d", len);
	return 0;
}