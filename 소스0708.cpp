//#include<stdio.h>
//
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���");
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	/*int a;
//	int b;
//	printf("���� a �� b �� �� �Է�: ");
//	scanf("%d %d", &a, &b);
//	printf("+��: %d\n", a+b);
//	printf("-��: %d\n", a - b);
//	printf("*��: %d\n", a * b);
//	printf("/��: %d\n", a / b);
//	printf("%%��: %d\n", a % b);*/
//
//	//[~������14 ����2 ��~]
//	/*int number;
//	printf("���� �Է�: ");
//	scanf("%d", &number);
//	printf("�������� ��: %d\n", number % 50);*/
//
//	//int data1 = 6 / 2;
//	//printf("%d=6/2\n", data1);
//	//int data2 = 6 / 3;
//	//printf("%d=6/3\n", data2);
//	//int data3 = 6 / 4;
//	//printf("%d=6/4\n", data3);
//
//	/*int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", first);
//	printf("%d/%d\n", number1, number2);*/
//
//	/*int coin;
//	printf("���� �Է����ּ���. (��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��, ", coin10000);
//	printf("��õ���� %d��, ", coin5000);
//	printf("õ���� %d��, ", coin1000);
//	printf("�������� �����Դϴ�.");*/
//
//	//[~������15 ����3~]
//	/*int price;
//	int coinjelly;
//	printf("������ ������ �Է����ּ���. (��)");
//	scanf("%d", &price);
//	int remainder = 1000 - price;
//
//	int coin500 = remainder / 500;
//	coinjelly = remainder % 500;
//	int coin100 = coinjelly / 100;
//	coinjelly = coinjelly % 100;
//	int coin50 = coinjelly / 50;
//	coinjelly = coinjelly % 50;
//	int coin10 = coinjelly / 10;
//	coinjelly = coinjelly % 10;
//	printf("�Ž����� 500�� %d��, ", coin500);
//	printf("�Ž����� 100�� %d��, ", coin100);
//	printf("�Ž����� 50�� %d��, ", coin50);
//	printf("�Ž����� 10�� %d��. ��.", coin10);*/
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù����: %d\n", randInt);
//	printf("��������: %d", nextInt);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù����: %d\n", randInt);//0~9 ����
//	printf("��������: %d", nextInt);//50~59 ����
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	printf("�� �ָӴϿ� �ִ� ����");
	int myMoney = (rand()) % 10 + 1) * 1000;
	printf("%d���̴�.\n", myMoney);
	int coin500 = rand() % 4 * 500;
	int coin100 = rand() % 5000;
	coin100 = coin100 / 100 * 100;
	printf("�׸��� ������ ������");
	printf("%d���̴�.", coin500 + coin100);
	printf("\n���� ���ڸ� �� �� ������?");
	return 0;
}