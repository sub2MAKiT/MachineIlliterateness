#include <math/exp.h>

MKTDOUBLE MKTexp(MKTDOUBLE x, IntDex n)
{
    MKTDOUBLE ret = 1;
    for(IntDex i = 0; i < n; i++)
    {
        MKTDOUBLE tempX = x;
        for(IntDex a = 0; a < i; a++)
            tempX *= x;
        ret += tempX/MKTfac(i+1);
    }
    return ret;
}

IntDex MKTfac(IntDex x)
{
    IntDex ret = 1; x++;
    while(x-- > 1)
        ret *= x;
    return ret;
}