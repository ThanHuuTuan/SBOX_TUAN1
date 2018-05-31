#include <stdio.h>

int main() {

    int n, a, b, c, temp;


do{
    printf("Nhap so nguyen n co 3 chu so: ");
    scanf("%d", &n);
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


  }
while(n<=100 || n>=999);
    printf("So ban dau = %d \n",n);
    printf("So moi da sap xep= %d%d%d", a, b, c);
    getch();

}
