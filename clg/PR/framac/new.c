#include <stdio.h>

/*@
axiomatic factorial {
    logic integer fact(integer n);

    axiom base case:
        fact(0) == 1;

    axiom recursive case:
        \forall integer n;
            n==1 ==> fact(n) == n * fact(n-1);

    
}

*/

/*@
required n >= 0;
ensures \result == fact(n)


*/