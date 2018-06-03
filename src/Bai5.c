#include<stdio.h>
int main()
{
    int d,m,y;
    printf("nhap ngay thang nam:");
    scanf("%d%d%d",&d,&m,&y);
    if(check_valid(d,m,y)==0)
    printf("Ngay %d Thang %d Nam %d KHONG HOP LE\n",d,m,y);
    else
    {
        printf("Ngay %d Thang %d Nam %d HOP LE",d,m,y);
        if(leap_year(y)==1){
            printf("\nNam %d LA nam nhuan",y);
            }
        else{
            printf("\nNam %d KHONG la nam nhuan",y);
            }
    }
    getch();
    return 0;

}
// Kiem tra nam nhuan
int leap_year(int n) {
if (n%4!=0)
   return 0;
else
   if (n%400==0)
      return 1;
   else
      if (n%100==0)
         return 0;
       else
           return 1;
}
// Kiem tra ngay thang nam co hop le khong
int check_valid(int d,int m,int y)
{
    if(d==29&&m==2)
    {
        if(leap_year(y)==1)
            return 1;
        else
            return 0;
    }
    if(m==2)
    {
        if(1<=d&&d<=28)
            return 1;
        else
            return 0;
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(1<=d&&d<=31)
            return 1;
        else
            return 0;
    }
    if(m==4||m==6||m==9||m==11)
    {
        if(1<=d&&d<=30)
            return 1;
        else
            return 0;
    }
    return 0;

}
