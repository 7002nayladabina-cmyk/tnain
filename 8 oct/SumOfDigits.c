#include <stdio.h>
int main() {
	int x=0;
	scanf("%d", &x);
	printf("%d\n", x/100+(x/10)%10+x%10);
	return 0;
}
