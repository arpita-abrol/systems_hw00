#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum = 0;
  int x = 0;
  while( x  < 1000 ) {
    if( x%3 == 0 || x%5 == 0 ) {
      sum += x;
    }
    x++;
  }
  printf("%d",sum);
  return sum;
}
