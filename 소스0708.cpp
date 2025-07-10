//#include<stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	/*int a;
//	int b;
//	printf("변수 a 와 b 의 값 입력: ");
//	scanf("%d %d", &a, &b);
//	printf("+값: %d\n", a+b);
//	printf("-값: %d\n", a - b);
//	printf("*값: %d\n", a * b);
//	printf("/값: %d\n", a / b);
//	printf("%%값: %d\n", a % b);*/
//
//	//[~페이지14 문제2 답~]
//	/*int number;
//	printf("값을 입력: ");
//	scanf("%d", &number);
//	printf("나머지의 값: %d\n", number % 50);*/
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
//	printf("돈을 입력해주세요. (원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");*/
//
//	//[~페이지15 문제3~]
//	/*int price;
//	int coinjelly;
//	printf("젤리의 가격을 입력해주세요. (원)");
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
//	printf("거스름돈 500원 %d개, ", coin500);
//	printf("거스름돈 100원 %d개, ", coin100);
//	printf("거스름돈 50원 %d개, ", coin50);
//	printf("거스름돈 10원 %d개. 끝.", coin10);*/
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자: %d\n", randInt);
//	printf("다음숫자: %d", nextInt);
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
//	printf("첫숫자: %d\n", randInt);//0~9 나옴
//	printf("다음숫자: %d", nextInt);//50~59 나옴
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	printf("내 주머니에 있는 돈은");
	int myMoney = (rand()) % 10 + 1) * 1000;
	printf("%d원이다.\n", myMoney);
	int coin500 = rand() % 4 * 500;
	int coin100 = rand() % 5000;
	coin100 = coin100 / 100 * 100;
	printf("그리고 과자의 가격은");
	printf("%d원이다.", coin500 + coin100);
	printf("\n나는 과자를 살 수 있을까?");
	return 0;
}