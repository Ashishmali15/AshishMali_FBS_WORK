	void percent1();
	void main(){
		percent1();
	}
	void percent1(){
		
	int maths,sci,history,geo,eng,total_marks;
	float percent,max_marks=500.0;
	printf("Enter the marks obtained(maths,Sci,history,Geo,Eng,resp.) = ");
	scanf("%d%d%d%d%d",&maths,&sci,&history,&geo,&eng);
	 total_marks=maths+sci+history+geo+eng;
	 
	 percent=(total_marks/max_marks) *100;
	 printf("total marks are =%d and percentage got is=%f",total_marks,percent);
}