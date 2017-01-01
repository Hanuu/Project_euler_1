#include <stdio.h>


int defineprime(int a, int cur){
    int limit =2;
    while(limit<a){
        int factor=a/limit;
        if(factor*limit==a){
            return cur;
        }
        else if(limit==a-1){
            
            return cur+1;
        }
        limit++;
    }
}

int main(){
    int prime;
    int count =13;
    int cur=0;
    int number[4]={1,3,7,9};
    
    //3
    for(int a=0;a<4;a++){
        for(int b=0; b<4;b++){
            for(int c=0; c<4;c++){
                prime=number[c]*100+number[b]*10+number[a];
                cur=defineprime(prime, cur);
                prime=number[a]*100+number[c]*10+number[b];
                cur=defineprime(prime, cur);
                prime=number[b]*100+number[a]*10+number[c];
                cur=defineprime(prime, cur);
                if(cur==3){
                   // printf("%d  ",number[c]*100+number[b]*10+number[a]);
                    count++;
                }
                cur=0;
            }
        }
    }
    //4
    for(int a=0;a<4;a++){
        for(int b=0;b<4;b++){
        for(int c=0; c<4;c++){
            for(int d=0; d<4;d++){
                prime=1000*number[d]+number[c]*100+number[b]*10+number[a];
                cur=defineprime(prime, cur);
                prime=1000*number[a]+number[d]*100+number[c]*10+number[b];
                cur=defineprime(prime, cur);
                prime=1000*number[b]+number[a]*100+number[d]*10+number[c];
                cur=defineprime(prime, cur);
                prime=1000*number[c]+number[b]*100+number[a]*10+number[d];
                cur=defineprime(prime, cur);
                if(cur==4){
                  //  printf("%d  ",1000*number[d]+number[c]*100+number[b]*10+number[a]);
                    count++;
                }
                cur=0;
            }
        }
    }
}
    //5
    for(int a=0;a<4;a++){
    for(int b=0;b<4;b++){
        for(int c=0;c<4;c++){
        for(int d=0; d<4;d++){
            for(int e=0; e<4;e++){
                prime=10000*number[e]+1000*number[d]+number[c]*100+number[b]*10+number[a];
                cur=defineprime(prime, cur);
                prime=10000*number[a]+1000*number[e]+number[d]*100+number[c]*10+number[b];
                cur=defineprime(prime, cur);
                prime=10000*number[b]+1000*number[a]+number[e]*100+number[d]*10+number[c];
                cur=defineprime(prime, cur);
                prime=10000*number[c]+1000*number[b]+number[a]*100+number[e]*10+number[d];
                cur=defineprime(prime, cur);
                prime=10000*number[d]+1000*number[c]+number[b]*100+number[a]*10+number[e];
                cur=defineprime(prime, cur);
                if(cur==5){
                  //  printf("%d  ",10000*number[e]+1000*number[d]+number[c]*100+number[b]*10+number[a]);
                    count++;
                }
                cur=0;
            }
        }
    }
}
}
    //6
    for(int a=0;a<4;a++){
    for(int b=0;b<4;b++){
        for(int c=0;c<4;c++){
        for(int d=0; d<4;d++){
            for(int e=0; e<4;e++){
                for(int f=0;f<4;f++){
                prime=100000*number[f]+10000*number[e]+1000*number[d]+number[c]*100+number[b]*10+number[a];
                cur=defineprime(prime, cur);
                prime=100000*number[e]+10000*number[d]+1000*number[c]+number[b]*100+number[a]*10+number[f];
                cur=defineprime(prime, cur);
                prime=100000*number[d]+10000*number[c]+1000*number[b]+number[a]*100+number[f]*10+number[e];
                cur=defineprime(prime, cur);
                prime=100000*number[c]+10000*number[b]+1000*number[a]+number[f]*100+number[e]*10+number[d];
                cur=defineprime(prime, cur);
                prime=100000*number[b]+10000*number[a]+1000*number[f]+number[e]*100+number[d]*10+number[c];
                cur=defineprime(prime, cur);
                prime=100000*number[a]+10000*number[f]+1000*number[e]+number[d]*100+number[c]*10+number[b];
                cur=defineprime(prime, cur);
                if(cur==6){
                  //  printf("%d  ",100000*number[f]+10000*number[e]+1000*number[d]+number[c]*100+number[b]*10+number[a]);
                    count++;
                }
                cur=0;
            }
            }
        }
    }
}
}

    printf("\n%d",count);
}