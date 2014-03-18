#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int foo;
    int * bar;
    int * baz;
    baz = new int[30];

    foo = 11;
    cout << "foo = " << foo << " bar = " << bar << endl;
    
    bar = &foo;
    cout << "foo = " << foo << " bar = " << *bar << endl;    
    
    *bar = 12;
    cout << "foo = " << foo << " bar = " << *bar << endl;    
    
    // The contents of bar should contain the same value
    // as the contents of baz temporarily at least.
    cout << baz << endl;
    *baz = 99;
    *bar = *baz;
    cout << "bar = " << *bar << " baz = " << *baz << endl;
    cout << "bar = " << bar << " baz = " << baz << endl;

    // *baz and baz[0] are synonymous
    baz[21] = 299;

    // pointer arithmetic
    *(baz+21) = 399;

    cout << "bar = " << *bar << " baz = " << baz[21] << endl;

    return 0;
}
