#include <stdio.h>
int main(void) 
{
  // 116330462032-6
 int i,j,k; 
 int A[5][6],B[6][3];
 int Sum[5][3]= {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0,}};
 //  A[i][k] B[k][j] = Sum[i][j]
 //  A[5][6] B[6][3] = AB[5][3]
printf("******************************** \n");
 printf("The value of A\n");
 for(i=0; i<5; i++){
      for(j=0;j<6;j++){
         printf("Enter value A[%d][%d] :",i,j);
         scanf("%d", &A[i][j]);}}
  printf("******************************** \n");
  printf("The value of B\n");
  for(i=0; i<6; i++){
      for(j=0;j<3;j++){
         printf("Enter value B[%d][%d] :",i,j);
         scanf("%d", &B[i][j]);}}
printf("******************************** \n");
  //calculate
  for(i=0;i<5;i++) {
    for(j=0;j<3;j++) {
      for(k=0;k<6;k++) {
        Sum[i][j] += (A[i][k] * B[k][j]);
      }}}
  // output
  printf("\t-------Answer-------\n");
   for(i=0; i<5; i++){
      for(j=0;j<3;j++){
      printf("\t%-5d",Sum[i][j]);
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
    


  