#include<stdio.h>

char portrait(int w[], int h[]){
	
	if(h[1]+h[2]<=h[0] && w[1]<=w[0] && w[2] <= w[0]){
			
	}else if(h[1]+w[2]<= h[0] && w[1]<=w[0] & h[2]<= w[0]){
		
	}else if(w[1]+h[2]<= w[0] && h[1] <= h[0] && w[2] <= h[0]){
	
	}else if(w[1]+w[2]<= h[0] && h[1] <= w[0] && h[2]<= w[0]){
	
	}else if(h[1]+w[2]<= w[0]  && w[1]<= h[0] && h[2]<= h[0]){
	
	}else if(w[1]+h[2]<= h[0] && h[1]<= w[0] && w[2]<= w[0]){
		
	}else if(w[1]+w[2]<= w[0] && h[1]<=h[0] && h[2]<=h[0]){
		
	}else if(h[1]+h[2]<= w[0] && w[1]<= h[0] && w[2]<= h[0]){
	
	}else{
		return 'N';
	}
	return 'S';	
}

void main(void){
	int height[3];
	int width[3];
	for(int i=0; i<3; i++){
		scanf("%d%d", &width[i], &height[i]);
	}
	printf("%c", portrait(width, height));
}