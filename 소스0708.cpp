////[코드 라인 2~3177까지 C언어 기초책 내용]
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

////[~페이지16 문제4~]
//myMoney의 범위는 1000 ~ 10000.
//coin500의 범위는 0~3 * 500 ==> 0 ~ 1500.
//coin100의 범위는 0 ~ 4999 / 100 * 100 ==> 0 ~ 4900.

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

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
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("값을 입력하세요 ==> ");
//	scanf("%d", &input);
//	
//	if (input == 0)
//		printf("입력한 값은 0입니다.\n");
//	else if (input > 0)
//		printf("입력한 값은 양수입니다.\n");
//	else
//		printf("입력한 값은 음수입니다.\n");
//	
//	return 0;
//}

////[~페이지19 문제2~]
//#include<stdio.h>
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
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요 ==> ");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//		printf("15세, ");
//	if (y_age >= 12)
//		printf("12세, ");
//
//	printf("전체 관람가 영화를 볼 수 있습니다.");
//
//	return 0;
//}

//[~페이지20 문제4~]
//#include<stdio.h>
//int main()
//{
//	char initial;
//	printf("영어문자 1개를 입력하세요 ==> ");
//	scanf("%c", &initial);
//
//	if (initial >= 97 && initial <= 122)
//		printf("소문자입니다.\n");
//	else if (initial >= 0x41 && initial <= 'Z')//문자를 할 때, 10진수말고 hexademical 값이나 ''하고 문자그대로를 입력해도됨.
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
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	printf("값을 입력하시오 ==> ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input은 3의 배수입니다.\n");
//		if (input % 6 == 0)
//			printf("input은 6의 배수입니다.\n");
//		if (input % 9 == 0)
//			printf("input은 9의 배수입니다.\n");
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
//#include<stdio.h>
//
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
//#include<stdio.h>
//
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
//#include<stdio.h>
//
//int main()
//{
//	const int option = 3;//노트: int option 과 const int option 의 차이점은 전자인 int를 쓰면 option 이 변수가 되어 중간에 값이 바뀔 수 있는 가능성이 있음. switch-case 코드는 case 뒤에 오는 수자값이 무조건 상수 = constant 값이어만하고 바뀔 수 있는 값을 넣으면 에러가 뜸. 따라서 const 라는 명령을 써서 상수로 고정시켜줘야 코드가 돌아감.
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
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

////[~페이지25 문제5~]
//#include<stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9의 값을 입력하세요 ==> ");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: //노트: case 뒤에는 꼭 세미콜론(;)이 오지 않아도 된다! 그리고 꼭 break 명령어가 오지 않아도 된다!
//	case 6: 
//	case 9: 
//		printf("짝\n");
//	}
//
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
//	case 'X': printf("엑스표 입력.\n");
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

////[~페이지27 문제8~]
//#include<stdio.h>
//
//int main()
//{
//	int appetizer, mainDish, dessert;
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//
//	switch (appetizer)
//	{
//	case 1:
//		printf("캐비어,");
//		break;
//	case 2:
//		printf("샐러드,");
//		break;
//	case 3:
//		printf("푸아그라,");
//		break;
//	}
//
//	switch (mainDish)
//	{
//	case 1:
//		printf(" 스테이크,");
//		break;
//	case 2:
//		printf(" 생선요리,");
//		break;
//	case 3:
//		printf(" 양갈비,");
//		break;
//	}
//
//	switch (dessert)
//	{
//	case 1:
//		printf(" 케잌");
//		break;
//	case 2:
//		printf(" 아이스크림");
//		break;
//	case 3:
//		printf(" 초콜릿무스");
//		break;
//	}
//
//	printf("입니다.\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9)	printf("\n");
//		if (i == 93)		break;
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count 가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//int main()
//{
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count 가 0보다 작은 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

////[~페이지29 문제1~]
//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 6)
//	{
//		printf("현재 %d번째 출력.\n", count);
//		printf("C\n");
//		count++;
//	}
//	return 0;
//}

////[~페이지29 문제2~]
//#include<stdio.h>
//
//int main()
//{
//	int count = -10;
//
//	while (count <= 0)
//	{
//		printf("%d\n", count);
//		count++;
//	}
//	return 0;
//}

////[~페이지29 문제3~]
//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count <= 100)
//	{
//		printf("%d ", count);
//		count += 5;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue; }
//		printf("입력한 값 : %c\n", alphabet);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료): ");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

////[~페이지30 문제4~]
//int main()
//{
//	int number = 1, multi = 1;
//
//	while (1)
//	{
//		multi = multi * number;
//		if (multi < 50000)
//		{
//			number++;
//			continue;
//		}
//		else
//			printf("number = %d", number);
//			break;
//	}
//	return 0;
//}

////[~페이지30 문제5~]
//int main()
//{
//	char alphabet = 'A';
//
//	while (alphabet <= 'Z')
//	{
//		printf("%c ", alphabet);
//		alphabet++;
//		if (alphabet == 'F')
//		{
//			alphabet++;
//		}
//	}
//	return 0;
//}

////[~페이지30 문제6~]
//int main()
//{
//	int total = 0, inputA;
//	char winner=0;
//
//	while (1)
//	{
//		printf("%c: ", 'A' + winner);
//		scanf("%d", &inputA);
//
//		if (inputA <1 || inputA >3)
//		{
//			printf("다시 입력해주세요.\n");
//			continue;
//		}
//
//		total += inputA;
//		printf("=> %d\n", total);
//		
//		winner = ++winner%2;
//		if (total >= 31)
//		{
//			break;
//		}
//	}
//	printf("%c가 이겼습니다!\n", 'A'+winner);
//	return 0;
//}

//int main()
//{
//	int money;
//	int remain;
//	printf("## 지폐로 교환일 돈은? ");
//	scanf("%d", &money);
//
//	printf("\n오만 원짜리 ==> %d 장\n", money / 50000);
//	printf("만 원짜리 ==> %d 장\n", money % 50000 / 10000);
//	printf("오천 원짜리 ==> %d 장\n", money % 10000 / 5000);
//	printf("천 원짜리 ==> %d 장\n", money % 5000 / 1000);
//	printf("지폐로 바꾸지 못한 잔돈 ==> %d 원\n", money % 1000);
//		
//	return 0;
//}

//int main()
//{
//	int a;
//
//	printf("값을 입력하세요. : ");
//	scanf("%d", &a);
//
//	if (a == 100)
//		printf("100입니다.\n");
//	else
//		printf("100이 아닙니다.\n");
//	return 0;
//}

//int main()
//{
//	char ch;
//
//	printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요: ");
//	scanf(" %c", &ch);
//
//	switch (ch)
//	{
//	case 'a': printf("A 키를 눌렀습니다. \n"); break;
//	case 'A': printf("A 키를 눌렀습니다. \n"); break;
//	case 'b': printf("B 키를 눌렀습니다. \n"); break;
//	case 'B': printf("B 키를 눌렀습니다. \n"); break;
//	case 'c': printf("C 키를 눌렀습니다. \n"); break;
//	case 'C': printf("C 키를 눌렀습니다. \n"); break;
//	default: printf("잘못 눌렀습니다. \n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	char ch = 'Z';
//
//	if (ch == 'A')
//		printf("A 출력 \n");
//	else if (ch == 'B')
//		printf("B 출력 \n");
//	else if (ch == 'C')
//		printf("C 출력 \n");
//	else printf("모름 \n");
//
//	return 0;
//}

//int main()
//{
//	int a = 100;
//
//	if (a < 200)
//	{
//		printf("a가 200보다 ");
//		printf("작습니다.\n");
//	}
//	else
//		printf("a가 200보다 큽니다.");
//
//	return 0;
//}

//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도: %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}

//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};//???? 무슨코드?
//	do
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//[~페이지31 문제5~]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int select;
//	enum{EXIT, LOGIN, REGISTER, OPTION, DEVELOPER};
//	do{
//	printf("1. 로그인\n2. 회원가입\n3. 옵션\n4. 만든 사람들\n");
//	printf("값을 입력하세요 ==> ");
//	scanf("%d", &select);
//
//	//switch (select)
//	//{
//	//case LOGIN:
//	//	printf("로그인\n");
//	//	break;
//	//case REGISTER:
//	//	printf("새회원 등록\n");
//	//	break;
//	//case OPTION:
//	//	printf("옵션 세팅\n");
//	//	break;
//	//case DEVELOPER:
//	//	printf("개발자들");
//	//	break;
//	//}
//	} while (select >=1 && select <=4);
//	printf("프로그램 종료!");
//	return 0;
//}

////[Starting Codes]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//#include<math.h>

//[~페이지32 문제2~]
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int exercise = 0;
//	int money = 0;
//
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 뭐할까요?\n");
//		printf("1. 코딩공부한다.\n2. 운동을 한다.\n3. 저축을 한다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command <1 || command >3) break;
//		else if (command == 1)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("기분이 좋네요.\n");
//			case 3: printf("도서관에서. "); break;
//			case 2: printf("기분이 나빠요.\n");
//			case 4: printf("카페에서 "); break;
//			case 5: printf("학원에서 ");
//			}
//			printf("코딩 공부합니다.\n");
//			study++;
//		}
//		else if (command ==2)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("기분이 좋네요.\n");
//			case 3: printf("헬스장에서 "); break;
//			case 2: printf("기분이 나빠요.\n");
//			case 4: printf("테니스장에서 "); break;
//			case 5: printf("수영장에서 ");
//			}
//			printf("운동합니다.\n");
//			exercise++;
//		}
//		else if (command ==3)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("기분이 좋네요.\n");
//			case 3: printf("은행에 가서 "); break;
//			case 2: printf("기분이 나빠요.\n");
//			case 4: printf("로또에 당첨되서 "); break;
//			case 5: printf("주식으로 ");
//			}
//			printf("돈을 모읍니다.\n");
//			money++;
//		}
//		printf("%d %d %d", study, exercise, money); //각 행동을 얼마나 많이 반복했는지 보는 확인코드
//	} while (1);
//
//	if (day <= 3)
//	{
//		printf("그대로입니다...\n");
//	}
//	else if (study > exercise && study > money) //1. 코딩공부에 대한 엔딩
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다.!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다.!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다.!\n");
//			break;
//		}
//	}
//	else if (exercise > study && exercise > money) //2. 헬스를 한 것에 대한 엔딩
//	{
//		int level = exercise / 8;
//		switch (level)
//		{
//		case 0:
//			printf("체중이 조금 감량했습니다.!\n");
//			break;
//		case 1:
//			printf("체중이 많이 감량했습니다.!\n");
//			break;
//		default:
//			printf("바디빌더가 되었습니다.!\n");
//			break;
//		}
//	}
//	else if (money > exercise && money > study) //3. 저축을 한 것에 대한 엔딩
//	{
//		int level = money / 8;
//		switch (level)
//		{
//		case 0:
//			printf("월세를 낼 수 있게 되었습니다.!\n");
//			break;
//		case 1:
//			printf("전세를 낼 수 있게 되었습니다.!\n");
//			break;
//		default:
//			printf("집을 살 수 있게 되었습니다.!\n");
//			break;
//		}
//	}
//	return 0;
//}

////[교과서 페이지 251 7번 문제]
//int main()
//{
//	int input1;
//	int input2;
//
//	printf("시작값 ==> ");
//	scanf("%d", &input1);
//	printf("끝값 ==> ");
//	scanf("%d", &input2);
//
//	int numStart;
//	int numEnd;
//
//	if (input1 < input2)
//	{
//		numStart = input1;
//		numEnd = input2;
//	}
//	else
//	{
//		numStart = input2;
//		numEnd = input1;
//	}
//		
//	while (numStart <= numEnd)
//	{
//		if (numStart % 2 == 1)
//		{
//			printf("%d\n", numStart);
//			numStart += 2;
//		}
//		else
//			numStart++;
//	}
//	return 0;
//}

////[교과서 페이지 251 8번 문제]
//int main()
//{
//	int input;
//	printf("숫자를 여러 개 입력: ");
//	scanf("%d", &input);
//
//	int jaritsu_input;
//	jaritsu_input = input;//이 줄이 핵심포인트!
//	int jaritsu = 0;
//
//	while (jaritsu_input > 0)
//	{
//		jaritsu_input /= 10;
//		jaritsu++;
//	}
//	printf("자릿수는 %d 입니다.\n", jaritsu);
//
//	int divider_initial = 1;
//	while (jaritsu > 1)
//	{
//		divider_initial *= 10;
//		jaritsu--;
//	}
//
//	int not_remainder;
//	while (divider_initial > 0)
//	{
//		not_remainder = input / divider_initial;
//		input = input % divider_initial;
//		divider_initial /= 10;
//		//printf("%d\n", not_remainder);
//		//not_remainder *= 2;
//		while (not_remainder > 0)
//		{
//			printf("\u2665\u2665");
//			not_remainder--;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//[교과서 페이지 254 11번 문제]
//int main()
//{
//	int i;
//	int hap = 0;
//
//	i = 1;
//	while (i <= 100)
//	{
//		if (i % 5 == 0 || i % 8 == 0)
//			hap = hap + i;
//
//		i++;
//	}
//	printf("5배수와 8배수의 합: %d \n", hap);
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

////[~페이지33 문제1~]
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

////[~페이지33 문제2~]
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("깜빡 졸고 말았다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45)
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

////[~페이지35 문제1~]
//int main()
//{
//	int number;
//	
//	for (number = 10; number < 100; ++number)
//		printf("%d\n", number);
//	return 0;
//}

////[~페이지35 문제2~]
//int main()
//{
//	int number;
//	int product = 1;
//	
//	for (number = 3; number <= 8; number++)
//	{
//		product = product * number;
//	}
//	printf("%d\n", product);
//	return 0;
//}

////[~페이지35 문제3~]
//int main()
//{
//	int number;
//
//	for (number = 1; number <= 50; number++)
//	{
//		if (number / 10 == 3 || number % 10 == 3 || number % 10 == 6 || number % 10 == 9)
//			printf("%d\n", number);
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//	
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	char input;
//	for ( ; ; )
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//	}
//	printf("%d\n", number);
//	return 0;
//}

//int main()
//{
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//	}
//	printf("%d\n", number);
//	return 0;
//}

//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

////[~페이지37 문제4~]
//int main()
//{
//	int product;
//
//	for (product = 11; product < 200; product += 11)
//	{
//		printf("%d\n", product);
//	}
//	return 0;
//}

////[~페이지37 문제5~]
//int main()
//{
//	double sqLine;
//
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1)
//	{
//		printf("%3.1f\n", sqLine);
//	}
//	return 0;
//}

//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}

//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


////[~페이지39 문제1~]
//int main()
//{
//	int product;
//	int number;
//	int multiplier;
//
//	for (number = 2; number <= 9; number++)
//	{
//		for (multiplier = 1; multiplier <= 9; multiplier++)
//		{
//			product = number * multiplier;
//			printf("%d X %d = %d\n", number, multiplier, product);
//		}
//	}
//	return 0;
//}

////[~페이지39 문제2~]
//int main()
//{
//	int product;
//	int number;
//	int multiplier;
//
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3)
//		{
//			continue;
//		}
//		for (multiplier = 1; multiplier <= 9; multiplier++)
//		{
//			product = number * multiplier;
//			printf("%d * %d = %d\n", number, multiplier, product);
//		}
//	}
//	return 0;
//}
//
////[~페이지39 문제3~]
//int main()
//{
//	int dice4, dice6;
//
//	for (dice4 = 1; dice4 <= 4; dice4++)
//	{
//		for (dice6 = 1; dice6 <= 6; dice6++)
//		{
//			printf("4면 - %d, 6면 - %d\n", dice4, dice6);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입 \n", outer);
//
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출 \n \n", outer);
//	}
//	return 0;
//}

//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////[~부가 연습 페이지들 (시작)~]
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int y = 1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	return 0;
//}

//int main()
//{
//	for (int y = 1; y <= 3; y +=1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 3;
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////[~부가 연습 페이지들 (끝)~]

////[~페이지41 문제1(시작)~]
//int main()
//{
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	for (int x = 1; x <= 4; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 0;
//	
//	for (int x = 3; x >= outer; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 3; x >= 1; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 3; x >= 2; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 3; x >= 3; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 0;
//
//	for (int x = 3; x >= outer; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	for (int x = 3; x >= outer; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	for (int x = 3; x >= outer; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	for (int x = 3; x >= outer; x--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//
//	return 0;
//}

//int main()
//{
//	int outer = 0;
//
//	for (;outer < 4;)
//	{
//		for (int x = 3; x >= outer; x--)
//		{
//			printf("*");
//		}
//		printf("\n");
//		outer += 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int outer = 0; outer < 4; outer += 1)
//	{
//		for (int x = 3; x >= outer; x--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 4;
//
//	for (int outer = 0; outer < LINE; outer += 1)
//	{
//		for (int x = 3; x >= outer; x--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 4;
//	scanf("%d", &LINE);
//
//	for (int outer = 0; outer < LINE; outer += 1)
//	{
//		for (int x = LINE - 1; x >= outer; x--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////[~페이지41 문제1(끝)~]

////[~페이지41 문제2(시작)~]
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	for (int w = 1 ; w <= 3; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1 ; w <= 3; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 7; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 3;
//	int inner = 1;
//
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 7; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 1;
//	int inner = 1;
//
//	for (int w = 3; w >= outer; w--)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	inner += 2;
//
//	for (int w = 3; w >= outer; w--)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	inner += 2;
//
//	for (int w = 3; w >= outer; w--)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	inner += 2;
//
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer += 1;
//	inner += 2;
//
//	return 0;
//}

//int main()
//{
//	int outer = 1;
//	int inner = 1;
//
//	for (;outer <= 4;)
//	{
//		for (int w = 3; w >= outer; w--)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		outer += 1;
//		inner += 2;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int inner = 1;
//
//	for (int outer = 1; outer <= 4; outer += 1)
//	{
//		for (int w = 3; w >= outer; w--)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		inner += 2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 4;
//	int inner = 1;
//
//	for (int outer = 1; outer <= LINE; outer += 1)
//	{
//		for (int w = 3; w >= outer; w--)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		inner += 2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 4;
//	scanf("%d", &LINE);
//	int inner = 1;
//
//	for (int outer = 1; outer <= LINE; outer += 1)
//	{
//		for (int w = LINE - 1; w >= outer; w--)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		inner += 2;
//	}
//
//	return 0;
//}
////[~페이지41 문제2(끝)~]

////[~페이지41 문제3(시작)~]
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	for (int w = 1 ; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 2;
//	int inner = 1;
//	
//	for (int w = 1 ; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 2;
//	int inner = 1;
//
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer -= 1;
//	inner += 2;
//
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer -= 1;
//	inner += 2;
//
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	outer -= 1;
//	inner += 2;
//	///////////////////////////////
//
//	outer += 1;
//	inner -= 2;
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	outer += 1;
//	inner -= 2;
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	outer += 1;
//	inner -= 2;
//	for (int w = 1; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 2;
//	int inner = 1;
//
//	for (; outer >= 0;)
//	{
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		outer -= 1;
//		inner += 2;
//	}
//
//	///////////////////////////////
//	for (; outer <= 3;)
//	{
//		outer += 1;
//		inner -= 2;
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int inner = 1;
//
//	for (int outer = 2; outer >= 0; outer -= 1)
//	{
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		inner += 2;
//	}
//
//	///////////////////////////////
//	for (int outer = 0; outer <= 3; outer += 1)
//	{
//		inner -= 2;
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	int inner = 1;
//
//	for (int outer = LINE-1; outer >= 0; outer -= 1)
//	{
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		inner += 2;
//	}
//
//	///////////////////////////////
//	for (int outer = 0; outer <= LINE - 1; outer += 1)
//	{
//		inner -= 2;
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////[~페이지41 문제4(시작)~]
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("1");
//	printf("\n");
//
//	printf(" ");
//	printf(" ");
//	printf("2");
//	printf("2");
//	printf("\n");
//
//	printf(" ");
//	printf("3");
//	printf("3");
//	printf("3");
//	printf("\n");
//
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	for (int w = 1 ; w <= 3; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("1");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("2");
//	}
//	printf("\n");
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("3");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 4; x++)
//	{
//		printf("4");
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	int outer = 3;
//	int inner = 1;
//
//	for (int w = 1 ; w <= outer; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= inner; x++)
//	{
//		printf("1");
//	}
//	printf("\n");
//	outer--;
//	inner++;
//
//	for (int w = 1; w <= 2; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("2");
//	}
//	printf("\n");
//	outer--;
//	inner++;
//
//	for (int w = 1; w <= 1; w++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("3");
//	}
//	printf("\n");
//	outer--;
//	inner++;
//
//	for (int x = 1; x <= 4; x++)
//	{
//		printf("4");
//	}
//	printf("\n");
//	outer--;
//	inner++;
//
//	return 0;
//}

//int main()
//{
//	int inner = 1;
//	int print_number = 1;
//
//	for (int outer = 3; outer>=0 ; outer--)
//	{
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("%d", print_number);
//		}
//		printf("\n");
//		inner++;
//		print_number++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int LINE = 4;
//	int inner = 1;
//	int print_number = 1;
//
//	scanf("%d", &LINE);
//
//	for (int outer = LINE -1; outer >= 0; outer--)
//	{
//		for (int w = 1; w <= outer; w++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inner; x++)
//		{
//			printf("%d", print_number);
//		}
//		printf("\n");
//		inner++;
//		print_number++;
//	}
//
//	return 0;
//}
////[~페이지41 문제4(끝)~]

////[~페이지41 문제5(시작)~]
//int main()
//{
//	int total = 0, inputA;
//	char winner=0;
//
//	for (;;)
//	{
//		for (int repeat_say = 1; repeat_say <= 3 ; )
//		{
//			printf("%c: ", 'A' + winner);
//			scanf("%d", &inputA) == 1;
//			if (inputA >= 1 && inputA <= 3)
//			{
//				total += inputA;
//				repeat_say++;
//				continue;
//			}
//			else if (inputA == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("다시 입력해주세요.\n");
//				continue;
//			}
//		}
//
//		printf("=> %d\n", total);
//		
//		winner = ++winner%2;
//		if (total >= 31)
//		{
//			break;
//		}
//	}
//	printf("%c가 이겼습니다!\n", 'A'+winner);
//	return 0;
//}

//int main()
//{
//	char str[100];
//	int str_cnt;
//	int i;
//
//	printf("영문자 및 숫자를 입력 (100자 이하) : ");
//	scanf("%s", str);
//
//	printf("\n");
//	printf("입력한 문자열 ==> %s\n", str);
//	printf("변환된 문자열 ==>");
//
//	str_cnt = strlen(str);
//
//	for (str_cnt; str_cnt > 0; str_cnt--)
//	{
//		if()
//	}
//
//	printf("\n");
//}

//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

////[~페이지42 문제1~]
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

////[~페이지42 문제1~] (for -> while 로 바꿀때 continue; 를 써버리면 for는 3번째 증가식이 있어서 계속 반복하지만 while 은 증가식이 없어서 continue; 해버리면 무한 루프가 그냥 끝나게 됨. continue; 를 주의해야하는 문제)
//int main()
//{
//	double conversion = 90;
//
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	while (1)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

////[~페이지42 문제1~]
//int main()
//{
//	for (int number;;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag)
//	{
//		printf("number = %d\n", number);
//		while (number++)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

////[~페이지43 문제2~]
////[1]while(for_flag) --> [2]while(for_flag) 계속 --> [3]while(number++) --> [4]while(for_flag) --> [5]끝
////[1]for_flag = 1, number = 0 | [2]for_flag = 1, number = 2 | [3]for_flag = 0, number = 3 | [4]for_flag = 0, number = 4

////[~페이지43 문제3~]
//int main()
//{
//	int for_flag = 1;
//	int number = 1;//값을 1로 바꿈
//	while (for_flag)
//	{
//		printf("number = %d\n", number);
//		while (number++)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}
////[1]while(for_flag) --> [2]while(number++) --> [3]while(number++) --> [4]while(for_flag) 계속 --> [5]끝
////[1]for_flag = 1, number = 1 | [2]for_flag = 1, number = 2 | [3]for_flag = 1, number = 3 | [4]for_flag = 0, number = 4

////[~페이지43 문제4 & 5~]
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for ( ; for_flag ; )
//	{
//		printf("number = %d\n", number);
//		for (;number++;)
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3)
//			{
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

////[코드 라인 3179~????까지 C언어 심화책 내용]
////[Starting Codes]
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

//int suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//int main()
//{
//	int result = suyel(10);
//	printf("%d\n", result);
//
//	return 0;
//}

//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//	return 0;
//}

//void eatFood()
//{
//	printf("밥먹기\n");
//}
//void goSleep()
//{
//	printf("잠자기\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//
//	return 0;
//}

//void person_A()
//{
//	int money = 10000;
//	printf("A: 주머니에");
//	printf("%d원\n", money);
//}
//
//void person_B()
//{
//	int money = 5000;
//	printf("B: 주머니에");
//	printf("%d원\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//
//	return 0;
//}

//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("에서 가져온 값 : ");
//	printf("%d\n", getNumber);
//}

//void sayHi()
//{
//	printf("hi");
//	return;
//}
//char getA()
//{
//	return 'A';
//}
//int get5()
//{
//	return 5;
//}
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}

//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);

//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//void sayHi()
//{
//	printf("hi");
//	return;
//}
//char getA()
//{
//	return 'A';
//}
//int get5()
//{
//	return 5;
//}
//double set1get5(int one)
//{
//	return one + 4.0;
//}

//float sendCard();
//int main()
//{
//	float result = sendCard();
//	printf("%f만원 받음\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<크리스마스 카드>\n");
//	printf("비용: 0.7만원\n");
//	printf("돈내기(단위:만원) : ");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}

//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("벌을 영어로?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}

////[~페이지10 문제1~]
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("사과을 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}

////[~페이지10 문제2~]
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//int main()
//{
//	printf("사과을 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//void makeHamburger(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_count);
//	return 0;
//}

//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_characterX(char X);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('X');
//	return 0;
//}
//void print_Number()
//{
//	printf("Number\n");
//}
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//void print_Number4_charB(int num, char b)
//{
//	printf("Number : %d.character : %c\n", num, b);
//}
//void print_characterX(char X)
//{
//	printf("character : %c\n", X);
//}

//char rightType(char type)
//{
//	if (type != 'A' && type != 'B')
//	{
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count)
//{
//	if (type == 'A')
//	{
//		printf("A타입 햄버거");
//	}
//	else
//	{
//		printf("B타입 햄버거");
//	}
//	printf(" %d개 나왔습니다.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를");
//	printf("주문하시겠습니까?(A or B)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C')
//	{
//		return 0;
//	}
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}

//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과 : %d\n", data1);
//	return 0;
//}

////[~페이지12 문제1~]
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int subtract_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//int multiply_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//float divide_number(int num1, int num2)
//{
//	float retVal = num1 / (float)num2;
//	return retVal;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("더하기 결과 : %d\n", data1);
//	int data2 = subtract_number(a, b);
//	printf("빼기 결과 : %d\n", data2);
//	int data3 = multiply_number(a, b);
//	printf("곱하기 결과 : %d\n", data3);
//	float data4 = divide_number(a, b);
//	printf("나누기 결과 : %f\n", data4);
//	return 0;
//}

//재귀호출에 관한 문제
//int minus(int n)
//{
//	if (n <= 1) return -3;
//	return minus(n - 1) - 2;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}

//int fibonacci(int n)
//{
//	printf("%d", n);
//	if (n <= 2) return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}

////[~페이지13 문제1~]
//int keep_adding(int n)
//{
//	if (n == 1) return 1;
//	return n + keep_adding(n - 1);
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d\n", keep_adding(num));
//	return 0;
//}

//struct BYTE
//{
//	char a;
//	char b;
//};
//
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//
//void main()
//{
//	struct student s = { 1, (char*)"이 샘", 90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n", s.name);
//	printf("백분율: %lf\n", s.aver);
//}

//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool megazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = {"M416", 5.56, true, true, true, true, true, 30};
//	printf("화기명: %s\n", M416.name);
//	printf("탄 종류: %.2f\n", M416.bullet_type);
//	printf("스코프유무: %s\n", M416.scope ? "true":"false");
//	return 0;
//}

//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON
//{
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기: %d\n", sizedummy);
//	printf("vip정보 크기: %d\n", sizevip);
//	
//	VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}

////[~페이지15 문제1~]
//struct eightbytesample1
//{
//	char a;
//	char b;
//	char c;
//	char d;
//	char e;
//	char f;
//	char g;
//	char h;
//};
//struct eightbytesample2
//{
//	double number;
//};
//
//int main()
//{
//	printf("첫번째 방법 크기 : % d\n", sizeof(eightbytesample1));
//	printf("두번째 방법 크기 : % d\n", sizeof(eightbytesample2));
//
//	return 0;
//}

////[~페이지15 문제2~]
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	__dummy__ sample; //컴파일하면 에러가 발생하는 이유: __dummy__가 구조체(struct)의 이름일 뿐, 실제 구조체 변수가 선언되지 않았기 때문
//	// 위의 코드는 구조체의 변수를 선언하는 코드라인이다.
//	int tmp;
//	printf("첫번째 데이더의 값: ");
//	scanf("%d", &sample.data_0);
//	printf("두번째 데이더의 값: ");
//	scanf("%d", &tmp);
//	sample.data_1 = (char)tmp;
//	printf("세번째 데이더의 값: ");
//	scanf("%d", &tmp);
//	sample.data_2 = (float)tmp;
//	printf("%d %c %f\n", sample.data_0, sample.data_1, sample.data_2);
//
//	return 0;
//}

//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("값 : %hd\n", pt1);
//}

//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값 : %hd\n", pt);
//}

//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

////[~페이지16 문제2-1)~]
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//	printf("값 : %hd\n", pt2+5);
//}

////[~페이지16 문제2-2)~]
//short getDefaultData();
//void printData(short pt2);
//void printDataAdd5(short pt3);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	printDataAdd5(pt);
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//void printDataAdd5(short pt3)
//{
//	pt3 += 5;
//	printf("값 : %hd\n", pt3);
//}

////[~페이지16 문제2-3)~] //문제풀기
//short getDefaultData();
//void printData(short pt2);
//void printDataAdd5(short pt3);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	printDataAdd5(pt);
//}
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//void printDataAdd5(short pt3)
//{
//	pt3 += 5;
//	printf("값 : %hd\n", pt3);
//}

//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//void main()
//{
//	char alpah[4] = { 'a','b', 'c', 'd' };
//	printf("%c%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}

//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf("1 번째 숫자는? %d\n", num[1]);
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//	return 0;
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	return 0;
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

////[~페이지18 문제1~]
//int main()
//{
//	int arr[5];
//	for (int n = 0; n < 5; n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	printf("\n\n");
//	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	return 0;
//}

////[~페이지18 문제2~]
//int main()
//{
//	int arr[10];
//	for (int n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//		for (int m = 1; m < 10; m++)
//		{
//			label:
//				if (arr[n] == arr[n - m])//기존입력숫자와 비교하는 루프
//				{
//					printf("exist\n");
//					printf("기존과 다른 숫자를 입력하세요: ");
//					scanf("%d", &arr[n]);
//					m = 1;
//					goto label;
//				}
//				else
//					continue;
//		}
//	}
//	printf("\n\n");
//	printf("%d %d %d %d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
//	return 0;
//}

//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}

//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d ", left);
//	printf("right = %d \n", right);
//}

//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d, ", num[1]);
//}

////[~페이지19 문제1~]
//int main()
//{
//	int arr[4] = { 4, 3, 1,2 };
//	int temp;
//	temp = arr[0];
//	arr[0] = arr[2];
//	arr[2] = arr[1];
//	arr[1] = arr[3];
//	arr[3] = temp;
//	printf("새로운 순서: %d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}

////[~페이지19 문제2~]
//int main()
//{
//	int arr[4];
//	for (int n = 0; n < 4; n++)
//	{
//		scanf("%d", &arr[n]);
//	label:
//		for (int m = 1; m < 4; m++)
//		{
//			if (arr[n - m] >= arr[n])
//			{
//				printf("기존과 다른 숫자를 입력하세요: ");
//				scanf("%d", &arr[n]);
//				m = 1;
//				goto label;
//			}
//			else
//				break;
//		}
//	}
//	printf("새로운 순서: %d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}

//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else			max = 2;
//	printf("max = %d \n", max);
//}

//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two)
//	{
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d \n", max);
//}

//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d \n", max);
//}

////[~페이지20 문제1~]
//int main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int min = a[0];
//	int max = a[0];
//	int sum = 0;
//	float avg = 0;
//
//	for (int n = 1; n < 5; n++)
//	{
//		if (min > a[n])
//			min = a[n];
//	}
//	for (int n = 1; n < 5; n++)
//	{
//		if (max < a[n])
//			max = a[n];
//	}
//	for (int n = 0; n < 5; n++)
//	{
//		sum += a[n];
//	}
//	avg = (float)sum / 5;
//	printf("%d %d %d %.2f\n", min, max, sum, avg);
//}

////[~페이지20 문제2~]
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int repeat[6] = {0,0,0,0,0,0};
//
//	for (int n = 0; n < 10; n++)
//	{
//		for (int value = 1; value <= 6; value++)
//		{
//			if (a[n] == value)
//			{
//				repeat[value-1]++;
//			}
//		}
//	}
//	printf("각 주사위 눈이 나온 횟수: %d %d %d %d %d %d\n", repeat[0], repeat[1], repeat[2], repeat[3], repeat[4], repeat[5]);
//	return 0;
//}

//int main()
//{
//	char arr[2][3] = { '1','2', '3', '4', '5', '6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { {'1','2','3'},{'4','5','6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//void main()
//{
//	int arr2d[5][4] = {
//		{662, 7, 4, 74},
//		{8, 396, 299, 95},
//		{66, 73, 86, 0},
//		{116, 26, 586, 42},
//		{84,7,41,11},
//	};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

////[~페이지21 문제1~]
//void main()
//{
//	int arr2d[3][3] = {
//		{2, 4, 6},
//		{8, 10, 12},
//		{14, 16, 18}
//	};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d", arr2d[j][i]);
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)//오타? j<n 이 아닌지...
//			printf("%3d", data[i][j]);
//		printf("\n");
//	}
//}

//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

////[~페이지22 문제2~]
//void main()
//{
//	const int c = 5;
//	const int r = 5;
//	int data[c][r];
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			data[i][j] = i * 5 + j + 1;
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

////[~페이지22 문제3~]
//void main()
//{
//	const int c = 5;
//	const int r = 5;
//	int data[c][r];
//	for (int i = 5; i > 0; i--)
//	{
//		for (int j = 5; j > 0; j--)
//		{
//			data[c-i][r-j] = i * 5 - 5 + j;
//			printf("%3d", data[c-i][r-j]);
//		}
//		printf("\n");
//	}
//}

////[~페이지22 문제4~]
//void main()
//{
//	const int c = 5;
//	const int r = 5;
//	int data[c][r];
//	
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			data[i][j] = i * 5 + j + 1;
//		}
//	}
//
//	int arr[c * r];
//	for (int k = 0; k < (c * r); k++)
//	{
//		arr[k] = data[k/5][k%5];
//		printf("%d ", arr[k]);
//	}
//}

////[~페이지22 문제4~]
//void main()
//{
//	const int N = 10;
//	int data[N];
//	int num;
//	
//	scanf("%d", &num);
//	for (int m = 0; m < num; m++)
//	{
//		scanf("%d", &data[m]);
//	}
//
//	//[][] 2차원 배열안에 *를 넣는것
//	int data2[N][N] = {};
//	int m = 0;
//	for (int j = 0; j < num; j++)
//	{
//		for (int i = 0; i < data[m]; i++)
//		{
//			data2[i][j] = '*';
//		}
//		m++;
//	}
//	m = 0;
//	for (int j = 0; j < N; j++)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			if(data2[j][i] == 0)printf(" ");
//			else printf("%c", data2[j][i]);
//		}
//		printf("\n");
//		m++;
//	}
//}

////[~페이지22 문제5~]
//void main()
//{
//	const int r = 5;
//	const int c = 5;
//	int data[r][c];
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			data[i][j] = i * 5 + j + 1;
//		}
//	}
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (i == 0 && j <= 4)
//			{
//				printf("%3d", data[i][j]);
//			}
//			else if (i <= 4 && i >=1 && j == 0)
//			{
//				printf("%3d", data[j][i]);
//			}
//			else if (i <= 4 && j == 4)
//			{
//				printf("%3d", data[j][i]);
//			}
//
//		}
//		printf("\n");
//	}
//}

////[~페이지22 문제5~]
//void main()
//{
//	const int N = 10;
//	int data[N][N] = {};
//	int y = 0, x = -1;
//	int num = 1;
//	int repeat = N;
//	int a = 1;
//	
//	for (;;)
//	{
//		for (int j = 0; j < repeat; j++)
//		{
//			x+=a;
//			data[y][x] = num;
//			num++;
//		}
//		repeat--;
//		if (repeat == 0)
//			break;
//
//		for (int j = 0; j < repeat; j++)
//		{
//			y+=a;
//			data[y][x] = num;
//			num++;
//		}
//		a *= -1;
//
//		//for (int j = 0; j < repeat; j++)
//		//{
//		//	x+=-1;
//		//	data[y][x] = num;
//		//	num++;
//		//}
//		//repeat--;
//
//		//for (int j = 0; j < repeat; j++)
//		//{
//		//	y+=-1;
//		//	data[y][x] = num;
//		//	num++;
//		//}
//		
//	}
//
//	//for (int j = 0; j < repeat; j++)
//	//{
//	//	x++;
//	//	data[y][x] = num;
//	//	num++;
//	//}
//	//repeat--;
//
//	//for (int j = 0; j < repeat; j++)
//	//{
//	//	y++;
//	//	data[y][x] = num;
//	//	num++;
//	//}
//
//	//for (int j = 0; j < repeat; j++)
//	//{
//	//	x--;
//	//	data[y][x] = num;
//	//	num++;
//	//}
//	//repeat--;
//
//	//for (int j = 0; j < repeat; j++)
//	//{
//	//	y--;
//	//	data[y][x] = num;
//	//	num++;
//	//}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//}

//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}

//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1+1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}

//void main()
//{
//	int *numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//int main()
//{
//	int number[2] = { 1,2 };
//	void *p = number;
//	printf("%d\n", *(int*)p);
//	return 0;
//}

//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1); //배열의 값을 빠는 것
//	printf(">> %d\n", ptrFibo4 - ptrFibo1); //배열에서 저장된 주소의 위치를 빼는 것
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}

//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void *ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numptrA-1));
//	printf("%d\n", *(((int *)ptr)+4));
//
//	return 0;
//}

////[~페이지24 문제1~]
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int* ptr;
//	ptr = arr;
//	ptr += 2;//ptr에 2를 더해서 주소칸 2번이동하는 명령
//
//	printf("%d", *ptr);
//}

//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);//반복할 때 마다 p의 주소를 1씩 이동하는 명령
//	}
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i=0;i<6;i++)
//	{
//		printf("%d", *p++);//반복할 때 마다 2차원 배열의 p의 주소를 1씩 이동하는 명령
//	}
//	return 0;
//}

//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5; //num[1]의 값을 먼저! 5로 바꾸고 그다음에 pt주소에 1을 더해서 그 뒤에 num[2]로 위치를 옮김. 연산 순서가 뒤바뀐 것을 이해하는 것이 중요함!
//	*pt++ = 10; //num[2]의 값을 먼저! 10으로 바꾸고 그다음에 pt주소에 1을 더해서 그 뒤에 num[3]로 위치를 옮김. 연산 순서가 뒤바뀐 것을 이해하는 것이 중요함!
//	
//	pt--; //pt의 주소를 다시 num[3] 에서 num[2]로 바꿈
//	*pt++ += 20; // num[2]의 값을 먼저! 20을 더하고(+=연산) 그다음에 pt주소에 1을 더해서 그 뒤에 num[3]로 위치를 옮김. 연산 순서가 뒤바뀐 것을 이해하는 것이 중요함!
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//void main()
//{
//	char str[] = "기울어진운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";//ASCII코드에서 한글은 2바이트를 차이, 스페이스바는 1바이트
//	char* ptr = &str[7];
//	printf("%s\n\n", ptr);
//}

//void main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

////[~페이지26 문제1~]
//int main()
//{
//	int arr[100] = {};
//	
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = i+1;
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//	for (int i = 99; i >= 0; i--)
//	{
//		arr[i] = i+1;
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//
//	int* ptr;
//	ptr = &arr[99];
//
//	for (int i = 0; i<100;i++)
//	{
//		printf("%3d", *ptr);
//		ptr--;
//	}
//	return 0;
//}

////[~페이지26 문제2~]
//int main()
//{
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//
//	int num = 50;
//	int* ptr;
//
//	for (ptr = &arr[num]; *ptr != 50; ptr++)
//	{
//		printf("%3d", *ptr);
//		if (*ptr == 100) //배열 끝에 도달하면 처음으로 되돌리는 명령어
//		{
//			ptr -= 100;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);//buf라는 string 배열의 마지막의 buf[5]위치에 \0 NULL문자가 아닌 숫자'1'이 들어왔음으로 출력하면 한자같은 쓰레기값이 나옴
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//}

//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//
//	printf("%s with %s = %d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s(str2 size) = %d\n", str1, str3, memcmp(str1, str3, strlen(str3)));
//	printf("%s with %s = %d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s(str1 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s(str5 size) = %d\n", str1, str5, memcmp(str1, str5, strlen(str5)));
//	return 0;
//}

//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//}

[2025-08-21일 수업까지한 부분]