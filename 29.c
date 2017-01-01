#include <stdio.h>
#include <math.h>

int main (){
    double a[9802];
    double temp;
    int count=0;
    for(int i=0;i<9802;i++){
        a[i]=0;
    }
    for(int i=2;i<101;i++){
        for(int j=2;j<101;j++){
            a[count]=i*log10(j)/log10(30);
            count++;
        }
    }
    for(int i=0;i<9802;i++){
        for(int j=i;j<9802;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<9802;i++){
        if(a[i]==a[i+1]){
            for(int j=i+1;j<9802;j++){
                a[j]=a[j+1];
                
            }
        }
    }
    
    for(int i=9150;i<9802;i++){
        printf("%d %f ",i,a[i]);
    }
}