#include <stdio.h>

int main(){
    int D[101][5000];
    int C[101][5000];
    for(int i=0;i<101;i++){
        for(int k=0;k<5000;k++){
            D[i][k]=0;
            C[i][k]=0;
        }
    }
    D[1][1]=1;
    D[1][2]=1;
    
    int n=1;
    while(n<4782){
        for(int j=1;j<102;j++){
            D[j][n+2]=(D[j][n]+D[j][n+1]+C[j-1][n+2])%10;
            C[j][n+2]=((D[j][n]+D[j][n+1]+C[j-1][n+2])/10)%10;
        }
  //         if(D[100][n+2] !=0){
   //            printf("%d",n+2);
   //             break;
    //       }
           n++;
           for(int h=100;h>0;h--){
               printf("%d",D[h][n-1]);
           }
           printf("\n");

    }
    
    
}