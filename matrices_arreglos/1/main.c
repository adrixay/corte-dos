#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int example[2][4][3]= {
  	{
      {13, 14, 15}, {26, 27, 28}, {12, 14, 44}, {12, 21, 34}     
 } ,
  {
  {23, 32, 33}, {23, 45, 46}, {53, 53, 64}, {87, 42, 53}    
      }
  };
  for (int i= 0; i<2; i++) {
  	printf("block %d:\n", i + 1);
  	for (int j=0; j<4; j++) {
  		for(int k = 0; k<3; k++) {
  			printf("%d ", example[i][j][k]);
		  }
		  printf("\n");
	  }
	  printf("\n");
  }
  
  
  return 0;    
}
