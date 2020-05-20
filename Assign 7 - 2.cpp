#include <stdio.h>
int main(){
	int a1[4][3], a2[4][3];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("Nhap vao so a1[%d][%d]=",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("Nhap vao so a2[%d][%d]=",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	int sum[4][3];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			sum[i][j] = a1[i][j] + a2[i][j];
		}
	}
	printf("Ma tran tong la: \n");
	for(int i = 0; i < 4; i++){
		printf("\n");
		for(int j = 0; j < 3; j++){
		printf("%5d",sum[i][j]);
		}
	}
}
