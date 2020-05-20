#include <stdio.h>
int main(){
	int a[4][4];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("Nhap vao so a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum = 0, count = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i+j == 3 || i == j){
				sum += a[i][j];
				count ++;
			}
		}
	}
	printf("Trung binh cong duong cheo la %d",sum/count);
}
