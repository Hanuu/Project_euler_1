#include <stdio.h>
#include <math.h>

int getnext(int num, int* fracN, int* fracD){
   int N, D, ret;
   N = *fracN;
   D = *fracD;

   N = -1*N;
   D = (num - (N*N))/D;

   ret = (sqrt(num) + N)/D;
   N -= ret*D;

   *fracN = N;
   *fracD = D;
   return ret;
}

int main(){
   int oddCount = 0, repCount, Ni, Di, seq, num, firstDig, n, d;

   for(num = 2; num <= 10000; num++){
      if((int)(sqrt(num) * (int)sqrt(num)) == num)
         continue;

      firstDig = sqrt(num);

      n = Ni = -1*firstDig;
      d = Di = 1;

      for(repCount = 1;;repCount++){
         seq = getnext(num, &n, &d);

         if(n == Ni && d == Di){
            if(repCount % 2)
               oddCount++;
            break;
         }
      }
   }
   printf("Odd periods: %d\n", oddCount);
   return 0;
}

//https://projecteuler.net/thread=64;page=9