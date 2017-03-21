//g++ -std=c++11 -c 2-9-1.cpp
class Poly;
typedef Poly P;

class LiLei {
    friend class Poly;
};

class Jim {
    friend Poly;
};

class HanMeiMei {
    friend P;
};


/*
k@foo:~/code/cpp/understandingcpp11$ g++ -c 2-9-1.cpp
g++ -c 2-9-1.cpp
k@foo:~/code/cpp/understandingcpp11$ clang++ -c 2-9-1.cpp
2-9-1.cpp:10:12: warning: unelaborated friend declaration is a C++11 extension; specify 'class' to
      befriend 'Poly' [-Wc++11-extensions]
    friend Poly;
           ^
           class
2-9-1.cpp:14:12: warning: unelaborated friend declaration is a C++11 extension; specify 'class' to
      befriend 'P' (aka 'Poly') [-Wc++11-extensions]
    friend P;
           ^
           class
2 warnings generated.
k@foo:~/code/cpp/understandingcpp11$ g++ --version
g++ (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4
Copyright (C) 2013 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/