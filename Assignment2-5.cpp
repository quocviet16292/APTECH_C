#include <stdio.h>

int main(){
	float a,b,x,y;
	printf("Nhap vao so thu nhat: \n");
	scanf("%f",&a);
	printf("Nhap vao so thu hai: \n");
	scanf("%f",&b);
	x=a/b;
	y=a*b;
	if(a>=b){
		printf("Ket qua cua phep chia %f cho %f la %f",a,b,x);
	}
	else{
		printf("Ket qua cua phep nhan %f voi %f la %f",a,b,y);
	}
}
