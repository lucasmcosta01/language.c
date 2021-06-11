#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	int i, column, line;
	int end_string = 50;
	int start_string = 50;
	char* string = (char*)malloc(500*sizeof(char));
	scanf(" %[^\n]s", string);
	char string_aux[100][500];
	for(i = 0, column = 0, line=50;i<strlen(string);i++){
		if((string[i]>= 1 && string[i]<= 90)||(string[i]>= 94 && string[i]<= 125)){
			string_aux[line][column] = string[i];
			column++;
			if(end_string < line){
				end_string=line;
			}
			if(start_string > line){
				start_string=line;
			}	
		}else if(string[i] == 91){
			line = start_string - 1;
			column=0;	
		}else if(string[i] == 93){
			line = end_string + 1 ;
			column=0;	
		}
	}
	for(i = start_string;i <= end_string; i++){
		for(column= 0;column <= strlen(string_aux[i]); column++){
			if(string_aux[i][column] != 0){
				printf("%c", string_aux[i][column]);
			}
		}
	}
	printf("\n");		
}