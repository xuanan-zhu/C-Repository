#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <windows.h>
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else
//	//{
//	//	printf("未成年\n");
//	//}
//	/*int i = 1;
//	while (i<=100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\t", i);
//		}
//		i++;
//	}*/
//	//char day = 0;
//	//scanf("%s", &day);
//	//switch (day)
//	//{
//	//case 'A':
//	//	printf("1");
//	//	break;
//	//case 'B':
//	//	printf("2");
//	//	break;
//	//case 'C':
//	//	printf("3");
//	//default:
//	//	printf("输入错误\n");
//	//	break;
//	//}
//	//int i = 0;
//	//while (i <= 10)
//	//{
//	//	if (5 == i)
//	//	{
//	//		i++;
//	//		continue;
//	//	}
//	//	printf("%d", i);
//	//	i++;
//	//}
//	//int ch = 0;
//	//while (ch = getchar != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	char password[20] = { 0 };
//	printf("please input password");
//	scanf("%s", password);
//	printf("please input Y");
//	//getchar();//清理缓冲区
//	//gets
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 0; i = 0 ; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int score = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		score *= i;
//		sum += score;
//	}
//	printf("%d\n%d", score, sum);
//	return 0;
//}


//折半查找
//int main()
//{
//	static int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	int i = 0;
//	do
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = arr[mid];
//		}
//		else 
//		{
//			right = arr[mid];
//		}
//		if (left > right)
//		{
//			printf("没找到\n");
//			break;
//		}
//	 ;
//	} while (k != arr[mid]);
//	printf("数字为->%d\n位置 ->%d", arr[mid], mid);
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to my wonderful";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	do
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	Sleep(1000);
//	system("cls");
//	left++;
//	right--;
//	} while (right != left);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	char pwd[] = "123456";
//	char ans[] = { 0 };
//	do
//	{
//		scanf("%s", ans);
//		if (strcmp(ans, pwd) == 0)
//		{ 
//			printf("登陆成功！");
//			break;
//		}
//		else
//		{
//			printf("重试！");
//			i++;
//		}
//	} while (i <=3);
//	i > 3 ? printf("登陆失败！"): printf("欢迎进入！");
//	return 0;
//}

//猜数字游戏

void menu()
{
	printf("*********************\n");
	printf("***** 1 : play ******\n");
	printf("******2 : exit ******\n"); 
	printf("*********************\n");

}
void game()
{
	int gress = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("gress->\n");
		scanf("%d", &gress);
		if (gress > ret)
		{
			printf("大了");
		}
		else if (gress < ret)
		{
			printf("小了");
		}
		else
		{
			printf("恭喜你成功了");
			break;
		}
	}
}
int main()
{
	int a = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		break;
	} while (1);
	printf("bye");
	return 0;
}