void main()
{
	int purchased=1200,student=1;
	if(student==1)
	{
		printf("yes,he is a student");
	
			if(purchased>500)
			{
			   printf("\nCONGRATS!! YOU HAVE GOT 20%% DISCOUNT OFFER");
			}
			else
			{
				printf("CONGRATS!! YOU HAVE GOT 10%% DISCOUNT OFFER");
			}
	}
	else
	{
		printf("no, he is not a student");
		if(purchased>600)
		{
			 printf("CONGRATS!! YOU HAVE GOT 15%% DISCOUNT OFFER");
		}
		else
		{
			 printf("SORRY!! THERE IS NO DISCOUNT");
		}
	}
}