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

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("�׸��� ������ ������");
//	printf("%d���̴�.", coin500 + coin100);
//  printf("\ncoin500�� coin100�� ���� ���� %d %d �̴�.", coin500, coin100);
//	printf("\n���� ���ڸ� �� �� ������?\n");
//	return 0;
//}

//[~������16 ����4~]
//myMoney�� ������ 1000 ~ 10000.
//coin500�� ������ 0~3 * 500 ==> 0 ~ 1500.
//coin100�� ������ 0 ~ 4999 / 100 * 100 ==> 0 ~ 4900.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple != = 17)
//	{
//		printf("apple�� 17���� �ƴմϴ�.\n");
//	}
//	return = 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	else
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

////[~������19 ����1~]
//int main()
//{
//	int input;
//	printf("���� �Է��ϼ��� ==> ");
//	scanf("%d", &input);
//	
//	if (input == 0)
//		printf("�Է��� ���� 0�Դϴ�.\n");
//	else if (input % 2 >= 1)
//		printf("�Է��� ���� Ȧ���Դϴ�.\n");
//	else if (input / 2 >= 1)
//		printf("�Է��� ���� ¦���Դϴ�.\n");
//	
//	return 0;
//}

////[~������19 ����2~]
//int main()
//{
//	int input;
//	printf("���� �Է��ϼ��� ==> ");
//	scanf("%d", &input);
//
//	if (input >= 10 && input <= 99)
//		printf("input�� �� �ڸ� �����Դϴ�.\n");
//	else
//		printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�.\n");
//
//	return 0;
//}

//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}

////[~������20 ����3~]
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��ϼ��� ==> ");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//		printf("��ü, 12��, 15�� ������ ��ȭ�� �� �� �ֽ��ϴ�.\n");
//	else if (y_age >=12)
//		printf("��ü, 12�� ������ ��ȭ�� �� �� �ֽ��ϴ�.\n");
//	else
//		printf("��ü ������ ��ȭ�� �� �� �ֽ��ϴ�.\n");
//
//	return 0;
//}

//[~������20 ����4~]
//int main()
//{
//	char initial;
//	printf("����� 1���� �Է��ϼ��� ==> ");
//	scanf("%c", &initial);
//
//	if (initial >= 97 && initial <= 122)
//		printf("�ҹ����Դϴ�.\n");
//	else if (initial >= 65 && initial <= 90)
//		printf("�빮���Դϴ�.\n");
//	else
//		printf("�ҹ��ڵ� �빮�ڵ� �ƴմϴ�!\n");
//
//	return 0;
//}

//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
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
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80)
//	{
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70)
//	{
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60)
//	{
//		printf("������ D����Դϴ�.\n");
//	}
//	else
//	{
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number %2==0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}

//[~������22 ����5~]
//int main()
//{
//	char input;
//	printf("Ű�� �Է��Ͻÿ� ==> ");
//	scanf("%c", &input);
//
//	if (input == 'w')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (input == 'a')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (input == 'd')
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	else if (input == 's')
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	return 0;
//}

//[~������22 ����6~]
//int main()
//{
//	int gauge;
//	printf("0���� 100 ������ ���� �Է��Ͻÿ� ==> ");
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

////[~������22 ����7~]
//int main()
//{
//	int input;
//	printf("���� �Է��Ͻÿ� ==> ");
//	scanf("%d", &input);
//
//	if ((input % 3) == 0 && (input /3 ) >= 1)
//	{
//		printf("3�� ����Դϴ�.\n");
//		if ((input % 6) == 0 && (input / 6) >= 1)
//		{
//			printf("6�� ����Դϴ�.\n");
//			if ((input % 9) == 0 && (input / 9) >= 1)
//			{
//				printf("9�� ����Դϴ�.\n");
//			}
//		}
//		else
//			if ((input % 9) == 0 && (input / 9) >= 1)
//			{
//				printf("9�� ����Դϴ�.\n");
//			}
//	}
//	return 0;
//}

//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���: ");
//	scanf("%c", &command);
//	
//	switch (command)
//	{
//	case 'i':	printf("������â ����\n");
//		break;
//	case 'm':	printf("����â ����\n");
//		break;
//	default:	printf("������ ����� �����ϴ�.\n");
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

////[~������24 ����1~]
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("�� 2���� ��Ģ���� ��ȣ�� �Է��ϼ��� ==> ");
//	scanf("%d %d %c", &input1, &input2, & oper);
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2);	break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2);	break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2);	break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2);	break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2);	break;
//	default: printf("����� �� �����ϴ�.\n");
//	}
//	return 0;
//}

////[~������24 ����2~]
//int main()
//{
//	int month;
//	printf("���� ���ڷ� �Է��ϼ��� ==> ");
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
//	default: printf("���� �̸��� ����� �� �����ϴ�.\n");
//	}
//	return 0;
//}

//int main()
//{
//	char command;
//
//	printf("<, a ���� �̵� \n");
//	printf(">, d ������ �̵� \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>':
//		printf("���������� �̵��մϴ�.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int number;
//	int option = 3;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

////[~������25 ����4~]
//int main()
//{
//	int input;
//	printf("�޴��� �����ϼ���");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("�� ���� ����.\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�.\n");
//		break;
//	case 3:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

////[~������25 ����5~]
//int main()
//{
//	int number;
//	printf("0~9�� ���� �Է��ϼ��� ==> \n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: printf("¦\n");	break;
//	case 6: printf("¦\n");	break;
//	case 9: printf("¦\n");	break;
//	}
//	return 0;
//}

////[~������26 ����6~]
//int main()
//{
//	char command = 'x';
//	
//	switch (command)
//	{
//	case 'x': printf("���ĺ� x �Է�.\n");
//		break;
//	default: printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		{
//			int number1, number2;
//			printf("���� �� ���� �Է��ϼ���.\n");
//			scanf("%d %d", &number1, &number2);
//			printf("%d + %d = %d\n", number1, number2, number1 + number2);
//			break;
//		}
//	case 2:
//		{
//			int number3, number4;
//			printf("���� �� ���� �Է��ϼ���.\n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d - %d = %d\n", number3, number4, number3 - number4);
//			break;
//		}
//	}
//	return 0;
//}

////[~������27 ����7~]
//int main()
//{
//	char input;
//	scanf("%c", &input);
//
//	switch (input)
//	{
//	case 'w':
//		printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 'a':
//		printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 'd':
//		printf("�� ����⸦ �Է��ϼ̽��ϴ�.\n");
//		break;
//	case 's':
//		printf("�Ʒ� ����⸦ �Է��ϼ̽��ϴ�.\n");
//		break;
//	}
//	return 0;
//}

//[~������27 ����8~]
int main()
{
	int appetizer, mainDish, dessert;
	scanf("%d %d %d", &appetizer, &mainDish, &dessert);

	switch (appetizer)
	{
	case 1:
		printf("ĳ���,");
		break;
	case 2:
		printf("������,");
		break;
	case 3:
		printf("Ǫ�Ʊ׶�,");
		break;
	}

	switch (mainDish)
	{
	case 1:
		printf(" ������ũ,");
		break;
	case 2:
		printf(" �����丮,");
		break;
	case 3:
		printf(" �簥��,");
		break;
	}

	switch (dessert)
	{
	case 1:
		printf(" �ɟ�");
		break;
	case 2:
		printf(" ���̽�ũ��");
		break;
	case 3:
		printf(" ���ݸ�����");
		break;
	}

	printf("�Դϴ�.\n");
	return 0;
}