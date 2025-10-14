void salary();
void main(){
	salary();
}


void salary(){

float  da, ta, hra, total_salary;
    int basic;
    printf("Enter the basic salary= ");
    scanf("%d",&basic);

    printf("Basic salary:%d ",basic);

    if (basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } 
	else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total_salary = basic + da + ta + hra;

    printf("\nTotal Salary: %.2f\n", total_salary);
}