#include<stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b&&a>c) {
		printf("Max = %d",a);
	} else if (b>a&&b>c) {
		printf("Max = %d",b);
	} else if (c>a&&c>b) {
		printf("Max = %d",c);
	} return 0;
}
