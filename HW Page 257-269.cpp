////[교과서 페이지 257 기본 8-1]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 : ");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하세요 : ");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하세요 : ");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하세요 : ");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf(" 합계 ==> %d \n", hap);
//}

////[교과서 페이지 258 기본 8-2]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//	
//	printf("1번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[2]);
//	printf("4번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//}

////[교과서 페이지 260 기본 8-3]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d번째 숫자를 입력하세요 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//}

////[교과서 페이지 264 기본 8-4]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4] = { 100,200,300,400 };
//	int bb[] = { 100,200,300,400 };
//	int cc[4] = { 100,200 };
//	int dd[4] = { 0 };
//	int i;
//
//	for (i = 0; i <= 3; i++)
//		printf("aa[%d]==>%d\t", i, aa[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i, bb[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==>%d\t", i, cc[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("dd[%d]==>%d\t", i, dd[i]);
//	printf("\n");
//}

////[교과서 페이지 265 기본 8-5]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[100];
//	int bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99-i];
//	}
//
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}


////[교과서 페이지 267 기본 8-6]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[] = {10,20,30,40,50};
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);
//}

////[교과서 페이지 269 기본 8-7]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';// 중간에 정의했던 -문자를 다른 문자로 바꿀 수 있음!
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//
//	printf("문자열 배열 ss ==> %s \n", ss);// 문자배열을 printf 할때는 ㄴ%s 를 쓰고 배열의 이름을 씀 (옆의 예제 처럼 ss 로, 이때 []눈 없어오 됨!
//}