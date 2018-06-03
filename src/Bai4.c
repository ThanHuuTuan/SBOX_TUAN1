#include <stdio.h>

int main()
{
    char *p, s[100];
    int i, j, rows;
    printf("TAM GIAC *- ENTER DE THUC HIEN");
    while (fgets(s, sizeof(s), stdin)) {
        rows = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Nhap vao chieu cao cua tam giac: ");

        }
        else
            break;

    }

    //printf("Nhap vao so cot : ");
    //scanf("%d", &rows);
    // IN RA TAM GIAC
    for(i=1; i<=rows; i++)
    {

        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }


        printf("\n");

    }

    getch();
    return 0;
}


