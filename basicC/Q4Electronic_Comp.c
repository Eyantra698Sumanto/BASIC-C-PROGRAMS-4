/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 2
QUESTION 4*/
#include<stdio.h>//including header files
#define TRANSISTOR 1
#define RESISTOR 2
#define CAPACITOR 3
int main()
{int code;
float discount,order_amt,net_amt;//defining and declaring variables
printf("Enter the order amount");
scanf("%f",&order_amt);//reading order amt 
printf("Enter product code \n 1 for  TRANSISTOR \n 2 for RESISTOR \n 3 for CAPACITOR");
scanf("%d",&code);//reading code
switch(code)
{
	case TRANSISTOR:
	discount=order_amt>1000?0.1:0;
	break;
	case RESISTOR:
	discount=order_amt>100?0.05:0;
	break;	
	case CAPACITOR:
	discount=order_amt>500?0.1:0;
	break;
	default:
	printf("INVALID CHOICE");
}
net_amt=order_amt-discount;//computing net amt
printf("NET AMOUNT TO BE PAID=%f",net_amt);//printing net_amount 
return(0);
}
