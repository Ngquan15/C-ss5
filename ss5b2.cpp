#include <stdio.h>

int main() {
    int num = 30;
    int a;
    while ( num == 30){
        printf("hay nhap mot so ");
        scanf("%d", &a);
        if(a == 30){
            printf("chuan r!!!\n");
            break;

        }else if (a>30){
            printf("lon hon roi\n");
        }else{
            printf("nho hon roi\n");
        }
    }
    return 0;
}
