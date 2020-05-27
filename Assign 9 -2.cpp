#include <stdio.h>
#include <string.h>

bool Check(char str1[], char str2[]){
	int i=0, j=0, count=0;
	for(; i<strlen(str1); i++){
		if(str1[i] == str2[j]){
			j++;
			count=j;
			if(j==strlen(str2)) break;
		} 	
		else{
			j=0;
		}
	}
	if(count == strlen(str2)) return 1;
	else return 0;
}
int main(){
	char str1[100], str2[100];
	printf("Nhap chuoi thu 1: ");
	scanf("%s",str1);
	printf("Nhap chuoi thu 2: ");
	scanf("%s",str2);
	int i=0,j=0,count=0;
	
	if(Check(str1,str2)){
		printf("Co xuat hien");
	}else{
		printf("Khong xuat hien");
	}
//	printf("%d",strlen(str2));
//	printf("%d",count);
	return 0;
}

