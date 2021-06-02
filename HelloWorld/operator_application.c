#include <stdio.h>

int main_operator_application(void)
{
	/*int nData = 10;*/

	// sizeof 연산자의 피연산자는 자료형이다.
	/*printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));*/

	// 연산식 결괏값의 자료형의 크기를 측정한다.
	/*printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));
	printf("%d\n", nData);*/


	
	/*int aList[5] = { 0 };

	printf("%d\n", sizeof(aList));
	printf("%d\n", 20);*/

	/*printf("%d\n", 2147483600.0F == 2147483648.0F);*/
	


	//int x = 5, y = 10;

	//printf("%d\n", x == y);
	//printf("%d\n", x != y);
	//printf("%d\n", x > 5);
	//printf("%d\n", y < 5);

	//// 10은 10보다 크거나 같기 때문에 '참'이다.
	//printf("%d\n", y >= 10);
	//// 산술연산은 관계연산보다 우선한다.
	//// 그러므로 x + 5연산 결과가 관계연산에 참여한다.
	//printf("%d\n", y <= x + 10);



	/*printf("%d\n", 300 == 299.99999F);
	printf("%d\n", 300 == 299.99999);

	printf("%d\n", 300 == 299.9999F);
	printf("%d\n", 300 == 300.00001F);*/
	



	/*int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput);
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (1:True, 0:False)\n", bResult);*/



	/*int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput);
	bResult = nInput > 3 && nInput < 20;
	printf("Result : %d (1:True, 0:False)\n", bResult);*/



	//int nInput = 0, bResult = 0;

	//scanf_s("%d", &nInput);
	///*bResult = 3 < nInput < 20;*/
	//bResult = nInput > 3 && nInput < 20;
	//printf("Result : %d (1:True, 0:False)\n", bResult);



	//int nInput = 0, bResult = 0;

	//scanf_s("%d", &nInput);
	//// 사용자가 입력한 값이 0이 아니면 참이다.
	//// 그러므로 사용자가 0을 입력하면 거짓이나, ! 연산을 수행해 참이 된다.
	//bResult = !nInput;
	//printf("Result : %d (1:True, 0:False)\n", bResult);
	


	//int nAge = 0, nHeight = 0;

	//printf("나이를 입력하세요. : ");
	//scanf_s("%d", &nAge);
	//printf("키를 입력하세요. : ");
	//scanf_s("%d", &nHeight);

	//// 모든 논리 연산은 왼쪽에서 오른쪽으로 진행한다!!!
	//// 만일 논리적으로 더 수행할 필요가 없다고 결정되면
	//// 수행하지 않은 나머지 연산들과 상관없이 최종 결론을 내린다.
	//printf("결과 : %d (1:합격, 0:불합격)\n",
	//	nAge >= 20 && nAge <= 30 && nHeight >= 150);



	//int nInput = 0, nSelect = 0;
	//scanf_s("%d", &nInput);

	//// 조건식이 참이면 nSelect = 10이 되고, 거짓이면 nSelect = 20이 된다.
	//nSelect = nInput <= 10 ? 10 : 20;
	//printf("%d\n", nSelect);



	//int nInput = 0, nSelect = 0;
	//scanf_s("%d", &nInput);

	///*nInput <= 10 ? nSelect = 10 : nSelect = 20;
	//printf("%d\n", nSelect);*/

	//nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	//printf("%d\n", nSelect);



	//int nHeight = 0;

	//printf("키를 입력하세요. : ");
	//scanf_s("%d", &nHeight);

	//printf("결과 : %s\n", nHeight >= 150 ? "합격" : "불합격"); // 프로그래밍 기본요소. 분류와 선택 : 합격자와 불합격자를 분류하는 방법



	/*int nMax = 0;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	nMax = a;
	nMax = b > nMax ? b : nMax;
	nMax = c > nMax ? c : nMax;

	printf("MAX : %d\n", nMax);*/ // 프로그래밍 기본요소. 최댓값 구하기 : 세 정수에서 가장 큰 수 구하기 - 토너먼트 방식



	//int nMax = 0, nInput = 0;

	//// 처음 입력받은 값은 일단 최댓값이다.
	//scanf_s("%d", &nInput);
	//nMax = nInput;

	//// 현재까지 확인한 최댓값과 사용자가 입력한 값을 비교하고
	//// 새로운 최댓값을 결정한다.
	//scanf_s("%d", &nInput);
	//nMax = nInput > nMax ? nInput : nMax;

	//// 같은 논리를 계속 거듭해 최종 최댓값을 결정한다.
	//scanf_s("%d", &nInput);
	//nMax = nInput > nMax ? nInput : nMax;

	//printf("MAX : %d\n", nMax);



	/*int nMax = -9999, nInput = 0;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);*/


	int nResult, w = 0, x = -1, y = -1, z = 1;
	nResult = w++ || x++ && ++y || ++z;
	printf("%d %d %d %d %d\n", w, x, y, z, nResult);
	
	/*return 0;*/
}