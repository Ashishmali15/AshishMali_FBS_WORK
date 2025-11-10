#include<stdlib.h>
int* array(int);
int* storedata(int*,int);
void main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int* k=array(n);
	storedata(k,n);	
}
 int* array(int s)
 {
 	int arr[s];
 	int* ptr=(int*)malloc(40);
 	return ptr;
 }
 int* storedata(int* arr,int size ){
 	printf("Enter the elements in array: ");
		for(int i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		return arr;
 }
