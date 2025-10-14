 void swapnum();
 void main(){
 	swapnum();
 }
 
 void swapnum(){

	int a=10,b=20,temp;
	temp=a;
    a=b;
    b=temp;
	printf("swapped numbers are a=%d and b=%d",a,b);
 }
 