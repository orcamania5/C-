////[������ ������ 257 �⺻ 8-1]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &a);
//	printf("2��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &b);
//	printf("3��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &c);
//	printf("4��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf(" �հ� ==> %d \n", hap);
//}

////[������ ������ 258 �⺻ 8-2]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//	
//	printf("1��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[0]);
//	printf("2��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[1]);
//	printf("3��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[2]);
//	printf("4��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
//}

////[������ ������ 260 �⺻ 8-3]
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
//		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
//}

////[������ ������ 264 �⺻ 8-4]
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

////[������ ������ 265 �⺻ 8-5]
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
//	printf("bb[0]�� %d, bb[99]�� %d �Էµ�\n", bb[0], bb[99]);
//}


////[������ ������ 267 �⺻ 8-6]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int aa[] = {10,20,30,40,50};
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("�迭 aa[]�� ����� ������ %d �Դϴ�.\n", count);
//}

////[������ ������ 269 �⺻ 8-7]
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';// �߰��� �����ߴ� -���ڸ� �ٸ� ���ڷ� �ٲ� �� ����!
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//
//	printf("���ڿ� �迭 ss ==> %s \n", ss);// ���ڹ迭�� printf �Ҷ��� ��%s �� ���� �迭�� �̸��� �� (���� ���� ó�� ss ��, �̶� []�� ����� ��!
//}