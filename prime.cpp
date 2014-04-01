#include<math.h>

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
