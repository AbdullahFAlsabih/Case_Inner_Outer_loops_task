#include <stdio.h>
#define INC  
 // case inner loop
// #include Innerloop
// case outer loop
// #include Outerloop


int main(){

#ifdef INC 
#include "example1.a.c"
#endif

#ifdef Innerloop
#include "example1.b.c"
#endif

#ifdef Outerloop
#include "example1.a.c"
#endif  


    return 0;           

}   
