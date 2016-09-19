#include <stdio.h>
#include <stdlib.h>

int main() {
  long ans = 1;
  int ctr = 100;
  int sum = 0;
  int square = 0;
  while( ctr > 0 ) {
    sum += ctr;
    square += ctr*ctr;
    ctr --;
  }
  ans = sum*sum - square;
  printf("%d\n",ans);
  return ans;
}
