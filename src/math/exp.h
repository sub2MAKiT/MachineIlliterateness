#define IntDex unsigned long long
#define MKTDOUBLE double
#define MKTPRECISION 10

#define MKTsigmo(x) 1/(1+(1/MKTexp(x,MKTPRECISION)))

MKTDOUBLE MKTexp(MKTDOUBLE x, IntDex n);
IntDex MKTfac(IntDex x);