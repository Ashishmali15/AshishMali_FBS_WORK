void time();
void main(){
	time();
}
void time(){

int min,hrs,left_min;
printf("Enter the minutes: ");
scanf("%d",&min);
	hrs=min/60;
	left_min=min%60;
	printf("Given minutes into hours is:%d and remaining minutes are %d",hrs,left_min);
}

	
	