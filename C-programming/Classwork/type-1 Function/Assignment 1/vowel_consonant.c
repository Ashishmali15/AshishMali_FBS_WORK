void alpha();
void main(){
   alpha();	
}
alpha(){
	
	char ch;
	printf("Enter any Alphabet= ");
	scanf("%c",&ch);

	if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E' 
	   || ch=='i'|| ch=='I'||ch=='o'||ch=='O'||ch=='u'|| ch=='U')
	{
		printf("the character %c is a vowel.\n",ch);
	}
	else
	{
		printf("the character %c is a Consonant.\n",ch);
	}
}