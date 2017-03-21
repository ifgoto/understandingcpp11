 //g++ -c -std=c++11 2-7-2.cpp
#include <string>
using namespace std;

struct C {
    C(int i):c(i){};
    int c;
};

struct init {
    int a = 1;
    //string b("hello"); //2-7-2.cpp:11:14: error: expected identifier before string constant
    string b{"hello"};

   // C c(1);
   /*2-7-2.cpp:12:9: error: expected identifier before numeric constant
     C c(1);
         ^
2-7-2.cpp:12:9: error: expected ‘,’ or ‘...’ before numeric constant
         */
    C c{1};
};