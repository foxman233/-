#include<stdio.h>


void paixu(int arr[],int sz)//2//
{
	int i = 0;
	int num, j;
	for (i = 0; i < sz-1 ; i++)//冒泡排序  排9躺
	{
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
			}

		}
	}
	
}

int main()
{
	int arr[] = { 9,8,10,6,15,4,3,2,1,0 };
	int sz = ((sizeof(arr)) / sizeof(arr[0]));//数组传参只是传首元素的地址
	int k = 0;
	paixu(arr,sz);
	for(k=0;k < sz;k++)
	{
		printf("%d ",arr[k]);
	}

	return 0;
}



//int main()//1//
//{
//	int arr[3][4] = { {1,2},{4,5} };
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (n = 0; n < 4; n++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,n, &arr[i][n]);
//		}
//		printf("\n");
//	}
//	return 0;
//}