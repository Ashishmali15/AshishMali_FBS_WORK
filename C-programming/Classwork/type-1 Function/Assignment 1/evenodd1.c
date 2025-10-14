int evenodd();
void main(){
	int x =evenodd();
	
}
int evenodd(){
		int no;
		printf("Enter the any number= ");
		scanf("%d",&no);
	
	if(no%2==0)
	{
	  printf("the number is even");
	}
	else
	{
	  printf("the number is odd");
	}
	return no;
	
}
