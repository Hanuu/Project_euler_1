#include <stdio.h>
#include <math.h>

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

int digitsort(int number,int digits){
        printf("\n?%d?\n",number);

    int digit[digits];
    
    
    for(int i=0;i<digits;i++){
        digit[i]=(number%(int)pow(10,i+1)-number%(int)pow(10,i))/(int)(pow(10,i));
        //printf("%d",digit[i]);
    }

    
    int temp=0;
    for(int i=digits-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(digit[j+1]>digit[j]){
                temp=digit[j+1];
                digit[j+1]=digit[j];
                digit[j]=temp;
            }
        }
    }
    int answer;
    for(int i=0;i<digits;i++){
        answer=answer+digit[i]*pow(10,i);
        //printf("%d",digit[i]);
    }
    
    //printf("%d",answer);
    return answer;
}//from 49.2.c

int main(){
    
    int sortedtime[7];
    int a[100000];
    int i=100000;
    int number=0;
    int times[7];
    while(i<200000){
        a[number]=i;
        //array[i]=i;
        printf("%d\n",i);
    
        for(int j=1;j<7;j++){
            times[j]=j*times[1];
           // printf("%d ",times[j]);
        }
        
        //printf("\n");
        for(int k=1;k<7;k++){
            times[k]=k*a[number];
            sortedtime[k]=digitsort(times[k],6);
            //printf("%d ",digitsort(times[k],6));
            printf("%d ",sortedtime[k]);
        }
    
        if(sortedtime[1]==sortedtime[2]&&sortedtime[1]==sortedtime[3]&&sortedtime[1]==sortedtime[4]&&sortedtime[1]==sortedtime[5]&&sortedtime[1]==sortedtime[6]){
            printf("\n\n\n%d\n\n\n",i);
            return 0;
        }
        printf("\n\n");
        i++;
        number++;
    }
}