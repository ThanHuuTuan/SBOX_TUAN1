#include <stdio.h>
#include <conio.h>

void main()
{
    char *p, s[100];
    int n;
    float Cost = 0;
    printf("TINH TIEN TAXI - ENTER DE THUC HIEN");
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Nhap vao quang duong di duoc (m): ");

        }
        else
            break;

    }
            //printf("\n Nhap vao quang duong da di (m): ");
            //scanf("%f", &n);
    // Tinh tien theo quang duong di duoc
    if(n <= 1000)
    {
        Cost = 10000; // Nho hon 1 km
    }
    else if(n <= 30000 && n > 1000) //  tu   1200m -> <30 km
    {
        Cost = ((n - 1000))*7500/1000 + 1*10000;
    }
    else
    {
        // Tren 30 km tinh tien tang them 8000/ 1km
        Cost = 10000 + 29000*7500/1000 + (n-30000)*8000/1000;
    }
    printf("\n Ban da di: %dm", n);
    printf("\n So tien phai tra: %.3f VND", Cost);
    getch();
    return 0;
}

