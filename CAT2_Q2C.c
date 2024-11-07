//2d array
/*
Author: Mwangi Alvin Maina
Date: 7/11/2024
Registration number: CT102/G/24287/24
*/
#include<stdio.h>
int main() {
	int p,q;
	int scores[2][2]={{35,70},{59,67}};
	
	for(p=0;p<2;p++){
		for(q=0;q<2;q++){
			printf("scores[%d][%d] = %d \n", p,q,scores[p][q]);
		}
	}
	
	return 0;
}
