#define _CRT_SECURE_NO_WARNINGS 1






#include <stdio.h>
#include <string.h>
#include <assert.h>



//1.strlen



//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��

//1.�������ķ���
//strlen()�����ķ���������size_t    size_t=unsigned int
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////int len = strlen("abcdef");
//	////printf("%d\n", len);
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////int len = strlen(arr);//error
//	//printf("%d\n",len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}








//2.strcpy


//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ�,����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ����ʼ��ַ
//	//*dest = *src;//����'\0'
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}







//3.strcat


//my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}










//4.strcmp
//��һ���ַ������ڵڶ����ַ���,�򷵻ش���0������
//��һ���ַ������ڵڶ����ַ���,�򷵻�0
//��һ���ַ���С�ڵڶ����ַ���,�򷵻�С��0������

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n",ret);
//	return 0;
//
//}









//5.strncpy


//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);  //6����Դ�ַ������ȻᲹ'\0'��������6
// 	return 0;
//}







//6.strncat
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8); //���Ჹ'\0'��Ŀ�����
//}







//7.strncmp        int strcmp(const char* string1,const char* string2,size_t count);


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3); //�Ƚ�ǰ3���ַ�
//	printf("%d\n",ret);
//	return 0;
//}







//8.strstr -- �������ַ���

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;//������ʼλ��p1
//	char* s2 = NULL;//������ʼλ��p2
//	char* cur = (char*)p1;
//	if(*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//����
//		s2 = (char*)p2;//����
//		while((*s1 != '\0') && (*s2 != '\0') && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;//cur�൱�ڴ浵��
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);//����p1��d�ĵ�ַ
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}










//9.strtok



//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 -- strtok
//	//zpw@bitedu.tech 
//	//zpw bitedu tech -- strtok
//
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//	
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	
//	//char* ret=strtok(buf, p);
//	//printf("%s\n",ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
// 	return 0;
//}









//10.strerror

#include <errno.h>
int main()
{
	//������   ������Ϣ
	//0 --     No error
	//1 --     Operation not permitted
	//2 --     No such file or directory
	//...
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��c���ԵĿ⺯����ִ�й�����,�����˴���,�ͻ�Ѷ�Ӧ�Ĵ�����,��ֵ��errno��
	//char* str = strerror(errno); //�����������ǰѴ�����ת���ɶ�Ӧ�Ĵ�����Ϣ,Ȼ�󷵻����ĵ�ַ
	//printf("%s\n",str);

	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		printf("open file successly\n");
	}
	return 0;
}