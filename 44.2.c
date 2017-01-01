#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPentagonal(int number) {
    double penTest = (sqrt(1 + 24 * number) + 1.0) / 6.0;
    return penTest == ((int)penTest);
}

int main(){
    int result = 0;
    bool notFound = true;
    int i = 1;
 
    while (notFound) {
        i++;
        int n = i * (3 * i - 1) / 2;
 
        for (int j = i-1; j > 0; j--) {
            int m = j * (3 * j - 1) / 2;
            if (isPentagonal(n - m) && isPentagonal(n + m)) {
                result = n-m;
                notFound = false;
                printf("%d",n-m);
                break;
            }
        }
    }
}

//There are always better ways.
//http://www.mathblog.dk/project-euler-44-smallest-pair-pentagonal-numbers/