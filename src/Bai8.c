#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *p, s[100];
    int n;
    int i,length;
    printf("DAO CHUOI- ENTER DE THUC HIEN");
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Nhap chieu dai cua chuoi: ");

        }
        else
            break;

    }
    char str[n];
    do{
        printf("\nNhap vao chuoi: ");
        fflush(stdin);
        gets(str);
        if(strlen(str)>n){
            printf("\nNhap lai chuoi thoa man dieu kien!",n);
        }
    }
    while(strlen(str)>n);
    length = strlen(str);
    printf("Chuoi Dao: ");
    for(i=length-1; i>=0; i--)
        printf("%c",str[i]);
        getch();
    return 0;

    }









