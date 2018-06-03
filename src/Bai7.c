#include<stdio.h>
//UOC CHUNG LON NHAT
int GCF(int a,int b){

		if(a==0 && b==0){
		printf("\nKhong ton tai UCLN.");
	} else{
		if(a==0 || b==0) {
		return a + b;
		}
	}
	while(a!=b){
		if(a>b) a=a-b;
		if(a<b) b =b-a;
	}
	return a;
}
// BOI CHUNG NHO NHAT
int LCM(int a, int b){
		if(a==0 && b==0){
		printf("Khong ton tai BCNN.");
	} else{
		if(a==0 || b==0) {
		return 0;
		}
	}
	return (a*b)/GCF(a,b);
}
main() {
	int n1, n2;
	printf("Nhap 2 so: ");

	int check1 = scanf("%d",&n1);
	int check2 = scanf("%d",&n2);
	if(check1==0 || check2==0){
		printf("DU LIEU NHAP KHONG HOP LE");
	} else{
		printf("UCLN: %d\nBCNN: %d",GCF(n1,n2), LCM(n1,n2));
	}
}
