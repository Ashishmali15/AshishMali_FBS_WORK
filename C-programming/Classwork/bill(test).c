//WAP to calculate electricity bill ( 1-50= 30rs/unit, 51-150=40rs/unit , 151 and above=50rs/unit

void main(){
	int unit=120,total_bill;
	 if(unit<=50 ){
	 	printf("%drs/unit",30);
	 	
	 }
	 else if(unit<=150){
	 	printf("%drs/unit",40);
	 	
	 }
	 
	 else if(unit>=151){
	 	printf("%drs/unit",50);
	 	
	 }
	 total_bill=unit*40;
	 printf("\ntotal bill is:%d",total_bill);
	 
}
