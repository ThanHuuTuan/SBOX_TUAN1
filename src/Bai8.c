#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    int length;
    printf("\nNhap vao do dai mong muon n= ");
    scanf("%d",&n);
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
