/*Para cada um dos itens seguintes, escreva uma única instrução que realiza a tarefa indicada (os comentários servem apenas para lhe auxiliar). Suponha que as variáveis do tipo long value1 e value2 tenham sido declaradas e que value1 tenha sido inicializado como 200000. As perguntas que não tem saída, não serão avaliadas mas podem ser feitas como revisão.

Suponha que a constante simbólica SIZE foi definida como 5.

1. Declare a variável long_ptr como um ponteiro para um objeto do tipo long.

2. Atribua o endereço da variável value1 à variável ponteiro long_ptr

3. Imprima o valor do objeto apontado por long_ptr.

4. Atribua o valor do objeto apontado por long_ptr à variável value2

5. Imprima o valor de value2.

6. Imprima o endereço de value1

7. Imprima o endereço armazenado em long_ptr. O valor impresso é o mesmo que o endereço de value1?

8. Declare um array do tipo unsigned int chamado values com cinco elementos e inicialize os elementos para os inteiros pares de 2 a 10. 

9. Declare um ponteiro v_ptr que aponta para um objeto do tipo unsigned int.

10. Utilize uma instrução for para imprimir os elementos do array values usando notação de array com [].

11. Escreva duas instruções separadas que atribuem o endereço inicial do array values à variável ponteiro v_ptr.

12. Utilize uma instrução for para imprimir os elementos do array values utilizando a notação de ponteiro/deslocamento.

13. Utilize uma instrução for para imprimir os elementos do array values utilizando a notação de ponteiro/deslocamento com o nome de array como o ponteiro.

14. Utilize uma instrução for para imprimir os elementos do array values utilizando [] no ponteiro para o array.

15. Referencie o quinto elemento de values utilizando a notação [] de array, a notação de ponteiro/deslocamento com o nome de array como o ponteiro, a notação de subscrito de ponteiro e a notação de ponteiro/deslocamento.

16. Mostre que endereço é referenciado por v_ptr + 3, e que valor é armazenado nessa localização.

17. Supondo que v_ptr aponte para values[4], que endereço é referenciado por v_ptr -= 4? Que valor é armazenado nessa localização?
*/

//Suponha que as variáveis do tipo long value1 e value2 tenham sido declaradas e que value1 tenha sido inicializado como 200000.
//Suponha que a constante simbólica SIZE foi definida como 5.

#include <iostream>

#define SIZE  5;

int main(){
    long value1 = 200000;
    long value2;
    //1
    long *long_ptr = nullptr;
    //2
    long_ptr = &value1;
    //3
    std::cout << *long_ptr;
    //4
    *long_ptr = value2;
    //5
    std::cout << value2;
    //6
    std::cout << &value1;
    //7
    std::cout << long_ptr;
    //8
    unsigned int values[5] = {2,4,6,8,10};
    //9
    unsigned int *v_ptr = nullptr;
    //10
    for(int i = 0; i < 5;i++){
        std::cout << values[i];
    }
    //11
    v_ptr = &values[0];
    //12
    for(int i = 0; i < 5; i++){
        std::cout << *(v_ptr + i);
    }
    //13
    for(int i = 0; i < 5; i++){
        std::cout << *(&values[0] + i);
    }
    //14
    
    //15

    //16

    std::cout << *(v_ptr + 3);
}


