#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for(int i=1; i<(x*2); i++){
        if(i<x){
            for(int j=1; j<=i%x; j++){
                std::cout << "*";
            }
        } else{
            for(int j=1; j<=x - (i%x); j++){
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}