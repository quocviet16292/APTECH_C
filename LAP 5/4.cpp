#include <stdio.h>
int main(){
	int n,i,x = 0;	
	printf("Nhap vao 1 so nguyen: \n");
	scanf("%d",&n);
	if(n<=0){
		printf("Day khong phai so nguyen to");
	}
	else{
		for(i=1; i<=n; i++){
			if(n % i == 0){
				x++;
			}
		}
		if(x != 2){	
			printf("Day khong phai so nguyen to");
		}
		else{
			printf("%d la so nguyen to",n);
		}
	}
}
