#include <stdio.h>
int main(){
	//main function integers
	int a,b,c,volume,name,password;
	password=1234;
	printf("Enter your safe number:  ");
	scanf("%d",&name);
	if(name==password){
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
	}
	if(name!=password){
	printf("YOU ARE NOT THE USER !!!!!!!!!!!!!!!!!!!!!!!!!\n");
	printf("<<<<<<<<<<<<<TRY AGAIN LATER>>>>>>>>>>\n");
}
	return 0;
}
