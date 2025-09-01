#include<stdio.h>
int main(){
	int width, length, area;
	
	printf("Enter width:");
	scanf("%d", &width); 
	
	printf("Enter length:");
	scanf("%d", &length); 
	
	area=width*length;
	
	printf("%d\n", area);
	
	return 0;
}
