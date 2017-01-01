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

int repeat(int *answer){
    
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
    
    
    
    
    

    
    clock_t end=clock();
    double time_spent =(double)(end-begin)/CLOCKS_PER_SEC;
    printf("\nThe time spent is %f second",time_spent);
}