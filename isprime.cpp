#include <iostream>
#include <math.h>

using namespace std;

bool isprime(long num) {
    bool prime = true;
    long i = 2;
    while (i <= sqrt(num) && prime) {
        if(num % i == 0) {
            prime = false;
        }
        i++;
    }
    return prime;
}


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