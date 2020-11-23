#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
FILE*memo;

if((memo = fopen("sample.txt", "w") ) == NULL){
	printf("File open error.\n");
	return 0;
}

fprintf(memo, "test");

fclose(memo);
}
