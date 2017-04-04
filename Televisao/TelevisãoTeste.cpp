#include "TelevisãoTeste.h"
#include "iostream"

int main(){
    int a;
    Televisao Teste;
    std::cout<<"escolha a sua opcao"<<std::endl;
    std::cout<<"1 aumentar volume"<<std::endl;
    std::cout<<"2 reduzir volume"<<std::endl;
    std::cout<<"3 subir canal"<<std::endl;
    std::cout<<"4 descer canal"<<std::endl;
    std::cout<<"5 escolher canal"<<std::endl;
    std::cout<<"6 mostrar canal e volume atual"<<std::endl;
    std::cout<<"0 sair"<<std::endl;
    std::cout<<"canal :"<<Teste.getCanal<<"  volume :"<<Teste.getVolume<<std::endl;
    Teste.setVolume(10);
    Teste.setCanal(17);

    swicth()
        case 1{
            Teste.aumentarVolume
        }
        case 2{
            Teste.reduzirVolume
        }
        case 3{
            Teste.aumentarCanal
        }
        case 4{
            Teste.reduzirCanal
        }
        case 5{
            std::cout<<"escolha o novo canal"<<std::endl
            std::cin>>a
            Teste.setCanal(a)
        }
        case 6 {
            std::cout<<"canal :"<<Teste.getCanal<<"  volume :"<<Teste.getVolume<<std::endl
        }

        case 0 {
            return 0
        }

        default{
        std::cout<<"por favor escolha um opção valida"<<std::endl
        }
}
