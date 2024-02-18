#include <stdio.h>

/*
	OS= Win10, IDE= Jeany, result= 108
*/

int main() {
    
	int a = 9, b = 3;
	
	//printf("%d\n", (a*=b) + (b*=a));
	
	printf("a = %d\n",(a*=b));
	printf("b = %d\n",(b*=a));
	printf("sum = %d\n",a + b );
	
    return 0;
}

