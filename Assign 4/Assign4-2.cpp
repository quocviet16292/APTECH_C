#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so tu nhien bat ki: \n");
	scanf("%d",&n);
	printf("Cac so chia het cho 3 tu 1 den %d la: \n",n);
	for(int i=1;i<=n;i++){
		if (i % 3 == 0)
			printf("%d ",i);
	}
}
