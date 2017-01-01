#include <stdio.h>

int combination (int n, int r){
    int out=1;
    
    for(int i=n;i>=n-r+1;i--){
        out=out*i/(n-i+1);
        //printf("%d ",out);
    }
    
    return out;
}

int main(){
    
    printf("%d",combination(23,10));
}