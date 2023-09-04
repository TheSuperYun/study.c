#include<stdio.h>
char* my_strstr(const char* str1,const char* str2)
{
	const char* s1 = str1;//char email[] = "zpw@bbbitejiuyeke.com";
	const char* s2 = str2;//char substr[] = "bitejiuyeke";
	
	while (*s1 != '\0' )
	{	
		s1 = str1;
		s2 = str2;						
		while ( *s1 != '\0'&& *s2 != '\0' &&*s1 == *s2)
		{								
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return str1;
			str1++;			
		}
		str1++;
	}
	return NULL;
}
int main()
{
	char email[] = "zpw@bbbitejiuyeke.com";
	char substr[] = "bitejiuyeke";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("Ã»ÓĞÕÒµ½");
	}
	else
		printf("%s", ret);
	return 0;
}