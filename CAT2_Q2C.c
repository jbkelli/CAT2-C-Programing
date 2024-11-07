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