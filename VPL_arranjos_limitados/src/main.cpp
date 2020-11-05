#include <iostream>

class Exception{
    
    public:

        virtual std::string get_msg() const = 0;

};

class Exception_nao_inicializado: public Exception{
    
    std::string msg = "Erro: indice nao inicializado.";
    
    public:
    
        std::string get_msg() const override{
            return msg;
        }
};

class Exception_indice_negativo: public Exception{
    
    std::string msg = "Erro: indice negativo.";

    public:

        std::string get_msg() const override{
            return msg;
        }
};

class Exception_indice_maior_arranjo: public Exception{
    
    std::string msg = "Erro: indice maior que arranjo.";
    
    public:

        std::string get_msg() const override{
            return msg;
        }
};

template <class T, int N> class BoundedArray {
  public:
    void set(int index, T value) {
        if(index < 0) {
            throw Exception_indice_negativo();
        } else if(index >= N){
            throw Exception_indice_maior_arranjo();
        }else{
            buf[index] = value;
            buf_init[index] = true;
        }
    }

    T get(int index) {

        if(index < 0) {
            throw Exception_indice_negativo();
        } else if(index >= N){
            throw Exception_indice_maior_arranjo();
        }else if(buf_init[index] != true){
            throw Exception_nao_inicializado();
        }else{
            return buf[index];
        }
    }

    private:
    
        T buf[N];
        bool buf_init[N] = {0};
};

template <class T> void testArray() {
  BoundedArray<T, 8> a;
  char action;
  while (std::cin >> action) {
    int index;
    std::cin >> index;
    try {
      if (action == 's') {
        T value;
        std::cin >> value;
        a.set(index, value);
      } else if (action == 'g') {
        std::cout << a.get(index) << std::endl;
      }
    }catch(Exception& e){
        std::cerr << e.get_msg() << std::endl;
    } catch (...) {
        std::cerr << "Erro desconhecido." << std::endl;
    }
  }
}

int main() {
  char type;
  std::cin >> type;
  switch(type) {
    case 'd':
      testArray<double>();
      break;
    case 'i':
      testArray<int>();
      break;
    case 's':
      testArray<std::string>();
      break;
  }
  return 0;
}
