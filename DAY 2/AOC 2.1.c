#include <stdio.h>
#include <string.h>

int main(){
	int horizontalPosition=0,depth=0;
	int i,value;
	char step[10];
	FILE *dosya=fopen("file.txt","r");
	
	while(!feof(dosya)){
		fscanf(dosya,"%s %d",step,&value);
	/*	printf("\n%s",step);
		printf(" %d",value);  */
			if((strcmp(step,"forward")==0)){
				horizontalPosition += value;
			}else if((strcmp(step,"down")==0)){
				depth += value;
			}else if((strcmp(step,"up")==0)){
				depth -= value;
			}
	}
	fclose(dosya);
	
	printf("horizontal position = %d, depth = %d, multiply = %d",horizontalPosition,depth,(horizontalPosition*depth));
}
