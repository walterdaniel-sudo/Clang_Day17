#include <stdio.h>

// ---- ������ ���� ----
// ���� ���� : '���("{}"�߰�ȣ)'���ο��� ����� ������, ��� ���ο����� ��ȿ�ϰ� ����� ������ ����
//			   ���� ���ο� ���ο� �������� ���� �̸��� ������ ����Ǹ�
//             �ܺο� �ִ� �������� ���ο� �ִ� ������ �� ���� �켱������ ������ �ȴ�.
// ���� ���� : �Լ� �ܺο��� ����� ������, ���α׷��� ����� �� ����
//			   ���� ������ ������ �ʱ�ȭ�� �������� ������ �˾Ƽ� 0���� �ʱ�ȭ �ȴ�.
//			   ���� ������ ���� ������ �̸��� ���ٸ� �ش� ������ ����� ���� ������ �� ���� �켱������ ���� �ȴ�.
// ���� ���� : ���� ������ ���� ������ Ư���� ��� ������ ����
//			   ���� ������ Ư���� ���α׷��� ����� �� ������ �����ȴٴ� Ư���� ���� �ִ�.
// ���� ���� ���� ���: static �ڷ��� ������;
// 
// |---------|
// |   Code  |
// |---------|
// |   Data  | <-���� ����, ���� ����
// |---------|
// |   Heap  |
// |---------|
// |  Stack  | <-���� ����
// |---------|

// int num; // <= Ư�� ������ �������� �����Ƿ� ���� ����
		 // �׷��Ƿ� ��� ���������� ������ �� ����

// void Func()
//{
//	int n1 = 3;
//	static int n2 = 3;
// 	
//	printf("n1: %d, n2: %d\n", n1, n2);
//	n1++;
//	n2++;
//}

//void Func(int* num)
//{
//	(*num)++;
//}

void Total(int kor, int mat, int eng, int *total)
{
	*total = kor + mat + eng;
}

void Avg(int total, double *avg)
{
	*avg = total / 3.0;
}

void Grade(double avg, char *grade)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade = 'B';
		break;
	case 7:
		*grade = "C";
		break;
	case 6:
		*grade = "D";
		break;
	default:
		*grade = "F";
		break;
	}
}

int main()
{
	/*int num = 5;
	int num2 = 7;

	{
		int num = 3;

		printf("num�� ��: %d\n", num);
		printf("num2�� ��: %d\n", num2);
	}

	printf("num�� ��: %d\n", num);*/

	/*int num = 4;

	printf("num�� ��: %d\n", num);

	Func();*/

	/*Func();
	Func();

	printf("n2�� ��: %d\n", n2);*/

	/*int num = 4;

	Func(&num);

	printf("num�� ��: %d\n", num);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	Total(kor, mat, eng, &total);
	Avg(total, &avg);
	Grade(avg, &grade);

	printf("����: %d\n", total);
	printf("���: %d\n", avg);
	printf("���: %c\n", grade);

	return 0;
}