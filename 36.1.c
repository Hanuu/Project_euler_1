#include <stdio.h>
#include <math.h>

int function2(int number){
    int answer=number;
    int k=0;
    int binarydigit[20];
    
    /*for(int i=0;i<20;i++){
        binarydigit[i]=9;
    }*/
    
    while(number!=1){
        int temp=number/2;
        int RestTemp=number%2;
        number=number/2;
        binarydigit[k]=RestTemp;
        k++;
    }
    
    binarydigit[k]=1;
    
    int out=0;
    
    for(int i=k;i>=0;i--){
        out+=binarydigit[i]*pow(10,i);
    }
    
    if(k%2==1){
        int test=0;
        for(int i=k;i>=(k+1)/2;i--){
            if(binarydigit[i]==binarydigit[k-i]){
                test++;
            }
            else{
                break;
            }
            if(test==(k+1)/2){
                printf("%d\n",answer);
                return answer;
            }

        }
       // printf("%d %d\n",out,test);
    }
    else{
        int test=0;
        for(int i=k;i>=(k+1)/2;i--){
            if(binarydigit[i]==binarydigit[k-i]){
                test++;
            }
            else{
                break;
            }
            if(test==(k/2)){
               printf("%d\n",answer);
               return answer;
            }
        }
     //   printf("%d\n",out);
    }
}

int main(){
    int sum=0;
    
    for(int i=11;i<100;i+=11){
        int a=function2(i);
        if(i==a){
            sum+=a;
        }
    }
    
    for(int i=0;i<10;i++){
        for(int j=1;j<10;j=j+2){
            int c=100*j+10*i+j;
            int b=function2(c);
            printf("%d\n",c);
            if(c==b){
                sum+=b;
            }
        }
    }
    printf("%d",sum);
}