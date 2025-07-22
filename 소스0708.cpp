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

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

//[교과서 페이지 251 7번 문제]
//int main()
//{
//	int numStart;
//	int numEnd;
//
//	printf("시작값 ==> ");
//	scanf("%d", &numStart);
//	printf("끝값 ==> ");
//	scanf("%d", &numEnd);
//
//	int oddnumber;
//	if (numStart < numEnd)
//	{
//		oddnumber = numStart + 1;
//		while (oddnumber < numEnd)
//		{
//			printf("%d ", oddnumber);
//			oddnumber += 2;
//		}
//	}
//	else if (numEnd < numStart)
//	{
//		oddnumber = numEnd + 1;
//		while (oddnumber < numStart)
//		{
//			printf("%d ", oddnumber);
//			oddnumber += 2;
//		}
//	}
//	else
//	
//	return 0;
//}

//[교과서 페이지 251 8번 문제]
//int main()
//{
//	int input;
//	printf("숫자를 여러개 입력: ");
//	scanf("%d", &input);
//
//	int division = 1000;
//	int dividednumber;
//	int repeat1000 = 1, repeat100 = 1, repeat10 = 1, repeat1 = 1;
//	while (input >= 1000)
//	{
//		dividednumber = input / division * 2;
//		while (repeat1000 <= dividednumber)
//		{
//			printf("\u2665");
//			repeat1000++;
//		}
//		division = division / 10;
//		input = input - (dividednumber / 2 * 1000);
//	}
//	printf("\n");
//	
//	while (input >= 100 && input < 1000)
//	{
//		dividednumber = input / division * 2;
//		while (repeat100 <= dividednumber)
//		{
//			printf("\u2665");
//			repeat100++;
//		}
//		division = division / 10;
//		input = input - (dividednumber / 2 * 100);
//	}
//	printf("\n");
//
//	while (input >= 10 && input < 100)
//	{
//		dividednumber = input / division * 2;
//		while (repeat10 <= dividednumber)
//		{
//			printf("\u2665");
//			repeat10++;
//		}
//		division = division / 10;
//		input = input - (dividednumber / 2 * 10);
//	}
//	printf("\n");
//
//	while (input >= 1 && input < 10)
//	{
//		dividednumber = input / division * 2;
//		while (repeat1 <= dividednumber)
//		{
//			printf("\u2665");
//			repeat1++;
//		}
//		division = division / 10;
//		input = input - (dividednumber / 2 * 1);
//	}
//
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
//	for (sheep = 1; sheep <= 45; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("깜빡 졸고 말았다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
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
//		if (number >= 30 && number < 40)
//			printf("%d\n", number);
//		else if (number % 10 == 3 || number % 10 == 6 || number % 10 == 9)
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

//[~페이지37 문제4~]
int main()
{

}

//[~페이지37 문제5~]
int main()
{

}
