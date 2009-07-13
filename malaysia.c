/* ***********************************
/* this will print the map of
/* peninsular malaysia in ascii form
/************************************/
#include <stdio.h>
int x,b=10;p(_){return(_>=34&&printf("%c"\
,++b==0x5A?b=b>>4<<1:041U^x&1)&&p(_-1));}
main(){int s="/*, n@vat3ch.^_^v *'b \
*'B#? *+>#? *,;%? *-:%? *-:$@ *-:$@ \
+-9$@ ,14&> -03)< -03*; ,12,: ,0(#(/\
9 --"/* handcoded by */"(''/8 ,/$+$1\
8 ,"/*azwan ali 2009*/"0#>CNDS?QAS@T\
>U=V<W=V<W<V;X:X9Y8Z9X;W<W;X9X;V=U=T\
AQBODMFLFLGKFMFLFJGJIKIGLHLHNENENEOC\
PDPCQ@U<X<X:Y8]5_2a1e+i),"[x+++18];s\
>32?p(s):x+1;return s>0?main():0;}
