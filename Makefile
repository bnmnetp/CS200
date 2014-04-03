ARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CPP	 = g++
	LINK = g++
else
	CPP	 = g++
	LINK     = g++
endif

CPPFLAGS = -std=c++11 -g -Wno-deprecated
LDFLAGS  =
LDSTATIC =


OBJS = prime.o

all:	isprime

%.o:	%.cpp %.h
	$(CPP) $(CPPFLAGS) -c $<

isprime:	$(OBJS) isprime.cpp
	$(LINK) $(CPPFLAGS) isprime.cpp $(LDFLAGS) $(OBJS) -o isprime

clean:
	rm *.o isprime
