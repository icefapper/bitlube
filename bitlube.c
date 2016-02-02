


#include <stdio.h>
#include                    <assert.h>

int main() {
  unsigned int n,  min = 0  ;

  while ( fscanf(stdin, "%i",   (&n) )           != -1   )   { 
     assert(n>=min||min                           == 0)   ;
     n -=   min ;
     min+=  n   ;

       while(n-- ) printf(       "0" )   ;

     printf(  "1" ), min ++ ;
   }


return (  ( (  0)  )   );
}

            

