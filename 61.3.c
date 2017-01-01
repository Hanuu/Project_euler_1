#include <stdio.h>
#include <time.h>
#include <math.h>


int tri(int i){
    int t=i*(i+1)/2;
    if(t>1000&&t<9999){
        return t;
    }
    else{
        return 0;
    }
}
int squ(int i){
    int t=i*i;
    if(t>1000&&t<9999){
        return t;
    }
    else{
        return 0;
    }
}
int pen(int i){
    int t=i*(3*i-1)/2;
    if(t>1000&&t<9999){
        return t;
    }
    else{
        return 0;
    }
}
int hex(int i){
    int t=i*(2*i-1);
    if(t>1000&&t<9999){
        return t;
    }
    else{
        return 0;
    }
}
int hep(int i){
    int t=i*(5*i-3)/2;
    if(t>1000&&t<9999){
        return t;
    }
    else{
        return 0;
    }
}
int oct(int i){
    int t=i*(3*i-2);
    if(t>1000){
        return t;
    }
    else{
        return 0;
    }
}

int first2(int i){
    return i/100;
}

int last2(int i){
    return i%100;
}

int main(){
    clock_t begin=clock();


    int polygonal[9][141];
    int answer[6];
    
    for(int i=1;i<141;i++){
        polygonal[3][i]=tri(i);
        polygonal[4][i]=squ(i);
        polygonal[5][i]=pen(i);
        polygonal[6][i]=hex(i);
        polygonal[7][i]=hep(i);
        polygonal[8][i]=oct(i);
    }
    
    
    for(int o=1;polygonal[8][o]<10000;o++){
        for(int a=3;a<8;a++){
            for(int i=1;i<141;i++){
                if((first2(polygonal[a][i])==last2(polygonal[8][o]))&&polygonal[a][i]!=0&&polygonal[8][o]!=0){
                    //printf("%d %d %d\n",polygonal[8][o],polygonal[a][i],a);
                    for(int b=3;b<8;b++){
                        if(b==a){
                            
                        }
                        else{
                            for(int ii=1;ii<141;ii++){
                                if((first2(polygonal[b][ii])==last2(polygonal[a][i]))&&polygonal[b][ii]!=0){
                                    //printf("%d %d %d\n",polygonal[8][o],polygonal[a][i],polygonal[b][ii]);
                                    for(int c=3;c<8;c++){
                                        if(c==a||c==b){
                                            
                                        }
                                        else{
                                            for(int iii=1;iii<141;iii++){
                                                if((first2(polygonal[c][iii])==last2(polygonal[b][ii]))&&polygonal[c][iii]!=0){
                                                    //printf("%d %d %d %d\n",polygonal[8][o],polygonal[a][i],polygonal[b][ii],polygonal[c][iii]);
                                                    for(int d=3;d<8;d++){
                                                        if(d==a||d==b||d==c){
                                                            
                                                        }
                                                        else{
                                                            for(int iiii=1;iiii<141;iiii++){
                                                                if((first2(polygonal[d][iiii])==last2(polygonal[c][iii]))&&polygonal[d][iiii]!=0){
                                                                    //printf("%d %d %d %d %d\n",polygonal[8][o],polygonal[a][i],polygonal[b][ii],polygonal[c][iii],polygonal[d][iiii]);
                                                                    for(int e=3;e<8;e++){
                                                                        if(e==d||e==c||e==b||e==a){
                                                                            
                                                                        }
                                                                        else{
                                                                            for(int iiiii=1;iiiii<141;iiiii++){
                                                                                if((first2(polygonal[e][iiiii])==last2(polygonal[d][iiii]))&&polygonal[e][iiiii]!=0&&(first2(polygonal[8][o])==last2(polygonal[e][iiiii]))){
                                                                                    printf("%d %d %d %d %d %d    %d %d, %d %d, %d %d, %d %d, %d %d, %d %d\n",polygonal[8][o],polygonal[a][i],polygonal[b][ii],polygonal[c][iii],polygonal[d][iiii],polygonal[e][iiiii],8,o,a,i,b,ii,c,iii,d,iiii,e,iiiii);
                                                                                    printf("%d",polygonal[8][o]+polygonal[e][iiiii]+polygonal[d][iiii]+polygonal[c][iii]+polygonal[b][ii]+polygonal[a][i]);
                                                                                    
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
    
    

    
    clock_t end=clock();
    double time_spent =(double)(end-begin)/CLOCKS_PER_SEC;
    printf("\nThe time spent is %f second",time_spent);
}