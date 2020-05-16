#include <stdio.h>
int main(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		printf("Nhap vao so thu %d: ",i);
		scanf("%d",&arr[i]);
	}	
	int x;
	printf("Nhap vao 1 so bat ki de kiem tra:");
	scanf("%d",&x);
	int dem = 0;
	for(int i = 0; i < 10; i++){
		if(x == arr[i]){
			dem++;
		}
	}
	if(dem == 0){
		printf("%d khong nam trong day",x);
	}
	else{
		printf("%d co nam trong day",x);
	}	
}
