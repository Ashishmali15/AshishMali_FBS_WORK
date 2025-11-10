#include<string.h>
void main(){
	char str[10];
	char srr[10];
	printf("ENTER THE STRING: ");
	scanf("%s",&str);
	strcpy(srr,str);
	
	strrev(str);
	if(strcmp(srr,str)==0)
	{
		printf("string is palindrome");
		
	}
	else
	 printf("string is not palindrome");
	
	
	
}