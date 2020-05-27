#include <stdio.h>
#include <string.h>

bool KiemTra(char str[][20],char str1[]){
	int count = 0;
	for(int i=0; i<10; i++){
		if(strcmp(str[i],str1)==0){
			count++;
			break;
		}
	}
	if(count == 0) {
		return true;
	}else{
	 return false;
	}
}

int main(){
	char str[10][20], str1[20];
	for(int i=0; i<10; i++){
		printf("Nhap chuoi thu %d: ", i);
		scanf("%s",&str[i][20]);
		//gets(str[i]);
	} 
	printf("Nhap chuoi can tim: ");
	scanf("%s",str1);
	//gets(str1);
	int count = 0;
	if(KiemTra(str,str1)) {
		printf("Chuoi khong ton tai");	
	}else{
		printf("Chuoi ton tai");
	}
	return 0;
}
