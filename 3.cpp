#include <stdio.h>
int main(){
	int n = 1,i,x = 0;
	for(i=0;n<=100;i++){
		if(i%2 != 0){
			x += i;
			n++;
		}
	}
	printf("Tong 100 so le dau tien la %d",x);
}
