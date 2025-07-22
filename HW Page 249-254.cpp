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
//		return 0;
//}
//
////[~문제8~]
//답:
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
//
////[~문제10~]
//답: 문장 12번 출력
//
////[~문제11~]
//답: i % 5 == 0 || i % 8 == 0
