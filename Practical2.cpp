#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	int count1, count2, count3, count4, count5;
	count1 = count2 = count3 = count4 = count5 = 0;
	printf("Enter string: ");
	scanf("%s",s);
	for(int i=0; i<strlen(s); i++){
		if(s[i] == 'a') count1++;
		if(s[i] == 'e') count2++;
		if(s[i] == 'i') count3++;
		if(s[i] == 'o') count4++;
		if(s[i] == 'u') count5++;
	}
	printf("Number of character:\n a: %d, e: %d, i: %d, o: %d, u: %d, rest: %d",count1,count2,count3,count4,count5,strlen(s)-count1-count2-count3-count4-count5);
	printf("Percentages of total:\n, a: a: %.0f%%, e: %.0f%%, i: %.0f%%, o: %.0f%%, u: %.0f%%, rest: %.0f%%",(float)count1*100/strlen(s),(float)count2*100/strlen(s),(float)count3*100/strlen(s),(float)count4*100/strlen(s),(float)count5*100/strlen(s),(float)(strlen(s)-count1-count2-count3-count4-count5)*100/strlen(s));
	return 0;
}
