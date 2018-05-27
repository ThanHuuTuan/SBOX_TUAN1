#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, length;
    printf("Nhap vao chuoi: ");
    gets(str);
    length = strlen(str);
    printf("Chuoi Dao: ");
    for(i=length-1; i>=0; i--)
        printf("%c",str[i]);
        getch();
    return 0;
}
