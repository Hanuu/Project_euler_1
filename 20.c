#include <stdio.h>

int main(){
    int D[201];
    int T[201];
    int C[201];
    int answer;
    for(int i=0;i<202;i++){
        D[i]=0;
        T[i]=0;
        C[i]=0;
    }
    D[1]=1;
    T[1]=1;
    D[-1]=0;
    T[-1]=0;
    D[-2]=0;
    T[-2]=0;
    C[-1]=0;
    C[-2]=0;
    for(int j=2;j<101;j++){
        for(int k=1;k<202;k++){
            T[k]=j*D[k];
        }
        for(int d=1;d<202;d++){
            C[d]=(T[d]%10+T[d-1]/10%10+T[d-2]/100%10+C[d-1])/10%10;
            D[d]=(T[d]%10+T[d-1]/10%10+T[d-2]/100%10+C[d-1])%10;
        }
        for(int k=j+2;k>0;k--){
            printf("%d",D[k]);
        }

        printf("\n");
        
    }
    
    for(int g=1;g<202;g++){
        answer=answer+D[g];
    }
    
    printf("\n\n %d",answer);
}
//코창인생