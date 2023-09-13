#include <stdio.h>

int main() {
    char a[100];
    
    printf("문자열을 입력하세요: ");
    scanf("%99s", a); // 문자열을 입력받음 (99자까지 입력 허용)

    for (int i = 0; a[i] != '\0'; i++) {
        printf("%c\n", a[i]); // 문자를 한 글자씩 출력
    }

    return 0;
}
