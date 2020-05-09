#include <stdio.h>

int main(){
	int a;
	printf("Nhap vao so thu nhat:\n");
	scanf("%d",&a);
	int b;
	printf("Nhap vao so thu hai:\n");
	scanf("%d",&b);
	int c;
	printf("Nhap vao so thu ba:\n");
	scanf("%d",&c);
	if(a>=b&&a>=c){
		printf("Max la %d,a");
	}
	else if(b>=a&&b>=c){
		printf("Max la %d",b);
	}
	else if(c>=a&&c>=b){
		printf("Max la %d",c);
	}
}

