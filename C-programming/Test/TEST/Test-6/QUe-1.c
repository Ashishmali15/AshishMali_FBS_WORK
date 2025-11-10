void main(){
	int arr[4];
	int brr[4];
	printf("Enter the elements in array:");
	for(int i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements in array: ");
	for(int i=0;i<4;i++){
		scanf("%d",&brr[i]);
	}
	printf("common elements: ");
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++){
		if(arr[i]==brr[j]){
			printf("%d ",arr[i]);
			break;
		}
	}

}