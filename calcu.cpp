#include <stdio.h>
#include <math.h>

float fact(int num);

int main() {
    char ch;
    do {
        char op;
        float num[100],num1, num2, result = 0;
		int n;
        printf("\nEnter an operator (+, -, *, /, ^, s for sin, c for cos, t for tan, l for log, f for factorial, r for sqrt): ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
            	printf("enter how many no. do you want to enter: ");
            	scanf("%d",&n);
            	if(n<2)
            	printf("Please enter at least 2 no.");
            	else
            	{
            		for(int i=0; i<n; i++)
            		{
                		printf("Enter %d number: ", i+1);
                		scanf("%f", &num[i]);
                		result += num[i];
            		}            	
                	printf("Result: %.2f\n", result);
            	}
                break;

            case '-':
                printf("How many no. do you want to enter: ");
            	scanf("%d",&n);
            	if(n<2)
            	printf("Please enter at least 2 no.");
            	else
            	{
            		
            		
            		for(int i=0; i<n; i++)
            		{
                		printf("Enter %d number: ", i+1);
                		scanf("%f", &num[i]);
                	
            		}   
					result=num[0];
					for(int j=1;j<=n;j++)
					{
						result = result- num[j];
						
								 }         	
                	printf("Result: %.2f\n", result);
            	}
				break;

            case '*':
               printf("enter how many no. do you want to enter: ");
            	scanf("%d",&n);
            	
            	if(n<2)
            	printf("Please enter at least 2 no.");
            	else
            	{
            		for(int i=0; i<n; i++)
            		{
                		printf("Enter %d number: ", i+1);
                		scanf("%f", &num[i]);
                	}
					result= num[0];
					for(int j=1;j<n;j++)
					{
						result*=num[j];
									}            	
                	printf("Result: %.2f\n", result);
                	
            	}
                break;

            case '/':
            	
            	 printf("Enter any two number: ");
            	scanf("%f%f",&num1, &num2);
            	if(num2!=0){
            	result= num1/num2;
            	printf("\n%.2f/%.2f=%.2f\n",num1,num2,result);
            	}
            	else
            		printf("Error! Division by zero is not allowed.\n");
//            	if(n<2)
//            	printf("Please enter at least 2 no.");
//            	else
//            	{
//            		for(int i=0; i<n; i++)
//            		{
//            			
//                		printf("Enter %d number: ", i+1);
//                		scanf("%f", &num[i]);
//                	}
//					result= num[0];
//					for(int j=1;j<n;j++)
//					{
//						if(num[j] !=0)
//						{
//							result=result/num[j];
//						}
//						else
//						printf("Error! Division by zero is not allowed.\n");
//					}            	
//                	printf("Result: %.2f\n", result);
                	
           // 	}
                break;
               

            case '^':
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 's': 
                printf("Enter angle in degrees for sin: ");
                scanf("%f", &num1);
                num1= num1*(3.14/180);
                result = sin(num1);
                printf("sin(%.2f degrees) = %.2f\n", num1, result);
                break;

            case 'c':
                printf("Enter angle in degrees for cos: ");
                scanf("%f", &num1);
                num1= num1*(3.14/180);
                result = cos(num1);
                printf("cos(%.2f degrees) = %.2f\n", num1, result);
                break;

            case 't': 
                printf("Enter angle in degrees for tan: ");
                scanf("%f", &num1);
                num1=num1*(3.14/180);
                result = tan(num1);
                printf("tan(%.2f degrees) = %.2f\n", num1, result);
                break;

            case 'l': 
                printf("Enter a number for log: ");
                scanf("%f", &num1);
                if (num1 > 0) {
                    result = log(num1);
                    printf("log(%.2f) = %.2f\n", num1, result);
                } else {
                    printf("Error! Logarithm is not defined for zero or negative numbers.\n");
                }
                break;

            case 'r':
                printf("Enter a number for sqrt: ");
                scanf("%f", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("sqrt(%.2f) = %.2f\n", num1, result);
                } else {
                    printf("Error! Square root of negative numbers is not allowed.\n");
                }
                break;

            case 'f': 
                printf("Enter an integer for factorial: ");
                scanf("%f", &num1);
                if (num1 >= 0 && (int)num1 == num1) {
                    result = fact((int)num1);
                    printf("%d! = %.0f\n", (int)num1, result);
                } else {
                    printf("Error! Factorial is only defined for non-negative integers.\n");
                }
                break;

            default:
                printf("Invalid operator.\n");
                break;
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}
float fact(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fact(num - 1);
}
