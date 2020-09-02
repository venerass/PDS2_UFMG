#include "Estudante.hpp"
#include <iostream>
#include <string>
#include <vector>


int main(){
    std::vector<Estudante> Alunos(10);

    for(int i= 0; i < 10;i++){
        std::cin >> Alunos[i].matricula >> Alunos[i].nome >> Alunos[i].notas[0] >> Alunos[i].notas[1] >> Alunos[i].notas[2] >> Alunos[i].notas[3] >> Alunos[i].notas[4];
    }

    std::vector<float> media(10);

    for(int i= 0; i < 10;i++){
        media[i] = Alunos[i].calcularRSG();
    }

    int index_max[3];
    float max = 0;
    for(int i= 0; i < 10;i++){
        if(media[i] > max){
            max = media[i];
            index_max[0] = i;
        }
    }

    max = 0;
    
    for(int i= 0; i < 10;i++){
        if(i == index_max[0]){
            continue;
        }
        if(media[i] > max){
            max = media[i];
            index_max[1] = i;
        }
    }

    max = 0;

    for(int i= 0; i < 10;i++){
        if((i == index_max[0]) || (i == index_max[1])){
            continue;
        }
        if(media[i] > max){
            max = media[i];
            index_max[2] = i;
        }
    }

    std::cout << Alunos[index_max[0]].matricula << " " << Alunos[index_max[0]].nome << " " << media[index_max[0]] << "\n";

    std::cout << Alunos[index_max[1]].matricula << " " << Alunos[index_max[1]].nome << " " << media[index_max[1]] << "\n";

    std::cout << Alunos[index_max[2]].matricula << " " << Alunos[index_max[2]].nome << " " << media[index_max[2]] << "\n";

    return 0;
}