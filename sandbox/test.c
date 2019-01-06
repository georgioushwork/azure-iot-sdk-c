#include<stdio.h>
#include<stdlib.h>

int main(void){

	const char* test = getenv("AZUREIOTHUBCS");

	printf("%s", test);
	
	return 0;
}
