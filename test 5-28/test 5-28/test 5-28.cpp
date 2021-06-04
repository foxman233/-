#include<stdio.h>

int qiufang(int n,int k)
{
	if (k > 0)
	{
		k--;
		return n * qiufang(n, k);
	}
	else
	{
		return 1;
	}
}


int main()
{

	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	int sum = qiufang(n,k);
	printf("%d", sum);

	return 0;
}

/*int Digitsum(int a)
{
	int b = a % 10;
	int c = a / 10;
	if (c != 0)
		b = b + Digitsum(c);
	return b;
}

int main()
{
	int k = Digitsum(1727);
	printf("%d", k);

}*/