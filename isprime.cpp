#include <iostream>
#include <math.h>
#include "prime.h"

using namespace std;



int main (int argc, char const *argv[])
{
    long tn = 1;
    cin >> tn;
    while (! cin.eof() ) {
        bool res = isprime(tn);
        cout << tn << "\t" << res << endl;
        cin >> tn;
    }

    return 0;

}
