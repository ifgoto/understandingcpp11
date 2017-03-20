#include <iostream>
#include <cassert>

using namespace std;


//if deifne NDEBUG here would not nullable to assert
//define NDEBUG 1

//
//we should g++ -DNDEBUG ..........
char* ArrayAlloc(int n) {
    assert(n > 0);
    return new char[n];

}
int main(){
    char* a = ArrayAlloc(0);
    return 0;
};