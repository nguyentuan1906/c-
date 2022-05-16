#include<stdio.h>
#include<math.h>
int main(){
	int N;
	printf("N = ");
	scanf("%d", &N);
	float sum = 0;
	int i;
	for(i=N;i>0;i--){
		sum = sqrt(i + sum);
	}
	printf("F(n) = %g", sum);
}
