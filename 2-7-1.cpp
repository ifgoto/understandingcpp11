#if 0
class Init{
    public:
        Init(): a(0) {}
        Init(int d): a(d) {}
   private: 
        int a;
        const static int b = 0;
        int c = 1;
        static int d = 0;
        static const double e = 1.3;
        static const char* const f ="e";

};

#endif


/*
g++ -c 2-7-1.cpp
2-7-1.cpp:8:17: warning: non-static data member initializers only available with -std=c++11 or -std=
gnu++11 [enabled by default]
         int c = 1;
                 ^
2-7-1.cpp:9:24: error: ISO C++ forbids in-class initialization of non-const static member ‘Init::d’
         static int d = 0;
                        ^
2-7-1.cpp:11:37: error: invalid in-class initialization of static data member of non-integral type ‘
const char* const’
         static const char* const f ="e";
                                     ^
*/


struct init { int a = 1; double b {1.2};};
/*
g++ -c  2-7-1.cpp
2-7-1.cpp:35:23: warning: non-static data member initializers only available with -std=c++11 or -std
=gnu++11 [enabled by default]
 struct init { int a = 1; double b {1.2};};
                       ^
2-7-1.cpp:35:39: warning: non-static data member initializers only available with -std=c++11 or -std
=gnu++11 [enabled by default]
 struct init { int a = 1; double b {1.2};};
                                       ^
2-7-1.cpp:35:35: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11
[enabled by default]
 struct init { int a = 1; double b {1.2};};
                                   ^
2-7-1.cpp:35:39: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11
[enabled by default]
 struct init { int a = 1; double b {1.2};};
*/

//with the c++ was ok
//g++ -c -std=c++11 2-7-1.cpp