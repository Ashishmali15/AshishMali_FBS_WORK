void area1();
void main(){
	area1();
	
}
void area1(){
	float base, height=11,area;
	printf("Enter the base of triangle= ");
	scanf("%f",&base);
	printf("Enter the height of triangle= ");
	scanf("%f",&height);
	area=(0.5)*base*height;
	printf("Area of triangle is:%f",area);
}