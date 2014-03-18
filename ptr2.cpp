#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int foo;
    int bar[100];
    int *baz = new int[100];
    int *frob;

    bar[0] = 11;

        
    cout << bar[0] << "\t" << bar[1]  << endl;        
    
    
    cout << baz[0] << "\t" << baz[1]  << endl;            


    return 0;
}
