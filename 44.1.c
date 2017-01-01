#include <stdio.h>


int check(int P[3000],int D[3000], int S[3000],int a,int b){
    int count=0;
    int ss=0;
    int dd=0;
    for(int d=1;d<a;d++){
        if(P[d]==P[a]-P[b]){
            count++;
            dd=d;
            break;
        }
    }
    for(int s=1;s<3000;s++){
        if(P[s]==P[a]+P[b]){
            count++;
            ss=s;
            break;
        }
    }
    if(count==2){
        printf("P[d]\nP[%d] = P[%d] - P[%d]\n%d   %d   %d\nP[S]\nP[%d] = P[%d] + P[%d]\n%d   %d   %d"
        ,dd,a,b,P[dd],P[a],P[b],ss,a,b,P[ss],P[a],P[b]);
    }
}

int main(){
    
    int P[3000];
    int S[3000];
    int D[3000];
    
    for(int i=1;i<3000;i++){
        P[i]=i*(3*i-1)/2;
       // printf("%d %d %d %d\n",i,P[i],D[i],S[i]);
    }
    
    for(int a=1;a<3000;a++){
        for(int b=1;b<a;b++){
            check(P,S,D,a,b);
        }
    }
    
}
//문제를 잘 읽자