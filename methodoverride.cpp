#include<iostream>
using namespace std;

class Base {
public:
    void add(int a, int b) {
        cout << "Base Class: " << a + b << endl;
    }
    
    void add(double a, double b) {
        cout << "Base Class: " << a + b << endl;
    }
};

class Override : public Base {
public:
    void add(int a, int b) {
        cout << "Override Class: " << a + b << endl;
    }
    
    void add(double a, double b) {
        cout << "Override Class: " << a + b << endl;
    }
};

int main() {
    Base obj;
    obj.add(2, 4);
    obj.add(7.4, 67.5);

    Override obj2;
    obj2.add(2, 4);
    obj2.add(7.4, 67.5);
    
    return 0;
}

