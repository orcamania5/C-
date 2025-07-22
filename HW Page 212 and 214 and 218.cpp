////[교과서 페이지 212 기본 6-16]
//#include <stdio.h>
//
//int main()
//{
//	int i, k;
//
//	for (i = 1, k = 1; i <= 9; i++, k++)
//		printf(" %d X %d = %d \n", i, k, i * k);
//
//	return 0;
//}

////[교과서 페이지 214 기본 6-17]
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	i = 0;
//	for (;;)
//	{
//		printf("%d \n", i);
//		i++;
//	}
//	return 0;
//}


////[교과서 페이지 218 예제모음 15번]
//#include <stdio.h>
//
//int main()
//{
//	int i;
//
//	for (i = 0; i < 128; i++)
//	{
//		if (i % 16 == 0)
//		{
//			printf("---------------------\n");
//			printf("10진수  16진수  문자 \n");
//			printf("---------------------\n");
//		}
//		printf("%5d %5x %5c\n", i, i, i);
//	}
//	return 0;
//}