#include <stdio.h>

int main()
{
    char str[100];
    int chuthuong,chuhoa;
    int i;

    chuthuong=chuhoa=0;

    printf("Nhap vao chuoi: ");
    gets(str);

    for(i=0;str[i]!=NULL;i++){

        if(str[i]>='A' && str[i]<='Z')
            chuhoa++;
        else if(str[i]>='a' && str[i]<='z')
            chuthuong++;
    }

    printf("Tat ca so ky tu in hoa la: %d",chuhoa);
    printf("\nTat ca so ky tu in thuong la: %d",chuthuong);
    getch();
    return 0;

}

