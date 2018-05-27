#include<stdio.h>

int UCLN(int a, int b) {
    if (b == 0)
    return a;
    return UCLN(b, a % b);
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int a, b;
    printf("CHUONG TRINH TIM UCLN,BCNN CUA 2 SO\n");
    printf("Nhap a= ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("UCLN cua %d va %d la: %d", a, b, UCLN(a, b));
    printf("\nBCNN cua %d va %d la: %d", a, b, BCNN(a, b));
    getch();
}
