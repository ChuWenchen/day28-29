#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = 1;; i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//
//	return 0;
//}

//   将一句话按单词倒序，标点符号不倒 ，  i like beijing.         输出  beijing.i like
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char mid = *left;
		*left = *right;
		*right = mid;
		left++;
		right--;
   }
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	reverse(arr, arr+strlen(arr) - 1);  // 交换整个字符串
	printf("%s\n", arr);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", arr);
	return 0;
}