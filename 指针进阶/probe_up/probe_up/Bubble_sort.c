#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char * p,int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c ", p[i]);
	}
}
void change(void * base, int j, unsigned int Long)//这里要注意，我们要把指针变为一个字节，然后一个字节一个字节的替换
{
	int tmp = 0;
	for (size_t m = 0; m < Long; m++)
	{
		tmp = *((char*)base + j * Long + m);
		*((char*)base + j * Long + m) = *((char*)base + (j+1) * Long + m);
		*((char*)base + (j+1) * Long + m) = tmp;
	}
}
//函数指针 int (*p)(void * c1, void * c2)
//这里之所以强制转化为char类型是因为，char类型的所占字节为1是最小单位，所以方便调整
void sort(void * base, int size, unsigned int Long, int (*p)(void * c1, void * c2))
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if ((*p)((char*)base + j * Long, (char*)base + (j + 1) * Long)==1)
			{
				change(base,j, Long);
			}
		}
	}
}

void Bubble_sort(int* p, int size)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < size-1; i++)
	{
		for (j = 0; j < size-i-1; j++)
		{
			if (*(p + j) < *(p + j + 1))
			{
				tmp = *(p + j);
				*(p + j) = *(p + j +1);
				*(p + j + 1) = tmp;
			}
		}
	}
}

struct STU
{
	char name[10];
	int age;
};


//这个函数是比较规则
int battle(void * c1, void * c2)
{
	return (*(int *)c1 < *(int*)c2);
}

int strbattle(void* c1, void* c2)
{
	return (*(char*)c1 > *(char*)c2);
}

//结构体的比对规则
int structbattle(void* c1, void* c2)
{
	struct STU* p1 = c1;
	struct STU* p2 = c2;
	return strcmp( p1->name, p2->name);
	//return p1->age > p2->age;
}

int main()
{
	char arr[] = { 'b','c','a'};
	struct STU stu[3] = { {"hong", 25} ,{"bai",23},{"zx",35} };

	//int size = sizeof(arr) / sizeof(arr[0]);
	int size = sizeof(stu) / sizeof(stu[0]);
	//int size = sizeof(arr) / sizeof(arr[0]);

	//Bubble_sort(arr, size);

	sort(stu, size, sizeof(stu[0]), structbattle);

	/*print(arr, size);*/

	return 0;
}
//我们要把排序函数改一下增加通用性

