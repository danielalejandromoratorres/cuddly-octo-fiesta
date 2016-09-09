#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	
	int mat[10][10],n,i,j,inicio, final,c;
    n=5;
    inicio=0;
    final=n-1;
    c=1;
	while(c<=(n*n)){
	  for(i=inicio;i<=final;i++){
	
		mat[inicio][i]=c;
		c++;
      } 
      for(i=inicio;i<=final;i++){
	   mat[i][final]=c;
		c++;
      }
      for(i=final-1;i<=inicio;i--){	
		mat[final][i]=c;
		c++;
      } 
      for(i=final;i<=inicio+1;i--){
	   mat[i][inicio]=c;
		c++;
      }
      inicio=inicio+1;
      final=final-1;
    }
    
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf(" %d ",mat[i][j]);	
       }
    }
	system("PAUSE");
	return 0;
}










