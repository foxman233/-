#include<stdio.h>

////1.дһ���������ز����������� 1 �ĸ���
////���磺 15       0000 1111       4 �� 1
////����ԭ�ͣ�
////int  count_one_bits(unsigned int value)
////{
////       // ���� 1��λ��
////}
//
//
////int count_one_bits(unsigned int a)
////{
////	int add = 0;
////	int b = 0;
////	while(a)
////	{
////		b = a%2;
////		if(b == 1)
////		add++;
////		a/=2;
////	}
////	return add;
////
//
//int count_one_bits(int a)
//{
//int add = 0;
//
//while(a)
//{
//	a=a&(a-1);
//	add++;
//}
///*int i = 0;
//for(i = 0;i<32;i++)
//{ 
//	if( a&1 == 1)
//	add++;
//	a = a >> 1;
//}*/
//return add;
//}
//
//int main()
//{
//int i = 0;
//scanf("%d",&i);
//int a = count_one_bits(i);
//printf("����������������%d��1\n",a);
//return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int c = 0;
//	int jishu[16] = {};
//	int oushu[16] = {};
//	int j_count = 0;
//	int o_count = 0;
//	int num = 0;
//	scanf("%d",&a);
//	for(i = 1;i<=32;i++)
//	{
//		if(i%2 == 1)
//	     {  
//			c = a >> i-1 ;
//			b = c&1;
//			jishu[15-j_count] = b;
//			j_count++;
//		 }
//		if(i%2 == 0)
//		{
//			c = a >> i-1;
//			b = c&1;
//			oushu[15-o_count] = b;
//			o_count++;
//		}
//	}
//	for(num = 0;num < 16;num++)
//	{
//		printf("%d",*(jishu+num));
//		
//	}
//	printf("\n");
//	for(num = 0;num < 16;num++)
//	{
//		printf("%d",*(oushu+num));
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//
//	char arr[39] = "abcdef";
//	int a = strlen(arr);
//	printf("%d\n",a);
//	return 0;
//}


//3. ���һ��������ÿһλ��

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int arr[32] = {0};
//	scanf("%d",&a);
//	for(i = 0;i < 32;i++)
//	{
//	    int c = a >> i;
//	    int b = c&1;
//		arr[31-i] = b;
//	}
//	for(i = 0;i < 32;i++)
//		printf("%d",arr[i]);
//	return 0;
//}

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//�������:7

int main()
{
	int m = 0;
	int n = 0;
	int a = 0;
	int count = 0;
	int i = 0;
	scanf("%d%d",&m,&n);
	a = m ^ n;
	while(a)
	{
		a = a&(a - 1);
		count++;
	}
	/*for(i = 0;i < 32;i++)
    {
		if(a&1 == 1)
			count++;
		a = a >> 1;
	}*/
	printf("%d",count);

	return 0;
}