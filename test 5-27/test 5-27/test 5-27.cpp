#include<stdio.h>

int strelen(char arr[])
{
	int sum = 0;
	int i = 0;
	while (1)
	{
		if (arr[i] != '\0')
		{
			sum++;
		}
		else
			break;
		i++;
	}
	return sum;
}

void reverse_string(char arr[])
{
	int sum = arr[0];
	int len = strelen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';//此操作意在改变电脑识别\0，让strelen的值发生改变
	if (strelen(arr) >= 2)
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = sum;
}

void print(char arr[])
{
	int i = 0;
	for (i = 0; i < strelen(arr); i++)
	{
		printf("%c", arr[i]);
	}
}

int main()
{
	char arr[] = "abcdefg";

	reverse_string(arr);
	print(arr);
}

//void print(int i)
//{
//	printf("%d ", (i % 10));
//	i /= 10;
//	if (i != 0)
//		print(i);
//}
//
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	print(i);
//
//	return 0;
//}


//
//void qumo(int i)
//{
//	int y = 0;
//	printf("奇数为:");
//	for (y = 30;y >= 0;y-=2)
//	{
//		printf("%d", (i >> y) & 1);
//	}
//	printf("\n");
//	printf("偶数为:");
//	for (y = 31; y >= 1; y -= 2)
//	{
//		printf("%d", (i >> y) & 1);
//	}
//}
//
//int main()
//{
//	int k = 0;
//	scanf_s("%d", &k);
//	qumo(k);
//}

/*int qumo(int i)
{
	int num = 0;
	while (i)
	{
		i = i & (i - 1);//更高效
		num++;
	}
	return num;
}

int getchun(int m,int n)
{
	int c = m ^ n;
	return qumo(c);
}

int main()
{
	int m = 0;
	int n = 0;
	scanf_s("%d%d", &m, &n);
	 int sum = getchun(m,n);
	 printf("%d", sum);
	return 0;
}*/

//int qumo(int i)
//{
//	int num = 0;
//	while (i)
//	{
//		if(i % 2 == 1)
//			num++;
//		i = i / 2;
//	}
//	return num;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int bor = qumo(n);
//	printf("%d",bor);
//	return 0;
//}