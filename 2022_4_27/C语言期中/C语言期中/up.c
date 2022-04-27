#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char * start1,char* end1)
{
	char tmp = 0;
	while (start1 < end1)
	{
		tmp = *start1;
		*start1 = *end1;
		*end1 = tmp;
		start1++;
		end1--;
	}

}

int main()
{ 
	char str[100] = {0};
	gets(str);
	int size = strlen(str);
	rev(str, str + size - 1);
	char* start = str;
	char* end = start;

	while (*start!='\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		rev(start, end - 1);
		if (*end != '\0')
		{
			start = ++end;
		}
		else
		{
			start = end;
		}
		
	}

	printf("%s\n", str);  //通过变量输出
	return 0;
}

