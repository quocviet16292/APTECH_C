#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Nhap vao so luong phan tu cua mang: ");
	scanf("%d",&n);
	int *p;
	p = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",(p+i));
	}
	int sum = 0, max =0;
	for(int i=0; i<n; i++){
		if(*(p+i)>0){
			sum += *(p+i);
			max = sum;
		}else{
			sum = 0;
		}
	}
	printf("Tong cac so duong lien tiep lon nhat la %d",max);
}
