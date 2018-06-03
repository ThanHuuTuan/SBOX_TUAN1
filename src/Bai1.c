#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *p, s[100];
    int n;
    int a,b,c,temp;
  printf("CHUONG TRINH SAP XEP SO - ENTER DE THUC HIEN");
    while (fgets(s, sizeof(s), stdin)) {

        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
           printf("Nhap so nguyen n co 3 chu so:");
        }
        else
            break;

    }
       if(n>100 && n<999 ){
            a = n/100;
            b = ((n%100)/10);
            c = n%10;

            if(a<b){

                temp=a; a=b; b=temp;

                    }

            if(b<c){

                temp=b; b=c; c=temp;

                    }

            if(a<b){

                temp=a; a=b; b=temp;

                    }

        printf("So ban dau = %d \n",n);
        printf("So moi da sap xep= %d%d%d", a, b, c);
        getch();
        return 0;

       }
       else{
           printf("Ban phai nhap so trong khoang [100-999]");
       }



    }









