void tri();
void main(){
	tri();
}

void tri(){
		int s1,s2,s3;
		printf("Enter the value for side1, side2,side3 = ");
		scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3)
		{
			printf("The triangle is equilateral ");
			
		}
		else if(s1==s2|| s2==s3 ||s1==s3)
		{
			printf("the triangle is isosceles");
			
		}
	else
	{
	printf("The triangle is scalene");	
	}
}