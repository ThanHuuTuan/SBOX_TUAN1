#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef char S[200];
void main(){
    S x;
    int i=0,j;
    printf("Nhap vao xau can chuan hoa: ");
    gets(x);
while(x[i]==' ' && i<strlen(x))
        i++;
    strcpy(&x[0], &x[i]);

while(i<strlen(x)-1){
        if (x[i]==' ' && x[i+1]==' ')
            strcpy(&x[i], &x[i+1]);
        else
        i++;
    }
while(x[strlen(x)]==' ')
        x[strlen(x)]='\0';

for(i=0;i<strlen(x)-1;i++){
		if((x[i]==','||x[i]=='.'|| x[i]==';')&& x[i+1]!=' '){
			for(j=strlen(x)+1;j>=i+2;j--){
				x[j]=x[j-1];
			}
			x[i+1]=' ';
		}
	}
    printf("\nXau da chuan hoa:%s", x);
    getch();
}
