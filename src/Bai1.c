#include <stdio.h>

int main() {

    int n, a, b, c, temp;

    printf("Nhap so nguyen n co 3 chu so: ");
    scanf("%d", &n);
do{

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
    printf("So moi = %d%d%d", a, b, c);
    getch();

  }
while(n>=100 && n<=999);


}
