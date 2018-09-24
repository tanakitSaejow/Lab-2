# Lab-2
#include <stdio.h>


int main () {
	int Score ;
	
	printf("Enter your Score : ") ; 
	scanf("%d",&Score) ;
	
	if(Score >= 101 || Score <= -1 ) {
		printf("Score Error !!") ;
	}
	else if (Score >= 80 && Score <=100 ) {
		printf("Grade = A") ;
	}
	else if (Score >= 75 && Score <= 79 ) {
		printf("Grade = B+") ;
	}
	else if (Score >= 70 && Score <=74 ) {
		printf("Grade = B") ;
	}
	else if (Score >= 65 && Score <=69 ) {
		printf("Grade = C+") ;
	}
	else if (Score >= 60 && Score <=64 ) {
		printf("Grade = C") ;
	}
	else if (Score >= 55 && Score <=59 ) {
		printf("Grade = D+") ;
	}
	else if (Score >= 50 && Score <=54 ) {
		printf("Grade = D") ;
	}
	else if (Score >= 0 && Score <=49 ) {
		printf("Grade = F") ;
	}
	
	return 0 ;	
}
