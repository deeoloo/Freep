/**************************************
 * expenses.c by Dorine
 * This program asks the user to enter monthly costs for the expenses incurred from operating automobile: loan payment, insurance, gas, oil, tires and maintenace and prints the total monthly costs of the expenses and total annual expenses.
 * main () -return 0 o success.
 * ***********************************************/


#include<stdio.h>
#include<string.h>


char input[50];
float loan_payment;
float insurance;
float gas;
float oil;
float tires;
float maintenance;
float monthly_expense;
float Annual_expense;

int main ()
{
	printf("Enter loan payment: ");
	fgets(input, sizeof(input),stdin);
	sscanf(input, "%f",&loan_payment);

	/*loan payment="300"*/

	/*monthly expense=loan payment+insuarance+gas+oil+tires+maintenace*/
	/*insurance="100"*/

	printf("Enter insurance: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input, "%f",&insurance);

	/*gas="80"*/

	printf("Enter gas: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input, "%f",&gas);

	/*oil="350"*/
	printf("Enter oil: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%f",&oil);
	
	/*tires="200"*/
	printf("Enter tires: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input, "%f",&tires);

	
	/*maintenance="150"*/
	printf("Enter maintenance: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input, "%f",& maintenance);
	
	monthly_expense=loan_payment+insurance+gas+oil+tires+maintenance;
	Annual_expense= monthly_expense * 12;

	printf("monthly_expense is %.2f\n",monthly_expense);
	printf("Annual_expense is %.2f\n",Annual_expense);

	return (0);




}
