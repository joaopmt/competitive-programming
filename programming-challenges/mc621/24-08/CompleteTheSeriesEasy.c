#include <stdio.h>

int main(){

   long long t;
   scanf("%lld", &t);

   long long _3rd, _3rdlast, sum;
   while(t--){
      scanf("%lld %lld %lld", &_3rd, &_3rdlast, &sum);

      long long n = 2*sum/(_3rd + _3rdlast);
      printf("%lld\n", n);

      long long r = (_3rdlast - _3rd)/(n-5);
      long long ai;
      for(ai = _3rd - 2*r; n-- > 0; ai += r)
         printf("%lld ", ai);
      printf("\n");
   }

   return 0;
}
