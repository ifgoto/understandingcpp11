//g++ -std=c++11 -c 2-9-2.cpp
class P;

template <typename T> class People {
    friend T;
};

People<P> PP;
People<int> Pi;


/*


k@foo:~/code/cpp/understandingcpp11$ g++ --std=c++11 -c 2-9-2.cpp
k@foo:~/code/cpp/understandingcpp11$ clang++ --std=c++11 -c 2-9-2.cpp
k@foo:~/code/cpp/understandingcpp11$ clang++  -c 2-9-2.cpp
2-9-2.cpp:5:5: warning: non-class friend type 'T' is a C++11 extension [-Wc++11-extensions]
    friend T;
    ^      ~
1 warning generated.
k@foo:~/code/cpp/understandingcpp11$ g++  -c 2-9-2.cpp
k@foo:~/code/cpp/understandingcpp11$ g++  -c 2-9-2.cpp
*/