#include <stdio.h>
int main(){
	int arr[10];
	for(int i = 0; i < 10; i++){
		printf("Nhap vao so thu %d: ",i);
		scanf("%d",&arr[i]);
	}	
	int sum = 0, dem = 0;
	for(int i = 0; i < 10; i++){
		if(arr[i] % 2 != 0 && i % 2 != 0){
			sum += arr[i];
			dem++;
		}
	}
	printf("Trung binh cong la %.2f",(float)sum/dem);
}
