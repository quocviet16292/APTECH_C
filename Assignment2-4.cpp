#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	printf("Nhap vao chieu dai canh thu 1: ");
	scanf("%f",&a);
	printf("Nhap vao chieu dai canh thu 2: ");
	scanf("%f",&b);
	printf("Nhap vao chieu dai canh thu 3: ");
	scanf("%f",&c);
	if((a+b)>c&&(a+c)>b&&(b+c)>a){
		float p,s,q;
		p=a+b+c;
		q=p/2;
		s=sqrt(q*(q-a)*(q-b)*(q-c));
		printf("Day la 3 canh cua mot tam giac.\nDien tich va chu vi tam giac lan luot la %f va %f",s,p);
	}
	else{
		printf("Day khong phai ba canh cua tam giac");
	}
}
