void main()
{
	int yr=1900;
	if(yr%4==0 && yr%100!=0 || yr%400==0)
	{
		printf("It is a leap year");
		
	}
	else { 
		printf("It is not a leap year");
	}
}