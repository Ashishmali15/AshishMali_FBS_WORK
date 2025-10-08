void main(){
	int no=15;
	if(no%3==0 && no%5==0)
			{
				printf("%d is divisible by 3 and 5",no);
					
			}
			else if(no%3==0)
			{
				printf("%d is divisible by 3 but not by 5",no);
			}
			else if(no%5==0)
			{
				printf("%d is divisible by 5 but not by 3",no);
			}
	else
	{
		printf("%d is neither divisible by 3 nor 5",no);
	}		
}