void avg();
void main(){
	avg();
}
void avg(){


int a,b,c,d,e;

	float average;
	printf("Enter the value of a,b,c,d,e = ");
	scanf("%d",&a,&b,&c,&d,&e);
	
	average=(a+b+c+d+e)/5;
	printf("Average of the numbers is :%f",average);
}