#include <stdio.h>

int main_operator_application(void)
{
	/*int nData = 10;*/

	// sizeof �������� �ǿ����ڴ� �ڷ����̴�.
	/*printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d\n", sizeof('A'), sizeof(char));
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));*/

	// ����� �ᱣ���� �ڷ����� ũ�⸦ �����Ѵ�.
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

	//// 10�� 10���� ũ�ų� ���� ������ '��'�̴�.
	//printf("%d\n", y >= 10);
	//// ��������� ���迬�꺸�� �켱�Ѵ�.
	//// �׷��Ƿ� x + 5���� ����� ���迬�꿡 �����Ѵ�.
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
	//// ����ڰ� �Է��� ���� 0�� �ƴϸ� ���̴�.
	//// �׷��Ƿ� ����ڰ� 0�� �Է��ϸ� �����̳�, ! ������ ������ ���� �ȴ�.
	//bResult = !nInput;
	//printf("Result : %d (1:True, 0:False)\n", bResult);
	


	//int nAge = 0, nHeight = 0;

	//printf("���̸� �Է��ϼ���. : ");
	//scanf_s("%d", &nAge);
	//printf("Ű�� �Է��ϼ���. : ");
	//scanf_s("%d", &nHeight);

	//// ��� �� ������ ���ʿ��� ���������� �����Ѵ�!!!
	//// ���� �������� �� ������ �ʿ䰡 ���ٰ� �����Ǹ�
	//// �������� ���� ������ ������ ������� ���� ����� ������.
	//printf("��� : %d (1:�հ�, 0:���հ�)\n",
	//	nAge >= 20 && nAge <= 30 && nHeight >= 150);



	//int nInput = 0, nSelect = 0;
	//scanf_s("%d", &nInput);

	//// ���ǽ��� ���̸� nSelect = 10�� �ǰ�, �����̸� nSelect = 20�� �ȴ�.
	//nSelect = nInput <= 10 ? 10 : 20;
	//printf("%d\n", nSelect);



	//int nInput = 0, nSelect = 0;
	//scanf_s("%d", &nInput);

	///*nInput <= 10 ? nSelect = 10 : nSelect = 20;
	//printf("%d\n", nSelect);*/

	//nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	//printf("%d\n", nSelect);



	//int nHeight = 0;

	//printf("Ű�� �Է��ϼ���. : ");
	//scanf_s("%d", &nHeight);

	//printf("��� : %s\n", nHeight >= 150 ? "�հ�" : "���հ�"); // ���α׷��� �⺻���. �з��� ���� : �հ��ڿ� ���հ��ڸ� �з��ϴ� ���



	/*int nMax = 0;
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	nMax = a;
	nMax = b > nMax ? b : nMax;
	nMax = c > nMax ? c : nMax;

	printf("MAX : %d\n", nMax);*/ // ���α׷��� �⺻���. �ִ� ���ϱ� : �� �������� ���� ū �� ���ϱ� - ��ʸ�Ʈ ���



	//int nMax = 0, nInput = 0;

	//// ó�� �Է¹��� ���� �ϴ� �ִ��̴�.
	//scanf_s("%d", &nInput);
	//nMax = nInput;

	//// ������� Ȯ���� �ִ񰪰� ����ڰ� �Է��� ���� ���ϰ�
	//// ���ο� �ִ��� �����Ѵ�.
	//scanf_s("%d", &nInput);
	//nMax = nInput > nMax ? nInput : nMax;

	//// ���� ���� ��� �ŵ��� ���� �ִ��� �����Ѵ�.
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