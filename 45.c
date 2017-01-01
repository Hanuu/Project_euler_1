#include <stdio.h>
#define limit (80000)

int main(){
    int T[limit];
    int P[limit];
    int H[limit];
    for(int i=1;i<limit;i++){
        T[i]=i*(i+1)/2;
        P[i]=i*(3*i-1)/2;
        H[i]=i*(2*i-1);
    }
    
    for(int t=285;t<limit;t++){
        
        for(int p=165;p<t;p++){
                for(int h=143;h<p;h++){
                    if(T[t]==P[p]){
                        if(P[p]==H[h]){
                        printf("T[%d] = %d",t,T[t]);
                        }
                    }
                    else{
                        break;
                    }
            }
            
        }
    }
}