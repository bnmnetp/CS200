#!/usr/bin/env python3

import sys
from math import sqrt

def isprime(n):
    prime = True
    i = 2
    while i <= sqrt(n) and prime:
        if n % i == 0:
            prime = False
        i += 1
    return prime
    

tn = sys.stdin.readline()
while tn:
    tn = int(tn)
    res = isprime(tn)
    sys.stdout.write("%d %s\n" % (tn, res))
    tn = sys.stdin.readline()

        
