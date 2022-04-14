#include <stdio.h>
#include <stdbool.h>

bool atomics( int n );

int main( void ) {

    int n;
    do {
            printf( "Inserisci un numero : " );
            scanf( "%d", &n );
    } while( n < 0 );

    if( atomics( n ) ) {
            puts( "Il numero e' primo" );
    } else {
            puts( "Il numero non e' primo" );
    }

    return 0;
}

bool primes( int n ) {

    int rest;
    int div = 3;

    // La funzione verifica se n è un numero primo
    // appartenente all'insieme dei numeri naturali.
    //
    // La complessità dell'algoritmo in termini di tempo e' : O( n/6 ).
    // La complessità dell'algoritmo in termini di spazio e' : Θ( 1 ).

    while( div <= n / 3 ) {
            rest = n % div;

            if( !rest ) {
                    return false;
            }
            div = div + 2;
    }
    return true;
}

bool atomics( int n ) {

    bool primes( int n );

    if( n == 2 ) {
            return true;
    } else if( n % 2 == 0 ) {
            return false;
    } else if( n == 1 ) {
            return false;
    } else {
            return primes( n );
    }
}
