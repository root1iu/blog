#include <iostream>

using namespace std;

class A {
    public:
        char a;
        int* b;
    A(){}
    void test() {
        cout << "Hello\n";
    }
    //virtual ~A() {}
};

int main(int argc, char *argv[])
{
    int arrayOne[10], arrayTwo[0];
    cout << sizeof(arrayOne) << " " << sizeof(arrayTwo) << endl;
    A a;
    cout << sizeof(a) << endl;
    a.test();
    return 0;
}
