// 문제 : 값을 교체하는 change 함수를 만들어주세요.

#include <stdio.h>

void change(int* x, int* y) {
	/*예시 1
	*x = 20;
	*y = 10;
	*/
	int tmp = *x;
	*x = *y;
	*y = tmp;
	
}

int main(void) {

	int a = 10;
	int b = 20;

	printf("change 함수 호출하기 전의 a : %d, b :%d\n", a, b);

	change(&a, &b); // 이부분 수정 가능

	printf("change 함수 호출한 후의 a : %d, b :%d\n", a, b);
	// 출력 => change 함수 호출한 후의 a : 20, b : 10

	return 0;
}