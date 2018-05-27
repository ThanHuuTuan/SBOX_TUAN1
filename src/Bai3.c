#include <stdio.h>
#include <conio.h>

void main()
{
    float S;
    float Cost = 0;
    printf("\n Nhap vao quang duong da di (m): ");
    scanf("%f", &S);
    if(S <= 1000)
    {
        Cost = 10000;
    }
    else if(S <= 30000 && S > 1000)
    {
        Cost = ((S - 1000))*7500/1000 + 1*10000;
    }
    else
    {
        Cost = 10000 + 29000*7500/1000 + (S-30000)*8000/1000;
    }
    printf("\n So tien phai tra: %.3f VND", Cost);
    getch();
}

