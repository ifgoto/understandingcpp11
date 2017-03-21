//g++ -o 2-8-1 2-8-1.cpp
#include <iostream>
using namespace std;

struct People {
public:
    int hand;
    static People* all;
};

int main() {
    People p;
    cout << sizeof(p.hand) << endl;
    cout << sizeof(People::all) << endl;

//I compile with"g++ -o 2-8-1 -std=c++98 2-8-1.cpp", but sussess,why???
//but use the clang 
/*
clang++ 2-8-1.cpp
2-8-1.cpp:15:28: error: invalid use of non-static data member 'hand'
    cout << sizeof(People::hand) << endl;
                   ~~~~~~~~^~~~
1 error generated.
*/

    cout << sizeof(People::hand) << endl; 

}