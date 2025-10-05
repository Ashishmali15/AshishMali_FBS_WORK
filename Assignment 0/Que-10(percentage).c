//program to input marks of five subjects and find total marks and calculate percentage
void main(){
	int maths=70,sci=90,history=75,geo=80,eng=80,total_marks;
	float percent,max_marks=500.0;
	 total_marks=maths+sci+history+geo+eng;
	 
	 percent=(total_marks/max_marks) *100;
	 printf("total marks are =%d and percentage got is=%f",total_marks,percent);
	 
	
}