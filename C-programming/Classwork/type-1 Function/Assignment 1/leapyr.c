void leap1();
void main(){
	leap1();
}

leap1()
{
	int yr;
	printf("Enter the yr= ");
	scanf("%d",&yr);
	if(yr%4==0 && yr%100!=0 || yr%400==0)
	{
		printf("It is a leap year");
		
	}
	else { 
		printf("It is not a leap year");
	}
}