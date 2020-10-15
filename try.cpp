#include <stdio.h>
int main(){
	//main function integers
	int a,b,c,volume;
	printf("Enter Lenght\n");
	scanf("%d",&a);/*user imput*/
	printf("Enter Width \n");
	scanf("%d",&b);
	printf("Enter the Height \n\n");
	scanf("%d",&c);
	
	// comparison statement to solve the negative integer input
	
		if(a<0){
		a=a*-1;
		}
		if(b<0){
			b=b*-1;
		}
		if(c<-1){
			c=-1*c;
		}
	
	//summation of the two numbers
	volume=a*b*c;
	printf("The volume = %d cubic centimetre \n",volume);
	return 0;
}
