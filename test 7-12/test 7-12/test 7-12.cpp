#include<stdio.h>
#include<assert.h>

/*void my_strcpy(char* dest,char* src)
{
	while(*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = *src;
}*/

char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(*src != NULL);
    assert(*dest != NULL);

	while(*dest++ = *src++)  // �����������ȼ���һֱ������ֱ��'\0'��'\0'��asc2ֵ��0Ϊ��ѭ������
	{
	  ;
	}
	return ret;
}


int main()
{
	char arr1[] = "##############";
	char arr2[] = "holle";
	char* num = my_strcpy(arr1,arr2);
	printf("arr1 = %s",num);
	return 0;
}