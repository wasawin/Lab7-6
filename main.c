#include <stdio.h>
int main(void) 
{
  int i ,j,k;
 int A[6][4],B[4][5];
 int AB[6][5]= {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
 //  A[i][k] B[k][j] = Sum[i][j]
 //  A[6][4] B[4][5] = AB[6][5]
 //  A[6][4] B[4][5] = BA[5][6]
printf("******************************** \n");
 printf("The value of A\n");
 for(i=0; i<6; i++){
      for(j=0;j<4;j++){
         printf("Enter value A[%d][%d] :",i,j);
         scanf("%d", &A[i][j]);}}
  printf("******************************** \n");
  printf("The value of B\n");
  for(i=0; i<4; i++){
      for(j=0;j<5;j++){
         printf("Enter value B[%d][%d] :",i,j);
         scanf("%d", &B[i][j]);}}
printf("******************************** \n");
  //calculate
  for(i=0;i<6;i++) {
    for(j=0;j<5;j++) {
      for(k=0;k<4;k++) {
        AB[i][j] += (A[i][k] * B[k][j]);
      }}}
  // output
  printf("\tAnswer A*B\n");
   for(i=0; i<6; i++){
      for(j=0;j<5;j++){
      printf("\t%d",AB[i][j]);
      }
      printf("\n");
      }
      
      return 0;
}

    /*  
     for(i=0;i<6;i++) {
    for(j=0;j<4;j++) {
      for(k=0;k<4;k++) {
        BA[i][j] += (A[i][k] * B[k][j]);
      }
    }
  }
     for(i=0; i<6; i++){
      for(j=0;j<4;j++){
      printf("%d",BA[i][j]);
      }}*/
    


  