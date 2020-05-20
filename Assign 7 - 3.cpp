#include <stdio.h>
int main(){
	int a[4][3];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("Nhap vao so a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran vua nhap la: \n");
   	for (int i = 0; i < 4; i++) {
      	printf("\n");
     	for (int j = 0; j < 3; j++) {
        printf("%5d", a[i][j]);
        }
    }
	int b[3][4];
   	for (int i = 0; i < 4; i++) {
     	for (int j = 0; j < 3; j++) {

    	b[j][i] = a[i][j];
        }
    }
    printf("\n");
	printf("Ma tran chuyen vi cua ma tran a la: ");
	for(int j = 0; j < 3; j++){
		printf("\n");
		for(int i = 0; i < 4; i++){
		printf("%5d",b[j][i]);
		}
	}
}
