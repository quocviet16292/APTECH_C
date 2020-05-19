#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong cua mang:");
	scanf("%d",&n);	
	int a[n];
	for(int i = 0; i < n ; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&a[i]);
		for(int j = 0; j < i; j++){
			if(a[i] == a [j]){
				printf("Yeu cau nhap lai \n");
				i--;
			}
 		}
 		
	}
	printf("Cac phan tu cua mang la: ");
	for(int i = 0; i < n; i++){
		printf("%d  ",a[i]);
	}
		
}
	
