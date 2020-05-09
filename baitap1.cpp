#include <stdio.h>

int main(){
	int a;
	printf("Nhap vao 1 so bat ki\n");
	scanf("%d",&a);
	if(a>8){
		printf("Day khong phai ngay trong tuan");
	}
	else if(a==8){
		printf("Day la chu nhat");
	}
	else if(a>=2){
		printf("Day la thu %d",a);
	}
	else{
		printf("Day khong phai ngay trong tuan");
	}
}
