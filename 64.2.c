#include <stdio.h>
#include <math.h>

double nextround(double a){
    return 1/(a-(int)a);
}

double pivot(double a ,int count){
    count++;
    double b=nextround(a);
    if(count==2){
        return b;
    }
    pivot(b,count);
}

int recur(double a,int count,double p,int i){
    if((int)sqrt(i)==sqrt(i)){
        return 0;
    }
    count++;
    double b=nextround(a);
    // printf("%d %f\n",(int)a,b);
    if(count>2&&(unsigned long long)(p*1000)==(unsigned long long)(b*1000)){
        printf("%d %d\n",i,count-2);
        return count-2;
    }
    recur(b,count,p,i);
}


int main(){
    int answer=0;
    
    for(int i=2;i<10001;i++){
        double p =pivot(sqrt(i),0);
        if(recur(sqrt(i),0,p,i)%2==1){
            answer++;
        }
    }
    
    printf("%d",answer);
}
