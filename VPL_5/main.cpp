#include <iostream>
#include "List.hpp"

int main(){
    int N, K;
    std::cin >> N >> K;
    List *L = new List();
    for(int i = N; i >= 0; i--){
        L->insert(i);
    }
    L->print();
    std::cout << L->_size;
    std::cout << std::endl;
    //---------------------------
    for(int i = N; i > N-K ; i--){
        L->remove(i);
    }
    L->print();
    std::cout << L->_size;
    std::cout << std::endl;
    for(int i = N-K; i >= 0; i--){
        if(i%2==0){
            L->remove(i);
        }
    }
    L->print();
    std::cout << L->_size;
    delete L;
	return 0;
}