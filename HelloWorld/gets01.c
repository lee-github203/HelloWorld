#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <conio.h>

int main_gets01_c(void)
{
	/*char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));*/

	/*FILE *fp = stdin;*/
	/*getchar();
	getchar();
	getchar();
	getchar();*/
	/*int nData = 0;
	scanf_s("%d", &nData);*/

	/*FILE* fp = stdin;
	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);*/

	/*getchar();*/
	/*fflush(stdin);*/

	/*char szName[12] = {0};
	printf("이름을 입력하세요 : ");
	gets_s(szName, sizeof(szName));*/


	/*char ch = 0;
	ch = getchar();
	putchar(ch);
	putchar('Z');*/



	/*char ch = 0;
	printf("아무 키나 누르면 다음으로 넘어갑니다. \n");
	ch = _getch();

	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다. \n");*/



	/*char szName[32] = { 0 };
	printf("이름을 입력하세요 :  \n");
	gets_s(szName, sizeof(szName));

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다. \n");*/



	/*int x = 10;
	putchar('B');
	putchar('\n');

	printf("%c\n", 'A');
	printf("x는 %d입니다. \n", x);*/



	/*printf("%d\n", 10);
	printf("%u\n", 10);
	printf("%d\n", 10U);
	printf("%u\n", 10U);

	printf("%d\n", 2147483647);
	printf("%d\n", 2147483648);
	printf("%u\n", 2147483649);

	printf("%d\n", -1);
	printf("%u\n", -1);*/



	/*long long int lldData = 4294967295LL;

	printf("%d\n", lldData);
	printf("%u\n", lldData);

	printf("%u\n", lldData + 1);
	printf("%u\n", lldData + 2);
	printf("%u\n", lldData + 3);

	printf("%lld\n", lldData + 1);
	printf("%lld\n", lldData + 2);
	printf("%lld\n", lldData + 3);*/



	/*printf("%d\n", 1234);
	printf("%d, %d\n", 1234, -5678);
	printf("%+d, %d\n", 1234, -5678);

	printf("%8d\n", 1234);
	printf("%08d\n", 1234);
	printf("%-08d\n", 1234);*/



	/*printf("%d\n", sizeof(123.456F));
	printf("%d\n", sizeof(123.456));
	printf("\n\n");

	printf("%f\n", 123.456F);
	printf("\n\n");

	printf("%f\n", 123.456);
	printf("%lf\n", 123.456);*/



	/*printf("%f\n",
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F +
		0.1F + 0.1F + 0.1F + 0.1F + 0.1F
		);*/



	/*double dData = 123.456;
	printf("%f, %f\n", dData, -123.456);
	printf("\n\n");

	printf("%.1f\n", dData);
	printf("\n\n");

	printf("%.2f\n", dData);
	printf("\n\n");

	printf("%.3f\n", dData);
	printf("\n\n");

	printf("%8d\n", 123);
	printf("%12.3f\n", dData);
	printf("%012.3f\n", dData);*/



	/*int nAge = 0;

	printf("나이를 입력하세요. : ");

	scanf_s("%d", &nAge);

	printf("당신의 나이는 %d세 입니다.\n", nAge);*/



	/*int nInput = 0;
	scanf_s("%d\n", &nInput);

	printf("%d\n", nInput);*/



	/*int nInput = 0;
	scanf_s("Input : 정수", &nInput);

	printf("Input : %정수\n", nInput);*/



	/*int x = 0, y = 0;
	printf("두 정수를 입력하세요. : ");
	scanf_s("%d%d", &x, &y);

	printf("두 수의 합은 %d 입니다. \n", x + y);*/



	/*char ch = 0;
	scanf_s("%c", &ch, sizeof(ch));
	printf("입력한 문자는 %c 입니다.\n", ch);*/



	/*char szBuffer[32] = { 0 };
	scanf_s("%s", &szBuffer, sizeof(szBuffer));
	printf("%s", szBuffer);*/



	//char szBufferLeft[32] = { 0 };
	//char szBufferRight[32] = { 0 };

	//scanf("%s%s", szBufferLeft, szBufferRight);
	///*scanf_s("%s%s", &szBufferLeft, &szBufferRight, sizeof(szBufferLeft), sizeof(szBufferRight));*/
	//printf("%s %s\n", szBufferLeft, szBufferRight);



	/*int nAge = 0;
	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	char szName[32] = { 0 };
	scanf_s("%s", &szName, sizeof(szName));
	gets_s(szName, sizeof(szName));
	printf("이름을 입력하세요 :  \n");

	printf("당신의 나이는 %d살이고 이름은 szName입니다.", nAge, szName);*/



	//char szName[32] = { 0 };
	//int nAge = 0;

	//printf("나이를 입력하세요. : ");
	//scanf_s("%d", &nAge);

	//printf("이름을 입력하세요. : ");
	//while (getchar() != '\n'); // fflush(stdin); visual studio 2015 부터 적용 안 됨.
	//gets_s(szName, sizeof(szName));

	//printf("%d, %s\n", nAge, szName);



	/*int nAge = 0;
	char szName = { 0 };

	printf("나이를 입력하세요. : ");
	scanf("%d%*c", &nAge);

	printf("이름을 입력하세요. : ");
	gets(szName);

	printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", nAge, szName);*/



	/*int nAge = 0;
	char szName[32] = { 0 };

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	printf("이름을 입력하세요. : ");
	while (getchar() != '\n');*/
	/*getchar();*/ // 스페이스바 눌르면 공백생김 공백 = 한 칸
	// 그 한 칸을 글자로 인식함
	
	/*gets_s(szName, sizeof(szName));

	printf("당신의 나이는 %d살이고 이름은 %s입니다.\n", nAge, szName);*/



	/*char result;

	printf("입력. : ");
	getchar();
	result = getchar();

	printf("출력. : %c", result);*/

	/*char ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0;
	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	ch4 = getchar();
	putchar(ch2);*/ // 3-1 연습문제



	return 0;
}