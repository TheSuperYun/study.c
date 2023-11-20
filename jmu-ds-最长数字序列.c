#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_continuous(char* ps,int i)
{
	int temp = 0;
	if ((char)*(ps + i) >= '0' && (char)*(ps + i) <= '9')
	{
		while ((char)*(ps + i) >= '0' && (char)*(ps + i) <= '9')
		{
			temp++;
			i++;
		}
		return temp;
	}
	else if (((char)*(ps + i) >= 'A' && (char)*(ps + i) <= 'Z')|| ((char)*(ps + i) >= 'a' && (char)*(ps + i) <= 'z'))
	{
		while (((char)*(ps + i) >= 'A' && (char)*(ps + i) <= 'Z') || ((char)*(ps + i) >= 'a' && (char)*(ps + i) <= 'z'))
		{
			temp++;
			i++;
		}
		return -temp;
	}
}
int main()
{
	char arr[100] = {'\0'};
	fgets(arr, sizeof(arr), stdin);
	int flag = 1;
	int j = 0;
	while (arr[j] != '\n')
	{
		if (!isspace(arr[j]))
		{
			flag = 0;
		}
		j++;
	}
	if (flag == 1)
	{
		printf("NULL");
		return 0;
	}
	int  i = 0, max = 0, size = 0;
	while (arr[i]!='\0')
	{
		int temp = 0;
		temp = is_continuous(&arr[0],i);
		if (temp > 0)
		{
			if (temp > max)
			{
				max = temp;
				size += i;
			}
			i += temp;
		}
		else
		{
			i += -temp;
		}
		
	}
	if (i == 0)
	{
		printf("NULL");
	}
	else
	{
		printf("%d %d", size, max);
	}
	
	return 0;
}