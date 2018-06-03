#include <conio.h>
#include <stdio.h>
#include <string.h>

void main(){
    char *p, s[100];

    int i=0,j,n;
    printf("CHUAN HOA XAU - ENTER DE THUC HIEN");
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Nhap vao chieu dai mong muon cho xau: ");

        }
        else
            break;

    }
    //printf("Nhap vao chieu dai chuoi mong muon byte S[n]=");
    //scanf("%d",&n);

    char str[n];
    do{
        printf("\nNhap vao chuoi: ");
        fflush(stdin);
        gets(str);
        if(strlen(str)>n){
            printf("\nNhap lai chuoi thoa man <=n!");
        }
    }while(strlen(str)>n);

        // Xoa khoang trang o dau
while(str[i]==' ' && i<strlen(str))
        i++;
    strcpy(&str[0], &str[i]);
//Xoa khoang trang o giua
while(i<strlen(str)-1){
        if (str[i]==' ' && str[i+1]==' ')
            strcpy(&str[i], &str[i+1]);
        else
        i++;
    }
// Xoa khoang trang o cuoi
while(str[strlen(str)]==' ')
        str[strlen(str)]='\0';
// Neu dau ',' sau khoang cach thi xoa khoang cach do di
for(i=0;i<strlen(str)-1;i++){
		if(str[i]==' '&&str[i+1]==','){
			strcpy(&str[i],&str[i+1]);
		}
	}
//  neu co 2 hoac nhieu dau ',' '.' lien nhau thi xoa di de lai dau cuoi cung
	for(i=0;i<strlen(str)-1;i++){
		if(str[i]==','||str[i]=='.'||str[i]==';'||str[i]==':'){
			if(str[i+1]==','||str[i+1]=='.'||str[i]==';'||str[i]==':'){
				strcpy(&str[i],&str[i+1]);
				--i;
			}
		}
	}
//chen them khoang trang sau dau ; : , .
for(i=0;i<strlen(str)-1;i++){
		if((str[i]==','||str[i]=='.' || str[i]==':' || str[i]==';')&& str[i+1]!=' ')
            {

			for(j=strlen(str)+1;j>=i+2;j--){

				str[j]=str[j-1];
			}
			str[i+1]=' ';
		}
	}
//neu truoc dau , ; : . co khoang trang thi xoa no di
	for(i=0;i<strlen(str)-1;i++){
		if(str[i]==' '&& (str[i+1]==','||str[i+1]==':'||str[i+1]==';'||str[i+1]=='.')){
			strcpy(&str[i],&str[i+1]);
		}
	}

    printf("\nXau da chuan hoa:%s", str);
    getch();




}

