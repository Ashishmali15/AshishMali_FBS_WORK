#include<stdio.h>
typedef struct stu{
	int rollno;
	char name[10];
	int marks;
	
	
}stu;
void main(){
	stu sarr[4];
	printf("Enter 4 students info \n");
	for(int i=0;i<4;i++){
		printf("Enter Roll no: ");
		scanf("%d",&sarr[i].rollno);
		printf("Enter Name: ");
		scanf("%s",sarr[i].name);
		printf("Enter Marks: ");
		scanf("%d",&sarr[i].marks);
		printf("Student added \n");
	}
	printf("STUDENT DETAILS");
	for(int i=0;i<4;i++){
		printf("\n Student %d info: ");
     	printf("\n Rollno:%d ",sarr[i].rollno);
     	printf("\n Name:%s ",sarr[i].name);
     	printf("\n Marks:%d ",sarr[i].marks);
     	
     	
     	
     	
	}
}