void main()
{
	int no=153;
	int rem,sum=0,temp=no;
	while(no>2)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
		
		
	}
	if(sum==temp)
	{
		printf("ARMSTRONG");
	}
}