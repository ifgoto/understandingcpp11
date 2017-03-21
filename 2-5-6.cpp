int positive(const int n) {
    static_assert(n>0, "value must >0");
}

int main(){
    const int m = 3;
    positive(m);
    return 0;
}


/*
error
g++ -o 2-5-6 -g -std=c++11 2-5-6.cpp
2-5-6.cpp: In function ‘int positive(int)’:
2-5-6.cpp:2:5: error: non-constant condition for static assertion
     static_assert(n>0, "value must >0");
     ^
2-5-6.cpp:2:5: error: ‘n’ is not a constant expression
make: *** [2-5-6] Error 1


*/