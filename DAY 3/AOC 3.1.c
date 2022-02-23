#include <stdio.h>
#include <math.h>

int main(){
	int i=0,j;
	long int value;
	int ones=0,zeros=0;
	int gamma[12],epsilon[12];
	int gam=0,ep=0;
	char matrix[1000][13]={0};
	
	FILE *dosya=fopen("file.txt","r");

	while(!feof(dosya)){
		fscanf(dosya,"%s",&matrix[i]);
		i++;
	}
	fclose(dosya);
	for(i=0;i<12;i++){
		for(j=0;j<1000;j++){
			if(matrix[j][i] == '0'){
				zeros++;
			}else{
				ones++;
			}
			if(ones>zeros){
				gamma[i]=1;
				epsilon[i]=0;
			}else{
				gamma[i]=0;
				epsilon[i]=1;	
			}
		}
		ones=0;
		zeros=0;
	}
	for(i=0;i<12;i++){
		gam += gamma[11-i]*pow(2,i);
		ep += epsilon[11-i]*pow(2,i);
	}
	
	printf("result: %d",gam*ep);
	return 0;
}

