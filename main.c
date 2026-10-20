#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите первое число: ");
    scanf("%d", &a);
    printf("Введите второе число: ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
