#include <stdio.h>

int main(void) {

	// 문자 a b c를 배열에 저장하고 출력해주세요.
	// "abc" 

	int arr[3] = { 1,2,3 };

	printf("%c", "abc"[0]);
	printf("%c", "abc"[1]);
	printf("%c", "abc"[2]);

	char str[3] = { 'a', 'b', 'c' };
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);

	return 0;
}
