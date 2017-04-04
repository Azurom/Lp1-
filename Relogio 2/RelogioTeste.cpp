#include "RelogioTeste.h"
#include "iostream"
#include "Relogio.h"
int main(){
    int a,b,x,y,z;
        std::cout<<"por favor digite a Hora"<<std::endl;
        std::cin>>x;
        std::cout<<"por favor digite o Minuto"<<std::endl;
        std::cin>>y;
        std::cout<<"por favor digite o segundo"<<std::endl;
        std::cin>>z;

            if(x<0 || x>23){
                std::cout<<"Hora invalida colocando para hora 0"<<std::endl;
                x=0;
            }
            if(y<0 || y>59){
                std::cout<<"Minuto invalido colocando para minuto 0"<<std::endl;
                y=0;
            }
            if(z<0 || z>59){
                std::cout<<"Segundo invalido colocando para segundo 0"<<std::endl;
                z=0;
            }
    Relogio Teste;
    Teste.setHorario(x,y,z);
        std::cout<<"Relogio final :"<<Teste.getHora()<<"-"<<Teste.getMinuto()<<"-"<<Teste.getSegundo()<<std::endl;

        std::cout<<"quantos avancos voce gostaria de realizar?"<<std::endl;
        std::cin>>a;
            for(b=0;b<a;b++){
                Teste.avancarHorario();
                std::cout<<"Relogio atual :"<<Teste.getHora()<<"-"<<Teste.getMinuto()<<"-"<<Teste.getSegundo()<<std::endl;
            }
}
