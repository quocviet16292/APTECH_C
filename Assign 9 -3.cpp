#include <stdio.h>
#include <string.h>

void Sort(char s[]){
	for(int j=1; j<strlen(s);j++){
	int i = j - 1;
	int tmp = s[j];
	while(i>=0 && tmp < s[i]){
		s[i+1] = s[i];
		i--;
	}
	s[i+1] = tmp;
	}
}
int main(){
	char s[100];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	Sort(s);
	printf("%s",s);
}
