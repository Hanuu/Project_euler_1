#include <stdio.h>


// int check(int P[1000],int D[1000], int S[1000],int d){
    
//         for(int p=1;p<1000;p++){
//             if(D[d]!=P[p]){
//                 printf("D[%d] != P[%d]\n",d,p);
//                 break;
//             }
//             if(S[d]!=P[p]){
//                 printf("D[%d] != P[%d]\n",d,p);
//                 break;
//             }
//             else{
//                 printf("%d",P[p]);
//             }
//         }
    
// }

int main(){
    
    int P[1000];
    int S[1000];
    int D[1000];
    
    for(int i=1;i<1000;i++){
        P[i]=i*(3*i-1)/2;
        D[i]=3*i+1;
        S[i]=3*i*i+2*i+1;
        
        printf("%d %d %d %d\n",i,P[i],D[i],S[i]);
    }
    
    // for(int d=1;d=1000;d++){
    //     check(P,D,S,d);
    // }
    
}