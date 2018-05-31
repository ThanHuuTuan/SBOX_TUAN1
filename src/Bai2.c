#include <stdio.h>

int main()
{
    int i,n;
    int lower,upper;
    lower=upper=0;
    printf("\nDo dai cua chuoi n=");
    scanf("%d",&n);
    char str[n];
    do{
        printf("\nNhap vao chuoi: ");
        fflush(stdin);
        gets(str);
        if(strlen(str)>n){
            printf("\nchuoi phai NHO HON hoac BANG n\n",n);
        }
    }while(strlen(str)>n);

    for(i=0;str[i]!=NULL;i++){

        if(str[i]>='A' && str[i]<='Z')
            upper++;
        else if(str[i]>='a' && str[i]<='z')
            lower++;
    }
    printf("Tat ca so ky tu in hoa la: %d",upper);
    printf("\nTat ca so ky tu in thuong la: %d",lower);
    getch();
}
