#include<stdio.h>

typedef struct bike
{
	char cmp[10];
	char mod[15];
	int cc;
	
}bike;
bike storeinfo();
display(struct bike);

void main(){
	bike b1,b2;
	b1=storeinfo();
	b2=storeinfo();
	display(b1);

}
 bike storeinfo(){
 	bike k;
 	printf("Enter the bike's company: ");
 	scanf("%s",k.cmp);
 	printf("Enter the model: ");
 	scanf("%s",k.mod);
 	printf("Enter the cc : ");
 	scanf("%s",k.cc);
 }
  display( bike x){
 	bike y;
 	printf("The bike's company: ",y.cmp);
 	printf("Bike'Model: ",y.mod);
    printf("CC engine: ",y.cc);
   return y;
 }
 
 
 
 
 
 