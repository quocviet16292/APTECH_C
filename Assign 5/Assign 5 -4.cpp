#include <stdio.h>
int main(){
	int a,b,uoc;
	do{
		printf("Nhap vao so thu 1: \n");
		scanf("%d",&a);
		printf("Nhap vao so thu 2: \n");
		scanf("%d",&b);
	}while(a<0||b<0);
	for(int i = 1; i <= a; i++){
		if(a%i==0&&b%i==0){
			uoc = i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la %d", a,b,uoc);
}
