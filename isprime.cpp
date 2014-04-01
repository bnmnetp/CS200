#include <iostream>
#include <math.h>
#include "prime.h"

using namespace std;



int main (int argc, char const *argv[])
{
    long tn = 1;
    long limit;
    limit = atol(argv[1]);
    for(int i = 0; i < limit; i++) {
        cout << nextprime() << endl;
    }

    return 0;

}
