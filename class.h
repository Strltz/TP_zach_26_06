#include <iostream>

class A {
public:
    static A* getInstance() {
        std::cout << "get A " << std::endl;
        if (instance) {
            return instance;
        }
    }
    void for_support();
private:
    A();
    static A* instance;
};
