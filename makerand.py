#!/usr/bin/env python3

import sys
import random
import time

#random.seed(time.time())

maxi = 2**32-1

if len(sys.argv) > 1:
    for i in range(int(sys.argv[1])):
        print(random.randrange(maxi))
else:
    sys.stderr.write("Usage:  %s N where N is the number of prime\n")


