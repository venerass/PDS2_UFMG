#include <iostream>
#include <math.h>

double rend_anual_para_mensal(double rend_anual){
    return pow(rend_anual,1.0/12);
}

float montante_final(float cap_inic, float tempo, float quantia_mensal, float rendimento_mensal){
    float montante = cap_inic;
    for(int i = 0; i < tempo;i++){
        montante = ((montante + quantia_mensal) * rendimento_mensal); 
    }
    return montante;
}

int main(){
    float cap_inic, tempo, quantia_mensal;
    double rendimento_anual,rendimento_mensal;
    std::cout << "Quanto dinheiro tem investido?\n";
    std::cin >> cap_inic;
    std::cout << "Quantos tempo, em meses, deseja investir?\n";
    std::cin >> tempo;
    std::cout << "Quanto deseja investir por mes?\n";
    std::cin >> quantia_mensal;
    std::cout << "Qual rendimento anual deseja simular? (ex: 20% = 1.2)\n";
    std::cin >> rendimento_anual;

    rendimento_mensal = rend_anual_para_mensal(rendimento_anual);

    std::cout << "O montante final após " << tempo << " meses será de " << montante_final(cap_inic,tempo,quantia_mensal,rendimento_mensal) << " reais\n";

}