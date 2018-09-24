#include <stdio.h>

int main () {
	int Num1, Num2, Num3 ;
	
	printf("Enter your 3 number (eg.1 2 3 or 5 7 3) = ") ;
	scanf("%d %d %d",&Num1, &Num2, &Num3) ;
	
	if(Num1 < Num2 && Num1 > Num3) {
		printf("Max = %d | Min = %d",Num2, Num3) ;
	}
	else if(Num1 == Num2 && Num2 == Num3) {
		printf("Max = %d | Min = %d",Num3,Num1) ;
	}
	else if(Num1 < Num2 && Num2 < Num3) {
		printf("Max = %d | Min = %d",Num3,Num1) ;
	}
	else if(Num1 > Num2 && Num2 < Num3) {
		printf("Max = %d | Min = %d",Num1,Num2) ;
	}
	else if(Num3 > Num2 && Num2 < Num1) {
		printf("Max = %d | Min = %d",Num3,Num1) ;
	}
	else if(Num2 > Num3 && Num3 > Num1) {
		printf("Max = %d | Min = %d",Num2,Num1) ;
	}
	else if(Num1 > Num2 && Num2 > Num3) {
		printf("Max = %d | Min = %d",Num1,Num3) ;
	}
}	
