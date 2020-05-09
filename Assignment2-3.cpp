#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	printf("Nhap a: ");
	scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);
    printf("Nhap c: ");
    scanf("%f",&c);
	float z;
	z = b*b - 4*a*c;
	if(a==0&&b==0){
		printf("Phuong trinh vo nghiem");
	}
	else if(a==0&&b!=0){
		float x;
		x = -c/b;
		printf("Phuong trinh co nghiem la %f",x);
	}
	else if(a!=0&&z>0){
		float x1,x2;
		x1=(-b-sqrt(z))/(2*a);
		x2=(-b+sqrt(z))/(2*a);
		printf("Phuong trinh co 2 nghiem la %f va %f",x1,x2);
	}
	else if(a!=0&&z==0){
		float x;
		x = -b/(2*a);
		printf("Phuong trinh co nghiem kep la %f",x);
	}
	else if(a!=0&&z<0){
		printf("Phuong trinh vo nghiem");
	}
}
