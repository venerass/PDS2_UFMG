#include <iostream>

int function(int &w) {
    std::cout << w;
    w = w + 3;
    std::cout << w;
    return w;
}

int main() {

    int x = 7;
    int y;
    y = function(x);
    x++;
    y--;
    std::cout << x << "    " << y;
    return 0;
}