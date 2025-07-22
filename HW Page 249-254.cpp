////[~문제1~]
//답: 3
//
////[~문제2~]
//답: 
//초깃값;
//while (조건식)
//{
//	실행문;
//	증감식;
//}
//
////[~문제3~]
//답 :
//int i = 0;
//while (i < 5)
//{
//	printf("%d \n", i);
//	i++;
//}
//
//
////[~문제4~]
//답:
//1 -> i = 100
//2 -> i <= 200
//3 -> i++
//
////[~문제5~]
//답: 3,4 //?????
//
//
////[~문제6~]
//답:
//1 -> 123
//2 -> 0
//3 -> 0
//
////[~문제7~]
//답:
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
//
////[~문제8~]
//답:
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
//
////[~문제10~]
//답: 문장 12번 출력
//
////[~문제11~]
//답: i % 5 == 0 || i % 8 == 0
