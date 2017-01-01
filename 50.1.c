#include <stdio.h>

int prime(int number){
    for(int i=2;i<number;i++){
        int a=number/i;
        if(i*a==number){
            return 0;
        }
    }
  //  printf("%d ",number);
    return number;
}

int limit (int j,int setofprime[5132],int *candidate){
    int sum=0;
    int count=0;
    int answer=0;
    

    for(int k=j;k<5132;k++){
        count++;
        sum=sum+setofprime[k];
        int temp=prime(sum);
            
        if(sum>1000000){
            return answer;
        }        
        
        if(temp!=0){
            answer=count;
            *candidate=temp;
            //printf("%d %d\n",temp,count);
        }
    }
}


int main(){
    
    int candidate=0;
    int count=1;
    int setofprime[5132];
    setofprime[0]=2;
    for(int i=3;i<50000;i=i+2){
        int temp=prime(i);
        if(temp!=0){
            setofprime[count]=temp;
            count++;
        }
    }
    //printf("%d",count);
    int temp[5111];
    int biggest=0;
    for(int j=0;j<5111;j++){
        temp[j]=limit(j,setofprime,&candidate);
        if(temp[j]>biggest){
            biggest=temp[j];
            printf("%d %d\n",biggest,candidate);
        }
    }
    
    
    
}

//삶에는 순서가 있다.