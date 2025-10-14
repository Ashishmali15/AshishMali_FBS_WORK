void vote1();
void main(){
	vote1();
}
vote1(){
	
	int age;
	printf("Enter the age of person= ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("The person is eligible to vote");
	}
    else
    	printf("Person is not eligible to vote");
    	
	
}