#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <windows.h>
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("����\n");
//	//else
//	//{
//	//	printf("δ����\n");
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
//	//	printf("�������\n");
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
//	//getchar();//��������
//	//gets
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
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

//����n�Ľ׳�
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


//�۰����
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
//			printf("û�ҵ�\n");
//			break;
//		}
//	 ;
//	} while (k != arr[mid]);
//	printf("����Ϊ->%d\nλ�� ->%d", arr[mid], mid);
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
//			printf("��½�ɹ���");
//			break;
//		}
//		else
//		{
//			printf("���ԣ�");
//			i++;
//		}
//	} while (i <=3);
//	i > 3 ? printf("��½ʧ�ܣ�"): printf("��ӭ���룡");
//	return 0;
//}

//��������Ϸ

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
			printf("����");
		}
		else if (gress < ret)
		{
			printf("С��");
		}
		else
		{
			printf("��ϲ��ɹ���");
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
		printf("��ѡ��:>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		break;
	} while (1);
	printf("bye");
	return 0;
}