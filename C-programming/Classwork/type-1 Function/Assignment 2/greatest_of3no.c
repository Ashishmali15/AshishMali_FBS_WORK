void num1();
void main()
{
	num1();
}
void num1()
{


       int a,b,c;
    printf("Enter the value of a ,b and c=  ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater than %d and %d",a,b,c);
		
	}
	else if(b>a && b>c)
	{
		printf("%d is greater than %d and %d",b,a,c);
	}
	else
	{
		printf("%d is greater than %d and %d",c,a,b);
	}
}