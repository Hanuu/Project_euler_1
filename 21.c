#include <stdio.h>

int main(){
    long long sum;
    int sumofdivisor[1000001];
    for(int i=3;i<10001;i++){
        sumofdivisor[i]=0;
//        printf("%d ",i);
        for(int j=1;j<i;j++){
            if(i%j==0){
//                printf("%d ",j);
                sumofdivisor[i] = sumofdivisor[i]+j;
            }
            if(sumofdivisor[i]>10000){
//                printf("\n");
                break;
            }
        }
    }
    for(int k=1;k<10001;k++){
        if(k==sumofdivisor[sumofdivisor[k]]&&k!=sumofdivisor[k]){
           sum=sum+sumofdivisor[k];
            printf("%d %d \n",k,sumofdivisor[k]);
        }
    }
    printf("%lld",sum);
}
// 문제를 잘 읽자 