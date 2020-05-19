#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong cua mang:");
	scanf("%d",&n);	
	int a[n];
	for(int i = 0; i < n ; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&a[i]);
	}
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	int min = max;
	for(int i = 0; i < n; i++){
		if(a[i] > 0 && a[i] < min){
			min = a[i];
		}
	}
	printf("So duong nho nhat trong day la %d",min);
}
