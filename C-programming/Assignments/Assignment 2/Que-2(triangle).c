void main(){
	int side1=12,side2=12,side3=14;
	if(side1==side2 && side2==side3)
		{
			printf("The triangle is equilateral ");
			
		}
		else if(side1==side2|| side2==side3 ||side1==side3)
		{
			printf("the triangle is isosceles");
			
		}
	else
	{
	printf("The triangle is scalene");	
	}
}