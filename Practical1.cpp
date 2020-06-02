#include <stdio.h>
#include <string.h>

void concat(char s1[], char s2[]){
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	int i,j=0;
	for(i=n1; i< n1+n2; i++,j++){
		s1[i] = s2[j];
	}
}

int main(){
	char s1[50], s2[50];
	printf("Enter the first string: ");
	scanf("%s",s1);
	printf("Enter the second string: ");
	scanf("%s",s2);
	concat(s1,s2);
	printf("The concatenated string: %s",s1);
	return 0;
}
