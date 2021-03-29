//문제3. 숫자 다섯 개를 사용자에게 입력받아 입력받은 순서와 반대로 출력하는 프로그램을 만드시오.
#include <stdio.h>

int main(void) {

	int arr[] = { 4,7,9,0,3 };

	// v1 arr의 값을 반대로 출력해주세요.
	// 포인터 문법, [] 문법 두가지 방식으로 풀이
	// 출력 예시 : 3 0 9 7 4
	for (int i = 4; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	printf("%d ", *(arr + 4));
	printf("%d ", *(arr + 3));
	printf("%d ", *(arr + 2));
	printf("%d ", *(arr + 1));
	printf("%d ", *(arr));

	// v2 숫자 다섯 개를 scanf로 입력받아 입력받은 순서와 반대로 출



	return 0;
}