#define _CRT_SECURE_NO_WARNINGS 1






#include <stdio.h>
#include <string.h>
#include <assert.h>



//1.strlen



//1.计数器的方法
//2.递归
//3.指针-指针

//1.计数器的方法
//strlen()函数的返回类型是size_t    size_t=unsigned int
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
//	//拷贝src指向的字符串到dest指向的空间,包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目的空间的起始地址
//	//*dest = *src;//拷贝'\0'
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
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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
//第一个字符串大于第二个字符串,则返回大于0的数字
//第一个字符串等于第二个字符串,则返回0
//第一个字符串小于第二个字符串,则返回小于0的数字

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
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
//	strncpy(arr1, arr2, 6);  //6大于源字符串长度会补'\0'至个数到6
// 	return 0;
//}







//6.strncat
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8); //不会补'\0'至目标个数
//}







//7.strncmp        int strcmp(const char* string1,const char* string2,size_t count);


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3); //比较前3个字符
//	printf("%d\n",ret);
//	return 0;
//}







//8.strstr -- 查找子字符串

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;//保留起始位置p1
//	char* s2 = NULL;//保留起始位置p2
//	char* cur = (char*)p1;
//	if(*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;//重置
//		s2 = (char*)p2;//重置
//		while((*s1 != '\0') && (*s2 != '\0') && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;//cur相当于存档点
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);//返回p1中d的地址
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
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
//	//切割buf中的字符串
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
	//错误码   错误信息
	//0 --     No error
	//1 --     Operation not permitted
	//2 --     No such file or directory
	//...
	//errno 是一个全局的错误码的变量
	//当c语言的库函数在执行过程中,发生了错误,就会把对应的错误码,赋值到errno中
	//char* str = strerror(errno); //函数的作用是把错误码转化成对应的错误信息,然后返回他的地址
	//printf("%s\n",str);

	//打开文件
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