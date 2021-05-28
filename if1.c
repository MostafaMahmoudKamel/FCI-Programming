#include <stdio.h>
int main()
 {
  int n, a, b, c, d, e;
  printf( "Enter  number of 5 digit \n" );
  scanf( "%d", &n );
  a = n / 10000;
  b = n / 1000 % 10;
  c = n / 100 % 10;
  d = n / 10 % 10;
  e = n % 10;
  if ( a == e && b == d )
    printf( "Palindrome\n" );
  if ( a != e || b != d ) 
    printf( "Not a palindrome\n" );
  return 0;
}
