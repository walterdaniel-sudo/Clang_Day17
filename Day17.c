#include <stdio.h>

// ---- 변수의 범위 ----
// 지역 변수 : '블록("{}"중괄호)'내부에서 선언된 변수로, 블록 내부에서만 유효하고 블록이 끝나면 해제
//			   지역 내부에 새로운 지역에서 같은 이름의 변수가 선언되면
//             외부에 있는 변수보다 내부에 있는 변수가 더 높은 우선순위를 가지게 된다.
// 전역 변수 : 함수 외부에서 선언된 변수로, 프로그램이 종료될 때 해제
//			   전역 변수는 별도의 초기화를 진행하지 않으면 알아서 0으로 초기화 된다.
//			   전역 변수와 지역 변수가 이름이 같다면 해당 지역에 선언된 지역 변수가 더 높은 우선순위를 갖게 된다.
// 정적 변수 : 지역 변수와 전역 변수의 특성을 모두 가지고 있음
//			   전역 변수의 특성인 프로그램이 종료될 때 공간이 해제된다는 특성을 갖고 있다.
// 정적 변수 선언 방법: static 자료형 변수명;
// 
// |---------|
// |   Code  |
// |---------|
// |   Data  | <-전역 변수, 정적 변수
// |---------|
// |   Heap  |
// |---------|
// |  Stack  | <-지역 변수
// |---------|

// int num; // <= 특정 지역에 속해있지 않으므로 전역 변수
		 // 그러므로 어떠한 지역에서든 접근할 수 있음

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

		printf("num의 값: %d\n", num);
		printf("num2의 값: %d\n", num2);
	}

	printf("num의 값: %d\n", num);*/

	/*int num = 4;

	printf("num의 값: %d\n", num);

	Func();*/

	/*Func();
	Func();

	printf("n2의 값: %d\n", n2);*/

	/*int num = 4;

	Func(&num);

	printf("num의 값: %d\n", num);*/

	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	Total(kor, mat, eng, &total);
	Avg(total, &avg);
	Grade(avg, &grade);

	printf("총합: %d\n", total);
	printf("평균: %d\n", avg);
	printf("등급: %c\n", grade);

	return 0;
}