#include <stdio.h>
int main(){
	int n,i;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	int f1 = 1, f2 = 1,fn=2;
	if(n==1||n==2){
		printf("So hang thu %d trong day Fibonacci la: %d",n,f1);
	}
	else if(n==3){
		printf("So hang thu %d trong day Fibonacci la: %d",n,fn);
	}
	else{
		for(i=4;i<=n;i++){
			f1 = f2;
			f2 = fn;
			fn = f2 + f1;
		}
		printf("So hang thu %d trong day Fibonacci la: %d",n,fn);
	}
}
