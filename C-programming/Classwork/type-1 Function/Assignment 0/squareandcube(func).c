void sqr1();
void cube1();
void main(){

sqr1();
cube1();

}
void sqr1(){
	int sqr,a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	sqr=a*a;
	printf("Square=%d ",sqr);
	
}

void cube1(){
	
	int a,cube;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	cube=a*a*a;
	printf(" cube=%d",cube);
}