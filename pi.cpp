#include <cstdio>
#include <cmath>

int main()
{
    int num_of_digits;
    scanf( "%i", &num_of_digits );
    long double prec = pow( 10, num_of_digits );
    //printf( "%.0Le\n", prec );
    long double pi = 0.0;
    long double sign = 1.0;
    for ( long double i = 1; i / 4ll <= ( long long int )prec; i += 2 )
    {
        pi += 4.0 / i * sign;
        sign *= -1;
        //printf( "\r%i", ( int )i / 4 );
    }
    printf( "\n" );
    printf( "pi is ~%.*Lf\n", num_of_digits, pi );

    return 0;
}
