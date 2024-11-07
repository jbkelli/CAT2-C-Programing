#include<stdio.h>
#include<math.h>

int main(){
	double weeklyhours;
	double hourlywage;
	double grosspay;
	double tax;
	double netpay;
	
	printf("Enter hours worked in a week: ");
	scanf("%lf", &weeklyhours);
	
	printf("Enter hourly wage: ");
	scanf("%lf", &hourlywage);
	
	if(weeklyhours <= 40){
		grosspay = weeklyhours*hourlywage;
		
	}
	else if(weeklyhours > 40){
		grosspay =( 40*hourlywage) + 1.5*(hourlywage)*(weeklyhours - 40);
	}
	
	if(grosspay <= 600){
		tax = 0.15*grosspay;
	}
	else if(grosspay > 600){
		tax = 0.15*600 + 0.20*(grosspay - 600);
	}
	
	netpay = grosspay - tax;
	
	printf("Weekly hours: %.2lf\n", weeklyhours);
	printf("Wage: %.2lf\n", hourlywage);
	printf("Gross pay: %.2lf\n", grosspay);
	printf("Taxes: %.2lf\n", tax);
	printf("Net pay: %.2lf\n", netpay);
	
	return 0;
}