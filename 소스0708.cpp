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

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//  printf("\ncoin500과 coin100의 값은 각각 %d %d 이다.", coin500, coin100);
//	printf("\n나는 과자를 살 수 있을까?\n");
//	return 0;
//}

//[~페이지16 문제4~]
//myMoney의 범위는 1000 ~ 10000.
//coin500의 범위는 0~3 * 500 ==> 0 ~ 1500.
//coin100의 범위는 0 ~ 4999 / 100 * 100 ==> 0 ~ 4900.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple != = 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return = 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

////[~페이지19 문제1~]
//int main()
//{
//	int input;
//	printf("값은 입력하세요 ==> ");
//	scanf("%d", &input);
//	
//	if (input == 0)
//		printf("입력한 값은 0입니다.\n");
//	else if (input % 2 >= 1)
//		printf("입력한 값은 홀수입니다.\n");
//	else if (input / 2 >= 1)
//		printf("입력한 값은 짝수입니다.\n");
//	
//	return 0;
//}

////[~페이지19 문제2~]
//int main()
//{
//	int input;
//	printf("값은 입력하세요 ==> ");
//	scanf("%d", &input);
//
//	if (input >= 10 && input <= 99)
//		printf("input은 두 자리 숫자입니다.\n");
//	else
//		printf("input은 두 자리 숫자가 아닙니다.\n");
//
//	return 0;
//}

//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

////[~페이지20 문제3~]
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요 ==> ");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//		printf("전체, 12세, 15세 관람가 영화를 볼 수 있습니다.\n");
//	else if (y_age >=12)
//		printf("전체, 12세 관람가 영화를 볼 수 있습니다.\n");
//	else
//		printf("전체 관람가 영화를 볼 수 있습니다.\n");
//
//	return 0;
//}

//[~페이지20 문제4~]
//int main()
//{
//	char initial;
//	printf("영어문자 1개를 입력하세요 ==> ");
//	scanf("%c", &initial);
//
//	if (initial >= 97 && initial <= 122)
//		printf("소문자입니다.\n");
//	else if (initial >= 65 && initial <= 90)
//		printf("대문자입니다.\n");
//	else
//		printf("소문자도 대문자도 아닙니다!\n");
//
//	return 0;
//}

//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number %2==0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//[~페이지22 문제5~]
//int main()
//{
//	char input;
//	printf("키를 입력하시오 ==> ");
//	scanf("%c", &input);
//
//	if (input == 'w')
//		printf("위 방향키를 입력하셨습니다.\n");
//	else if (input == 'a')
//		printf("좌 방향키를 입력하셨습니다.\n");
//	else if (input == 'd')
//		printf("우 방향키를 입력하셨습니다.\n");
//	else if (input == 's')
//		printf("아래 방향키를 입력하셨습니다.\n");
//	return 0;
//}

//[~페이지22 문제6~]
//int main()
//{
//	int gauge;
//	printf("0에서 100 사이의 값을 입력하시오 ==> ");
//	scanf("%d", &gauge);
//
//	if (gauge >= 45 && gauge <= 55)
//		printf("Perfect.\n");
//	else if (gauge >= 35 && gauge <= 65)
//		printf("Excellent.\n");
//	else
//		printf("Good.\n");
//	return 0;
//}

////[~페이지22 문제7~]
//int main()
//{
//	int input;
//	printf("값을 입력하시오 ==> ");
//	scanf("%d", &input);
//
//	if ((input % 3) == 0 && (input /3 ) >= 1)
//	{
//		printf("3의 배수입니다.\n");
//		if ((input % 6) == 0 && (input / 6) >= 1)
//		{
//			printf("6의 배수입니다.\n");
//			if ((input % 9) == 0 && (input / 9) >= 1)
//			{
//				printf("9의 배수입니다.\n");
//			}
//		}
//		else
//			if ((input % 9) == 0 && (input / 9) >= 1)
//			{
//				printf("9의 배수입니다.\n");
//			}
//	}
//	return 0;
//}

//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요: ");
//	scanf("%c", &command);
//	
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//		break;
//	default:	printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n");	break;
//	case 2: printf("two\n");	break;
//	case 3: printf("three\n");	break;
//	}
//	return 0;
//}

////[~페이지24 문제1~]
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("값 2개와 사칙연산 기호를 입력하세요 ==> ");
//	scanf("%d %d %c", &input1, &input2, & oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2);	break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2);	break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2);	break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2);	break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2);	break;
//	default: printf("계산할 수 없습니다.\n");
//	}
//	return 0;
//}

////[~페이지24 문제2~]
//int main()
//{
//	int month;
//	printf("월을 숫자로 입력하세요 ==> ");
//	scanf("%d", &month);
//
//	switch(month)
//	{
//	case 1: printf("%d > January", month); break;
//	case 2: printf("%d > February", month); break;
//	case 3: printf("%d > March", month); break;
//	case 4: printf("%d > April", month); break;
//	case 5: printf("%d > May", month); break;
//	case 6: printf("%d > June", month); break;
//	case 7: printf("%d > July", month); break;
//	case 8: printf("%d > August", month); break;
//	case 9: printf("%d > September", month); break;
//	case 10: printf("%d > October", month); break;
//	case 11: printf("%d > November", month); break;
//	case 12: printf("%d > December", month); break;
//	default: printf("월의 이름을 출력할 수 없습니다.\n");
//	}
//	return 0;
//}

//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

////[~페이지25 문제4~]
//int main()
//{
//	int input;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case 3:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

////[~페이지25 문제5~]
//int main()
//{
//	int number;
//	printf("0~9의 값을 입력하세요 ==> \n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: printf("짝\n");	break;
//	case 6: printf("짝\n");	break;
//	case 9: printf("짝\n");	break;
//	}
//	return 0;
//}

////[~페이지26 문제6~]
//int main()
//{
//	char command = 'x';
//	
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n");
//		break;
//	default: printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		{
//			int number1, number2;
//			printf("숫자 두 개를 입력하세요.\n");
//			scanf("%d %d", &number1, &number2);
//			printf("%d + %d = %d\n", number1, number2, number1 + number2);
//			break;
//		}
//	case 2:
//		{
//			int number3, number4;
//			printf("숫자 두 개를 입력하세요.\n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d - %d = %d\n", number3, number4, number3 - number4);
//			break;
//		}
//	}
//	return 0;
//}

////[~페이지27 문제7~]
//int main()
//{
//	char input;
//	scanf("%c", &input);
//
//	switch (input)
//	{
//	case 'w':
//		printf("위 방향기를 입력하셨습니다.\n");
//		break;
//	case 'a':
//		printf("좌 방향기를 입력하셨습니다.\n");
//		break;
//	case 'd':
//		printf("우 방향기를 입력하셨습니다.\n");
//		break;
//	case 's':
//		printf("아래 방향기를 입력하셨습니다.\n");
//		break;
//	}
//	return 0;
//}

//[~페이지27 문제8~]
int main()
{
	int appetizer, mainDish, dessert;
	scanf("%d %d %d", &appetizer, &mainDish, &dessert);

	switch (appetizer)
	{
	case 1:
		printf("캐비어,");
		break;
	case 2:
		printf("샐러드,");
		break;
	case 3:
		printf("푸아그라,");
		break;
	}

	switch (mainDish)
	{
	case 1:
		printf(" 스테이크,");
		break;
	case 2:
		printf(" 생선요리,");
		break;
	case 3:
		printf(" 양갈비,");
		break;
	}

	switch (dessert)
	{
	case 1:
		printf(" 케잌");
		break;
	case 2:
		printf(" 아이스크림");
		break;
	case 3:
		printf(" 초콜릿무스");
		break;
	}

	printf("입니다.\n");
	return 0;
}