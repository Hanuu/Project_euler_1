#include <stdio.h>


/*int factorial(int n){
    int answer=1;
    int count=1;
    while(count<n){
        answer =answer* (count+1);
        count++;
    }
    return answer;
}*/

int main(){
    int digit[9];
    int factorial[10];
    factorial[0]=0;
    factorial[1]=1;
    factorial[2]=2;
    factorial[3]=6;
    factorial[4]=24;
    factorial[5]=120;
    factorial[6]=720;
    factorial[7]=5040;
    factorial[8]=40320;
    factorial[9]=362880;
    int define(int a,int b,int c, int d, int e, int f, int g,int h, int i){
    int answer =i*100000000+h*10000000+g*1000000+f*100000+e*10000+d*1000+c*100+b*10+a;
    int number = factorial[i] + factorial[h] + factorial[g] + factorial[f] +factorial[e] +factorial[d] +factorial[c] +factorial[b] +factorial[a]; 
    if (answer == number){
        printf("%d%d%d%d%d%d%d%d%d\n",i,h,g,f,e,d,c,b,a);
    }

    
}


    for(digit[1]=0;digit[1]<10;digit[1]++){
        for(digit[2]=0;digit[2]<10;digit[2]++){
            for(digit[3]=0;digit[3]<10;digit[3]++){
                for(digit[4]=0;digit[4]<10;digit[4]++){
                    for(digit[5]=0;digit[5]<10;digit[5]++){
                        for(digit[6]=0;digit[6]<10;digit[6]++){
                            for(digit[7]=0;digit[7]<10;digit[7]++){
                                for(digit[8]=0;digit[8]<10;digit[8]++){
                                    for(digit[9]=0;digit[9]<10;digit[9]++){
                                        define(digit[1],digit[2],digit[3],digit[4],digit[5],digit[6],digit[7],digit[8],digit[9]);
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