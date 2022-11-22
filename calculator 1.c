#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
     
     char operator;
     double first, second;
      
      printf("Enter the Operator (+, -, *, / ) ; ")
      scanf("d/n%",&operator);
      
      printf("Enter the two numbers one by one : ");
      scanf("lf lf" ,&first, &second);
      
      
      switch (operator)
      {
      	
      	case '+':
      		printf("%.2lf + %.2lf = %.2lf", first,second,(first+second));
      		break;
      		
      		
      		case '-':
      		printf("%.2lf - %.2lf" = %.2lf, first,second,(first-second));
      		break;
      		
      		case '*':
      		printf("%.2lf * %.2lf" = %.2lf, first,second,(first*second));
      		break;
      		
      		case '/':
      		if(second !=0.0 )
      		printf("%.2lf / %.2lf = %.2lf", first,second,(first/second));
      		else
      		printf("Divide by Zero situation");
      		break;
      		
      		
      default:
	     printf("%d/n is an invalid Operator",operator")		
      		
      		
	  }
	  
	 return 0; 
	  


}
