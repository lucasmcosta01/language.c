#include<stdio.h>
void main(){
	float note1, note2, note3;
	scanf("%f%f%f", &note1, &note2, &note3);
	if((note1+note2+note3)/3 >= 7) printf("aprovado");
	if((note1+note2+note3)/3 < 3) printf("reprovado");
	if((note1+note2+note3)/3 >=3 && (note1+note2+note3)/3 < 7) printf("prova final");
	
}