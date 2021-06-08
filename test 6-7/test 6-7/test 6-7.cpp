#include<stdio.h>


struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello bit\n";
	struct T t = {"hehe",{2,'x',"hello world",9.8},arr};
	struct T* p = &t;
	printf("%s\n",t.ch);
	printf("%s\n",t.pc);
	printf("%d\n",t.s.a);
	printf("%c\n",t.s.c);
	printf("%s\n",t.s.arr);
	printf("%lf\n",t.s.d);
	printf("%d",&t);

	return 0;
}