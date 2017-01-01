#include <stdio.h>

int combination (int n){
    int out=1;
    
    for(int i=n;i>=1;i--){
        out=out*i/(n-i+1);
        //printf("%d ",out);
        if(out>1000000){
            //printf("\n%dC%d=%d\n",n,n+1-i,out);
            return n+1-i;
        }
    }
    
}

int main(){
    int temp[101];
    int answer=0;
    for(int i=23;i<101;i++){
        temp[i]=combination(i);
        answer+=i-2*temp[i]+1;
    }
    
    printf("%d",answer);
    
    
    //printf("%d",combination(25));
}