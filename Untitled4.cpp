#include <stdio.h>

int main() {
    char a[100];
    
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%99s", a); // ���ڿ��� �Է¹��� (99�ڱ��� �Է� ���)

    for (int i = 0; a[i] != '\0'; i++) {
        printf("%c\n", a[i]); // ���ڸ� �� ���ھ� ���
    }

    return 0;
}
