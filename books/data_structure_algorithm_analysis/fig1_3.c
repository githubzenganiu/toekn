#include <stdio.h>

/* START: fig1_3.txt */
        int
        Bad( unsigned int N )
        {
			printf("call the function\n");
/* 1*/      if( N == 0 )
/* 2*/          return 0;
            else
/* 3*/          return Bad( N / 3 + 1 ) + N - 1;
        }
/* END */

main( )
{
	//Bad(2);
    printf( "Bad is infinite recursion\n" );
    return 0;
}
