#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	int f1 = 0, f2 = 1, fn= 1;
	for(fn; fn < n; fn=f1+f2){
		f1 = f2;
		f2 = fn;
	}
	printf("So thuoc day fibonacci nho hon va gan %d nhat la %d",n,f2);
}
	
