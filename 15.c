#include <stdio.h>

int main() {
    long long top=1;
    long long bottom=1;
    

    
    for(int j=1;j<21;j++){
        top=top*(j+20)/j;
    }
    printf("%lld \n", top);
}
