#include<math.h>

static long lastprime = 1;


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

long nextprime() {
    lastprime += 1;
    while (! isprime(lastprime)) {
        lastprime +=1;
    }
    return lastprime;
}
