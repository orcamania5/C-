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

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

//[������ ������ 251 7�� ����]
//int main()
//{
//	int numStart;
//	int numEnd;
//
//	printf("���۰� ==> ");
//	scanf("%d", &numStart);
//	printf("���� ==> ");
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

//[������ ������ 251 8�� ����]
//int main()
//{
//	int input;
//	printf("���ڸ� ������ �Է�: ");
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
//	for (sheep = 1; sheep <= 45; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("���� ���� ���Ҵ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
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

//[~������37 ����4~]
int main()
{

}

//[~������37 ����5~]
int main()
{

}
