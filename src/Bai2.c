#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p, str[100];
    int n,i;
    int lower,upper;
    lower=upper=0;
    printf("CHUONG TRINH DEM UPPER/LOWER - ENTER DE THUC HIEN");
// KIEM TRA DAU VAO
    while (fgets(str, sizeof(str), stdin)) {
        n = strtol(str, &p, 10);
        if (p == str || *p != '\n') {
            printf("Nhap vao chieu dai chuoi n= ");
            char str[n];


        } else break;
    }
    do{
    // KIEM TRA CHUOI KY TU IN HOA va IN THUONG
    printf("\nNhap vao chuoi: ");
    fflush(stdin);
    gets(str);
    if(strlen(str)>n){
            printf("\nchuoi phai NHO HON hoac BANG n\n",n);
        }
    }while(strlen(str)>n );

    for(i=0;str[i]!=NULL;i++){

        if(str[i]>='A' && str[i]<='Z')
            upper++;
        else if(str[i]>='a' && str[i]<='z')
            lower++;
    }
    printf("Tat ca so ky tu in hoa la: %d",upper);
    printf("\nTat ca so ky tu in thuong la: %d",lower);
    getch();
    return 0;
}
