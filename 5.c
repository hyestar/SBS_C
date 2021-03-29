// a부터 z까지 출력해주세요

#include <stdio.h>

int main(void) {

    // a ~ z 까지 출력해주세요.
    //printf("abcdefhijklmnopqrstuvwxyz");

    // 문자는 사실 정수다.
    /*char c = 'a';
    short s = 'a';
    int i = 'a';
    long l = 'a';
    */
    char c = 97;
    short s = 97;
    int i = 97;
    long l = 97;
    
    for (int i = 'a'; i <= 'z'; i++) {
        printf("%c ", i);
    }
    printf("\n");
    for (int i = 97; i < 97 + 26; i++) {
        printf("%c", i);
    }
    printf("\n");
    for (int i = 0; i < 26; i++) {
        printf("%c", 'a' + i);
    }


    return 0;
}
