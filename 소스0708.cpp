////[�ڵ� ���� 2~3177���� C��� ����å ����]
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

////[~������16 ����4~]
//myMoney�� ������ 1000 ~ 10000.
//coin500�� ������ 0~3 * 500 ==> 0 ~ 1500.
//coin100�� ������ 0 ~ 4999 / 100 * 100 ==> 0 ~ 4900.

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

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
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("���� �Է��ϼ��� ==> ");
//	scanf("%d", &input);
//	
//	if (input == 0)
//		printf("�Է��� ���� 0�Դϴ�.\n");
//	else if (input > 0)
//		printf("�Է��� ���� ����Դϴ�.\n");
//	else
//		printf("�Է��� ���� �����Դϴ�.\n");
//	
//	return 0;
//}

////[~������19 ����2~]
//#include<stdio.h>
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
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��ϼ��� ==> ");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//		printf("15��, ");
//	if (y_age >= 12)
//		printf("12��, ");
//
//	printf("��ü ������ ��ȭ�� �� �� �ֽ��ϴ�.");
//
//	return 0;
//}

//[~������20 ����4~]
//#include<stdio.h>
//int main()
//{
//	char initial;
//	printf("����� 1���� �Է��ϼ��� ==> ");
//	scanf("%c", &initial);
//
//	if (initial >= 97 && initial <= 122)
//		printf("�ҹ����Դϴ�.\n");
//	else if (initial >= 0x41 && initial <= 'Z')//���ڸ� �� ��, 10�������� hexademical ���̳� ''�ϰ� ���ڱ״�θ� �Է��ص���.
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
//#include<stdio.h>
//
//int main()
//{
//	int input;
//	printf("���� �Է��Ͻÿ� ==> ");
//	scanf("%d", &input);
//
//	if (input % 3 == 0) {
//		printf("input�� 3�� ����Դϴ�.\n");
//		if (input % 6 == 0)
//			printf("input�� 6�� ����Դϴ�.\n");
//		if (input % 9 == 0)
//			printf("input�� 9�� ����Դϴ�.\n");
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
//#include<stdio.h>
//
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
//#include<stdio.h>
//
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
//#include<stdio.h>
//
//int main()
//{
//	const int option = 3;//��Ʈ: int option �� const int option �� �������� ������ int�� ���� option �� ������ �Ǿ� �߰��� ���� �ٲ� �� �ִ� ���ɼ��� ����. switch-case �ڵ�� case �ڿ� ���� ���ڰ��� ������ ��� = constant ���̾�ϰ� �ٲ� �� �ִ� ���� ������ ������ ��. ���� const ��� ����� �Ἥ ����� ����������� �ڵ尡 ���ư�.
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
//	case option:
//		printf("�ɼ� ����.\n");
//		break;
//	default:
//		printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}

////[~������25 ����5~]
//#include<stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9�� ���� �Է��ϼ��� ==> ");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: //��Ʈ: case �ڿ��� �� �����ݷ�(;)�� ���� �ʾƵ� �ȴ�! �׸��� �� break ��ɾ ���� �ʾƵ� �ȴ�!
//	case 6: 
//	case 9: 
//		printf("¦\n");
//	}
//
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
//	case 'X': printf("����ǥ �Է�.\n");
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

////[~������27 ����8~]
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
//		printf("ĳ���,");
//		break;
//	case 2:
//		printf("������,");
//		break;
//	case 3:
//		printf("Ǫ�Ʊ׶�,");
//		break;
//	}
//
//	switch (mainDish)
//	{
//	case 1:
//		printf(" ������ũ,");
//		break;
//	case 2:
//		printf(" �����丮,");
//		break;
//	case 3:
//		printf(" �簥��,");
//		break;
//	}
//
//	switch (dessert)
//	{
//	case 1:
//		printf(" �ɟ�");
//		break;
//	case 2:
//		printf(" ���̽�ũ��");
//		break;
//	case 3:
//		printf(" ���ݸ�����");
//		break;
//	}
//
//	printf("�Դϴ�.\n");
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
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("���� count: %d\n", count);
//		printf("count �� 3���� ���� ���� �ݺ�\n");
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
//		printf("���� count: %d\n", count);
//		printf("count �� 0���� ���� ���� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

////[~������29 ����1~]
//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 6)
//	{
//		printf("���� %d��° ���.\n", count);
//		printf("C\n");
//		count++;
//	}
//	return 0;
//}

////[~������29 ����2~]
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

////[~������29 ����3~]
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
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
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
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else { continue; }
//		printf("�Է��� �� : %c\n", alphabet);
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
//		printf("����� �Է����ּ���(0�Է½� ����): ");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

////[~������30 ����4~]
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

////[~������30 ����5~]
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

////[~������30 ����6~]
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
//			printf("�ٽ� �Է����ּ���.\n");
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
//	printf("%c�� �̰���ϴ�!\n", 'A'+winner);
//	return 0;
//}

//int main()
//{
//	int money;
//	int remain;
//	printf("## ����� ��ȯ�� ����? ");
//	scanf("%d", &money);
//
//	printf("\n���� ��¥�� ==> %d ��\n", money / 50000);
//	printf("�� ��¥�� ==> %d ��\n", money % 50000 / 10000);
//	printf("��õ ��¥�� ==> %d ��\n", money % 10000 / 5000);
//	printf("õ ��¥�� ==> %d ��\n", money % 5000 / 1000);
//	printf("����� �ٲ��� ���� �ܵ� ==> %d ��\n", money % 1000);
//		
//	return 0;
//}

//int main()
//{
//	int a;
//
//	printf("���� �Է��ϼ���. : ");
//	scanf("%d", &a);
//
//	if (a == 100)
//		printf("100�Դϴ�.\n");
//	else
//		printf("100�� �ƴմϴ�.\n");
//	return 0;
//}

//int main()
//{
//	char ch;
//
//	printf("A, B, C Ű �� �ϳ��� ������ Enter�� ��������: ");
//	scanf(" %c", &ch);
//
//	switch (ch)
//	{
//	case 'a': printf("A Ű�� �������ϴ�. \n"); break;
//	case 'A': printf("A Ű�� �������ϴ�. \n"); break;
//	case 'b': printf("B Ű�� �������ϴ�. \n"); break;
//	case 'B': printf("B Ű�� �������ϴ�. \n"); break;
//	case 'c': printf("C Ű�� �������ϴ�. \n"); break;
//	case 'C': printf("C Ű�� �������ϴ�. \n"); break;
//	default: printf("�߸� �������ϴ�. \n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	char ch = 'Z';
//
//	if (ch == 'A')
//		printf("A ��� \n");
//	else if (ch == 'B')
//		printf("B ��� \n");
//	else if (ch == 'C')
//		printf("C ��� \n");
//	else printf("�� \n");
//
//	return 0;
//}

//int main()
//{
//	int a = 100;
//
//	if (a < 200)
//	{
//		printf("a�� 200���� ");
//		printf("�۽��ϴ�.\n");
//	}
//	else
//		printf("a�� 200���� Ů�ϴ�.");
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
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ�: %d��\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}

//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};//???? �����ڵ�?
//	do
//	{
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//		}
//
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

//[~������31 ����5~]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int select;
//	enum{EXIT, LOGIN, REGISTER, OPTION, DEVELOPER};
//	do{
//	printf("1. �α���\n2. ȸ������\n3. �ɼ�\n4. ���� �����\n");
//	printf("���� �Է��ϼ��� ==> ");
//	scanf("%d", &select);
//
//	//switch (select)
//	//{
//	//case LOGIN:
//	//	printf("�α���\n");
//	//	break;
//	//case REGISTER:
//	//	printf("��ȸ�� ���\n");
//	//	break;
//	//case OPTION:
//	//	printf("�ɼ� ����\n");
//	//	break;
//	//case DEVELOPER:
//	//	printf("�����ڵ�");
//	//	break;
//	//}
//	} while (select >=1 && select <=4);
//	printf("���α׷� ����!");
//	return 0;
//}

////[Starting Codes]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//#include<math.h>

//[~������32 ����2~]
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
//		printf("\n%d��° �� !\n", ++day);
//		printf("���õ� ���ұ��?\n");
//		printf("1. �ڵ������Ѵ�.\n2. ��� �Ѵ�.\n3. ������ �Ѵ�.\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//		if (command <1 || command >3) break;
//		else if (command == 1)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("����� ���׿�.\n");
//			case 3: printf("����������. "); break;
//			case 2: printf("����� ������.\n");
//			case 4: printf("ī�信�� "); break;
//			case 5: printf("�п����� ");
//			}
//			printf("�ڵ� �����մϴ�.\n");
//			study++;
//		}
//		else if (command ==2)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("����� ���׿�.\n");
//			case 3: printf("�ｺ�忡�� "); break;
//			case 2: printf("����� ������.\n");
//			case 4: printf("�״Ͻ��忡�� "); break;
//			case 5: printf("�����忡�� ");
//			}
//			printf("��մϴ�.\n");
//			exercise++;
//		}
//		else if (command ==3)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt) {
//			case 1: printf("����� ���׿�.\n");
//			case 3: printf("���࿡ ���� "); break;
//			case 2: printf("����� ������.\n");
//			case 4: printf("�ζǿ� ��÷�Ǽ� "); break;
//			case 5: printf("�ֽ����� ");
//			}
//			printf("���� �����ϴ�.\n");
//			money++;
//		}
//		printf("%d %d %d", study, exercise, money); //�� �ൿ�� �󸶳� ���� �ݺ��ߴ��� ���� Ȯ���ڵ�
//	} while (1);
//
//	if (day <= 3)
//	{
//		printf("�״���Դϴ�...\n");
//	}
//	else if (study > exercise && study > money) //1. �ڵ����ο� ���� ����
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�.!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
//			break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	else if (exercise > study && exercise > money) //2. �ｺ�� �� �Ϳ� ���� ����
//	{
//		int level = exercise / 8;
//		switch (level)
//		{
//		case 0:
//			printf("ü���� ���� �����߽��ϴ�.!\n");
//			break;
//		case 1:
//			printf("ü���� ���� �����߽��ϴ�.!\n");
//			break;
//		default:
//			printf("�ٵ������ �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	else if (money > exercise && money > study) //3. ������ �� �Ϳ� ���� ����
//	{
//		int level = money / 8;
//		switch (level)
//		{
//		case 0:
//			printf("������ �� �� �ְ� �Ǿ����ϴ�.!\n");
//			break;
//		case 1:
//			printf("������ �� �� �ְ� �Ǿ����ϴ�.!\n");
//			break;
//		default:
//			printf("���� �� �� �ְ� �Ǿ����ϴ�.!\n");
//			break;
//		}
//	}
//	return 0;
//}

////[������ ������ 251 7�� ����]
//int main()
//{
//	int input1;
//	int input2;
//
//	printf("���۰� ==> ");
//	scanf("%d", &input1);
//	printf("���� ==> ");
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

////[������ ������ 251 8�� ����]
//int main()
//{
//	int input;
//	printf("���ڸ� ���� �� �Է�: ");
//	scanf("%d", &input);
//
//	int jaritsu_input;
//	jaritsu_input = input;//�� ���� �ٽ�����Ʈ!
//	int jaritsu = 0;
//
//	while (jaritsu_input > 0)
//	{
//		jaritsu_input /= 10;
//		jaritsu++;
//	}
//	printf("�ڸ����� %d �Դϴ�.\n", jaritsu);
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

//[������ ������ 254 11�� ����]
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
//	printf("5����� 8����� ��: %d \n", hap);
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//		if (sheep == 3)
//		{
//			printf("���߿� ������!\n");
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
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}

////[~������33 ����1~]
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//	}
//	printf("������!\n");
//	return 0;
//}

////[~������33 ����2~]
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("���� ���� ���Ҵ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
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
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("����Ʈ %d��\n", count);
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
//	printf("���� %d\n", sum_number);
//	return 0;
//}

//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("�߾�");
//	}
//	printf("\n");
//	return 0;
//}

////[~������35 ����1~]
//int main()
//{
//	int number;
//	
//	for (number = 10; number < 100; ++number)
//		printf("%d\n", number);
//	return 0;
//}

////[~������35 ����2~]
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

////[~������35 ����3~]
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
//	printf("100 ������ �������� ����մϴ�.\n");
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
//	printf("100���� 7�� ����� ����մϴ�.\n");
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
//	printf("1���� 10���� ���� �� ��� : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//	}
//	printf("%d\n", number);
//	return 0;
//}

//int main()
//{
//	printf("1���� 10���� ���� �� ��� : ");
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

////[~������37 ����4~]
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

////[~������37 ����5~]
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
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//
//	return 0;
//}

//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	return 0;
//}

//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d�� \n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d�� %d�� \n", myClass, student);
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
//			printf("%d�� %d�� \n", myClass, student);
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
//			printf("%d�� %d��\n", myClass, student);
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
//				printf("%d�г� %d�� %d�� \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}


////[~������39 ����1~]
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

////[~������39 ����2~]
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
////[~������39 ����3~]
//int main()
//{
//	int dice4, dice6;
//
//	for (dice4 = 1; dice4 <= 4; dice4++)
//	{
//		for (dice6 = 1; dice6 <= 6; dice6++)
//		{
//			printf("4�� - %d, 6�� - %d\n", dice4, dice6);
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
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("���� �ݺ��� %d�� �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż�� \n \n", outer);
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

////[~�ΰ� ���� �������� (����)~]
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
////[~�ΰ� ���� �������� (��)~]

////[~������41 ����1(����)~]
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
////[~������41 ����1(��)~]

////[~������41 ����2(����)~]
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
////[~������41 ����2(��)~]

////[~������41 ����3(����)~]
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

////[~������41 ����4(����)~]
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
////[~������41 ����4(��)~]

////[~������41 ����5(����)~]
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
//				printf("�ٽ� �Է����ּ���.\n");
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
//	printf("%c�� �̰���ϴ�!\n", 'A'+winner);
//	return 0;
//}

//int main()
//{
//	char str[100];
//	int str_cnt;
//	int i;
//
//	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
//	scanf("%s", str);
//
//	printf("\n");
//	printf("�Է��� ���ڿ� ==> %s\n", str);
//	printf("��ȯ�� ���ڿ� ==>");
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

////[~������42 ����1~]
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

////[~������42 ����1~] (for -> while �� �ٲܶ� continue; �� ������� for�� 3��° �������� �־ ��� �ݺ������� while �� �������� ��� continue; �ع����� ���� ������ �׳� ������ ��. continue; �� �����ؾ��ϴ� ����)
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
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

////[~������42 ����1~]
//int main()
//{
//	for (int number;;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("���α׷� ����\n");
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

////[~������43 ����2~]
////[1]while(for_flag) --> [2]while(for_flag) ��� --> [3]while(number++) --> [4]while(for_flag) --> [5]��
////[1]for_flag = 1, number = 0 | [2]for_flag = 1, number = 2 | [3]for_flag = 0, number = 3 | [4]for_flag = 0, number = 4

////[~������43 ����3~]
//int main()
//{
//	int for_flag = 1;
//	int number = 1;//���� 1�� �ٲ�
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
////[1]while(for_flag) --> [2]while(number++) --> [3]while(number++) --> [4]while(for_flag) ��� --> [5]��
////[1]for_flag = 1, number = 1 | [2]for_flag = 1, number = 2 | [3]for_flag = 1, number = 3 | [4]for_flag = 0, number = 4

////[~������43 ����4 & 5~]
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

////[�ڵ� ���� 3179~????���� C��� ��ȭå ����]
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
//	printf("�Լ��ȿ��� ����\n");
//}
//int main()
//{
//	printf("������\n");
//	function_test1();
//	printf("������\n");
//	return 0;
//}

//void eatFood()
//{
//	printf("��Ա�\n");
//}
//void goSleep()
//{
//	printf("���ڱ�\n");
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
//	printf("A: �ָӴϿ�");
//	printf("%d��\n", money);
//}
//
//void person_B()
//{
//	int money = 5000;
//	printf("B: �ָӴϿ�");
//	printf("%d��\n", money);
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
//	printf("���� ������ �� : ");
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
//	printf("%f���� ����\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<ũ�������� ī��>\n");
//	printf("���: 0.7����\n");
//	printf("������(����:����) : ");
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
//	printf("���� �����?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}

////[~������10 ����1~]
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}

////[~������10 ����2~]
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
//	printf("����� �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//void makeHamburger(int count)
//{
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//int main()
//{
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
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
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count)
//{
//	if (type == 'A')
//	{
//		printf("AŸ�� �ܹ���");
//	}
//	else
//	{
//		printf("BŸ�� �ܹ���");
//	}
//	printf(" %d�� ���Խ��ϴ�.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("���Ÿ�� �ܹ��Ÿ�");
//	printf("�ֹ��Ͻðڽ��ϱ�?(A or B)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C')
//	{
//		return 0;
//	}
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
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
//	printf("��� : %d\n", data1);
//	return 0;
//}

////[~������12 ����1~]
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
//	printf("���ϱ� ��� : %d\n", data1);
//	int data2 = subtract_number(a, b);
//	printf("���� ��� : %d\n", data2);
//	int data3 = multiply_number(a, b);
//	printf("���ϱ� ��� : %d\n", data3);
//	float data4 = divide_number(a, b);
//	printf("������ ��� : %f\n", data4);
//	return 0;
//}

//���ȣ�⿡ ���� ����
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

////[~������13 ����1~]
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
//	struct student s = { 1, (char*)"�� ��", 90.5 };
//	printf("���̵�: %d\n", s.id);
//	printf("�̸�: %s\n", s.name);
//	printf("�����: %lf\n", s.aver);
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
//	printf("ȭ���: %s\n", M416.name);
//	printf("ź ����: %.2f\n", M416.bullet_type);
//	printf("����������: %s\n", M416.scope ? "true":"false");
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
//	printf("���� ũ��: %d\n", sizedummy);
//	printf("vip���� ũ��: %d\n", sizevip);
//	
//	VIP_PERSON lee_sam;
//	printf("�� ����� �Է��ϼ���\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}

////[~������15 ����1~]
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
//	printf("ù��° ��� ũ�� : % d\n", sizeof(eightbytesample1));
//	printf("�ι�° ��� ũ�� : % d\n", sizeof(eightbytesample2));
//
//	return 0;
//}

////[~������15 ����2~]
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	__dummy__ sample; //�������ϸ� ������ �߻��ϴ� ����: __dummy__�� ����ü(struct)�� �̸��� ��, ���� ����ü ������ ������� �ʾұ� ����
//	// ���� �ڵ�� ����ü�� ������ �����ϴ� �ڵ�����̴�.
//	int tmp;
//	printf("ù��° ���̴��� ��: ");
//	scanf("%d", &sample.data_0);
//	printf("�ι�° ���̴��� ��: ");
//	scanf("%d", &tmp);
//	sample.data_1 = (char)tmp;
//	printf("����° ���̴��� ��: ");
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
//	printf("�� : %hd\n", pt1);
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
//	printf("�� : %hd\n", pt);
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
//	printf("�� : %hd\n", pt2);
//}

////[~������16 ����2-1)~]
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
//	printf("�� : %hd\n", pt2);
//	printf("�� : %hd\n", pt2+5);
//}

////[~������16 ����2-2)~]
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
//	printf("�� : %hd\n", pt2);
//}
//void printDataAdd5(short pt3)
//{
//	pt3 += 5;
//	printf("�� : %hd\n", pt3);
//}

////[~������16 ����2-3)~] //����Ǯ��
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
//	printf("�� : %hd\n", pt2);
//}
//void printDataAdd5(short pt3)
//{
//	pt3 += 5;
//	printf("�� : %hd\n", pt3);
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
//	printf("num�� �ȿ� ����ִ�");
//	printf("1 ��° ���ڴ�? %d\n", num[1]);
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d��°�� %d ����\n", 0, num[0]);
//	printf("%d��°�� %d ����\n", 1, num[1]);
//	printf("%d��°�� %d ����\n", 2, num[2]);
//	return 0;
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//	printf("%d��°�� %d ����\n", k, num[k]); k++;
//	return 0;
//}

//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d��°�� %d ����\n", k, num[k]);
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

////[~������18 ����1~]
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

////[~������18 ����2~]
//int main()
//{
//	int arr[10];
//	for (int n = 0; n < 10; n++)
//	{
//		scanf("%d", &arr[n]);
//		for (int m = 1; m < 10; m++)
//		{
//			label:
//				if (arr[n] == arr[n - m])//�����Է¼��ڿ� ���ϴ� ����
//				{
//					printf("exist\n");
//					printf("������ �ٸ� ���ڸ� �Է��ϼ���: ");
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

////[~������19 ����1~]
//int main()
//{
//	int arr[4] = { 4, 3, 1,2 };
//	int temp;
//	temp = arr[0];
//	arr[0] = arr[2];
//	arr[2] = arr[1];
//	arr[1] = arr[3];
//	arr[3] = temp;
//	printf("���ο� ����: %d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}

////[~������19 ����2~]
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
//				printf("������ �ٸ� ���ڸ� �Է��ϼ���: ");
//				scanf("%d", &arr[n]);
//				m = 1;
//				goto label;
//			}
//			else
//				break;
//		}
//	}
//	printf("���ο� ����: %d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
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

////[~������20 ����1~]
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

////[~������20 ����2~]
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
//	printf("�� �ֻ��� ���� ���� Ƚ��: %d %d %d %d %d %d\n", repeat[0], repeat[1], repeat[2], repeat[3], repeat[4], repeat[5]);
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

////[~������21 ����1~]
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
//		for (int j = 0; j < m; j++)//��Ÿ? j<n �� �ƴ���...
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

////[~������22 ����2~]
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

////[~������22 ����3~]
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

////[~������22 ����4~]
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

////[~������22 ����4~]
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
//	//[][] 2���� �迭�ȿ� *�� �ִ°�
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

////[~������22 ����5~]
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

////[~������22 ����5~]
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
//	printf("pA�� ũ�� : %d byte\n", sizeof(pA));
//	printf("pB�� ũ�� : %d byte\n", sizeof(pB));
//	printf("pC�� ũ�� : %d byte\n", sizeof(pC));
//
//	printf("*pA�� ũ�� : %d byte\n", sizeof(*pA));
//	printf("*pB�� ũ�� : %d byte\n", sizeof(*pB));
//	printf("*pC�� ũ�� : %d byte\n", sizeof(*pC));
//}

//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("�� ������ ���� ���� %d�Դϴ�\n", ptr2 - ptr1);
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
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1); //�迭�� ���� ���� ��
//	printf(">> %d\n", ptrFibo4 - ptrFibo1); //�迭���� ����� �ּ��� ��ġ�� ���� ��
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

////[~������24 ����1~]
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int* ptr;
//	ptr = arr;
//	ptr += 2;//ptr�� 2�� ���ؼ� �ּ�ĭ 2���̵��ϴ� ���
//
//	printf("%d", *ptr);
//}

//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);//�ݺ��� �� ���� p�� �ּҸ� 1�� �̵��ϴ� ���
//	}
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i=0;i<6;i++)
//	{
//		printf("%d", *p++);//�ݺ��� �� ���� 2���� �迭�� p�� �ּҸ� 1�� �̵��ϴ� ���
//	}
//	return 0;
//}

//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5; //num[1]�� ���� ����! 5�� �ٲٰ� �״����� pt�ּҿ� 1�� ���ؼ� �� �ڿ� num[2]�� ��ġ�� �ű�. ���� ������ �ڹٲ� ���� �����ϴ� ���� �߿���!
//	*pt++ = 10; //num[2]�� ���� ����! 10���� �ٲٰ� �״����� pt�ּҿ� 1�� ���ؼ� �� �ڿ� num[3]�� ��ġ�� �ű�. ���� ������ �ڹٲ� ���� �����ϴ� ���� �߿���!
//	
//	pt--; //pt�� �ּҸ� �ٽ� num[3] ���� num[2]�� �ٲ�
//	*pt++ += 20; // num[2]�� ���� ����! 20�� ���ϰ�(+=����) �״����� pt�ּҿ� 1�� ���ؼ� �� �ڿ� num[3]�� ��ġ�� �ű�. ���� ������ �ڹٲ� ���� �����ϴ� ���� �߿���!
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//void main()
//{
//	char str[] = "��������� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";//ASCII�ڵ忡�� �ѱ��� 2����Ʈ�� ����, �����̽��ٴ� 1����Ʈ
//	char* ptr = &str[7];
//	printf("%s\n\n", ptr);
//}

//void main()
//{
//	char str[] = "������ ��� : ��� �� ������ ������ ��忡���� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

////[~������26 ����1~]
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

////[~������26 ����2~]
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
//		if (*ptr == 100) //�迭 ���� �����ϸ� ó������ �ǵ����� ��ɾ�
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
//	printf("%s\n", buf);//buf��� string �迭�� �������� buf[5]��ġ�� \0 NULL���ڰ� �ƴ� ����'1'�� ���������� ����ϸ� ���ڰ��� �����Ⱚ�� ����
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

[2025-08-21�� ���������� �κ�]