#include<stdio.h>

int main(){
    
    int digit[100][100][101];
    int carry[100][100][101];
    int sum[100][100];
    
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int m=0;m<101;m++){
                digit[i][j][m]=0;
                carry[i][j][m]=0;
            }
        }
    }
    
    for(int a=2;a<100;a++){
        digit[a][1][1]=a;
        digit[a][1][0]=0;
        digit[a][0][1]=1;
        for(int b=2;b<100;b++){
            sum[a][b]=0;
            for(int i=1;i<101;i++){
                carry[a][b][i]=(digit[a][b-1][i-1]*a+digit[a][b-1][i]*a)/10%10;
                digit[a][b][i]=(digit[a][b-1][i]*a+carry[a][b][i])%10;
                //printf("%d",digit[a][b][i]);
                sum[a][b]+=digit[a][b][i];
            }
            //printf("\n");
        }
        //printf("\n\n");
    }
    int great=sum[2][2];
    for(int a=2;a<100;a++){
        for(int b=2;b<100;b++){
            if(sum[a][b]>great){
                great=sum[a][b];
            }
        }
    }
    for(int i=1;i<4;i++){
        printf("%d",digit[8][2][i]);
    }
    printf("%d",sum[8][3]);
}