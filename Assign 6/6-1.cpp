#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong mang:");
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n ; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&a[i]);
	}
	int x = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%2 != 0){
			x = a[i];
		}
	}
	if(x !=0){
		printf("So le cuoi cung la: %d",x);
	}
	else{
		printf("Khong co so le");
	}
}
