#include <stdio.h>
int main() {
	int n = 6;
	scanf("%d", &n);

	long long product = 1;
	int hasEven = 0;

	for(int i=1; i<=n; i++){
		if(i % 2 == 0){
			product = product*i;
			hasEven = 1;
		}
	}

	if(hasEven)
		printf("%lld", product);
	else
		printf("0");

	return 0;
}
