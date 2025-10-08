void main(){
	int num1=12,num2=3, result;
	char op='*';
	
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