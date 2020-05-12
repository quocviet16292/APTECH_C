#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap vao so thu nhat: \n");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: \n");
	scanf("%d",&b);
	float x=(float)a/b;//doi kieu du lieu tu int sang float manual casting
	float y=(float))a*b;
	if(a>=b){
		if(b!=0){
			printf("Ket qua cua phep chia %f cho %f la %f",a,b,x);
		}
		else{
			printf("Khong co ket qua");
		}
	}
	else{
		printf("Ket qua cua phep nhan %f voi %f la %f",a,b,y);
	}
}
