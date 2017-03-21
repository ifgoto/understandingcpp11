//g++ -c std=c+11 2-10-2.cpp
struct Object {
    virtual void fun() = 0;
};

struct Base: public Object {
    void fun() final;
};

struct Derived : public Base {
    //this line would gen error
 //   void fun();
};