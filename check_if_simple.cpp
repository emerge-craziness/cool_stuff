/* Checks if the number from stdin is prime or not. */


#define STDERR_ENABLE

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    typedef long long int lli;
    lli a;
    cin >> a;
    vector<lli>& primes = *( new vector<lli> );
    primes.push_back( 2 );
#ifdef STDERR_ENABLE
    cerr << 2 << "\n";
#endif
    for ( lli i = 0; ( i < primes.size() ) && ( primes.back() < a ); i++ )
    {
        if ( a % primes[i] == 0 )
        {
            cout << "It is not. " << primes[i] << endl;
            return 1;
        }
        else
        {
            bool next = true;
            for ( lli j = primes.back() + 1; next; j++ )
            {
                bool logical = true;
                for ( lli c = 0; ( c < primes.size() ) && ( logical ); c++ )
                {
                    if ( j % primes[c] == 0 )
                    {
                        logical = false;
                    }
                }
                if ( logical )
                {
                    primes.push_back( j );
#ifdef STDERR_ENABLE
                    cerr << primes.back() << "\n";
#endif
                    next = false;
                }
            }
        }
    }

    cout << "Yes it is" << endl;

    delete &primes;
    return 0;
}
