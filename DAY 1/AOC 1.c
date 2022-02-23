#include <stdio.h>

int main(){
	
	int sum[2000];
	int values[2000];
	int i=0,j,increased=0,increased2=0,value;
	FILE *dosya=fopen("file.txt","r");
	
	while (!feof(dosya)){
		fscanf(dosya,"%d",&value);
		values[i]=value;
		i++;
	}	
	fclose(dosya);	
	for(j=1;j<i;j++){
		if(values[j]>values[j-1]){
			increased++;
		}
	}
	for(j=0;j<i-2;j++){	
		sum[j]=values[j]+values[j+1]+values[j+2];
	}
	
	for(j=1;j<i-2;j++){
		if(sum[j]>sum[j-1]){
			increased2++;
		}
	}
	
	printf("%d measurements are larger than the previous measurement\n",increased);
	printf("%d sums are larger than the previous sum",increased2);
	
	
	return 0;
}
