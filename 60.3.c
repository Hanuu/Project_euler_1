#include <stdio.h>
#include <math.h>
#include <time.h>

int prime(int number){
    for(int i=2;i<sqrt(number);i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
    return number;
}

int howmanydigit(int number){
    
    int temp = number;
    int digit=0;
    while(temp>=1){
        temp=temp/10;
        digit++;
    }
    
    //printf("%d",digit);
    return digit;
}

int concatenated(int a, int b){
    if(prime(a*pow(10,howmanydigit(b))+b)==0){
        return 0;
    }
    if(prime(b*pow(10,howmanydigit(a))+a)==0){
        return 0;
    }
    return 1;
}

int main(){
    clock_t begin = clock();
    
    int ListofPrime[1260];
    int j=2;
    ListofPrime[0]=2;
    ListofPrime[1]=3;
    for(int i=5;i<10000;i=i+2){
        int b=prime(i);
        if(b!=0){
           ListofPrime[j]=b;
           j++;
        }
    }
    
    for(int i=0;i<1246;i++){
        for(int j=i+1;j<1247;j++){
            //printf("%d %d\n",ListofPrime[i],ListofPrime[j]);
            if(concatenated(ListofPrime[i],ListofPrime[j])==1){
                for(int k=j+1;k<1248;k++){
                    if(concatenated(ListofPrime[k],ListofPrime[i])==1&&concatenated(ListofPrime[k],ListofPrime[j])==1){
                        for(int m=k+1;m<1249;m++){
                            if(concatenated(ListofPrime[m],ListofPrime[i])==1&&concatenated(ListofPrime[m],ListofPrime[j])==1&&concatenated(ListofPrime[m],ListofPrime[k])==1){
                                for(int n=m+1;n<1250;n++){
                                    if(concatenated(ListofPrime[n],ListofPrime[i])==1&&concatenated(ListofPrime[n],ListofPrime[j])==1&&concatenated(ListofPrime[n],ListofPrime[k])==1&&concatenated(ListofPrime[n],ListofPrime[m])==1){
                                        printf("%d %d %d %d %d\n",ListofPrime[n],ListofPrime[m],ListofPrime[k],ListofPrime[j],ListofPrime[i]);
                                        printf("%d",ListofPrime[n]+ListofPrime[m]+ListofPrime[k]+ListofPrime[j]+ListofPrime[i]);
                                        clock_t end=clock();
                                        double time_spent =(double)(end -begin)/CLOCKS_PER_SEC;
                                        printf("\nThe time spent is %f",time_spent);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

//Always improve