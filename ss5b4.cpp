#include <stdio.h>

int main() {
    int a;

    do {
        printf("nhap so nguyen duong tu 1 den 10: ");
        scanf("%d", &a);

        if (a < 1 || a > 10) {
            printf("Sai, hay nhap lai.\n");
        }
    } while (a < 1 || a > 10);  
    
    printf("bang cuu chuong cua %d:\n", a);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
