#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
    printf("Nhap c: ");
    scanf("%d",&c);
	int z = b*b - 4*a*c;
	if(a==0&&b==0){
		printf("Phuong trinh vo nghiem");
	}
	else if(a==0&&b!=0){
		float x =-(float)c/b;
		printf("Phuong trinh co nghiem la %f",x);
	}
	else if(a!=0&&z>0){
		float x1=(float)(-b-sqrt(z))/(2*a);
		float x2=(float)(-b+sqrt(z))/(2*a);
		printf("Phuong trinh co 2 nghiem la %f va %f",x1,x2);
	}
	else if(a!=0&&z==0){
		float x = -(float)b/(2*a);
		printf("Phuong trinh co nghiem kep la %f",x);
	}
	else if(a!=0&&z<0){
		printf("Phuong trinh vo nghiem");
	}
}
