//[~페이지 69, 예제모음03~]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / % ==> ");// 질문: 왜 여기서는 %%를 안쓰고 %로 쓰는지?
//	scanf(" %c", &k);// 질문: 왜 %c 앞에 공백이 있어야 하는지?
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+')
//	{
//		result = a + b;
//		printf("%d + %d = %d\n", a, b, result);
//	}
//
//	if (k == '-')
//	{
//		result = a - b;
//		printf("%d - %d = %d\n", a, b, result);
//	}
//
//	if (k == '*')
//	{
//		result = a * b;
//		printf("%d * %d = %d\n", a, b, result);
//	}
//
//	if (k == '/')
//	{
//		if (b != 0)
//		{
//			result = a / b;
//			printf("%d / %d = %d\n", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다.\n");
//	}
//
//	if (k == '%')
//	{
//		if (b != 0) {
//			result = a % b;
//			printf("%d %% %d = %d\n", a, b, result);
//		}
//		else
//			printf("0으로 나누면 나머지값이 안됩니다.\n");
//	}
//	return 0;
//}