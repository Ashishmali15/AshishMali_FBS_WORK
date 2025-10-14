void num();
void main(){
	num();
}

void num(){
		int num1,num2, result;
	char op;
	printf("Enter the value of num1 and num2=  ");
	scanf("%d %d",&num1,&num2);
	printf(" Enter Operator =  ");
	scanf(" %c",&op);
	
	if(op=='+')
		{
		result=num1+num2;
		printf("the result is :%d",result);	
		}
    else if(op=='-')
		{
    	result=num1-num2;
		printf("the result is :%d",result);	
		}
    else if(op=='*')
		{
    	result=num1*num2;
		printf("the result is :%d",result);	
		}
	else if(op=='/')
		{
			if(num2!=0)
			{
    			result=num1/num2;
				printf("the result is :%d",result);
			}
			else
			{
				printf("division can't be done");
			}
		}
	else if(op=='%')
		{
			if(num2!=0)
			{
    			result=num1%num2;
				printf("the result is :%d",result);	
			}
			else
			{
				printf("modulo can't be done");
			}
		}
	else {
		printf("operator is Invalid");
	}

}