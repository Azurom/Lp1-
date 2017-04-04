#include "Televisão.h"


    void Televisao::aumentarVolume{
        volume++;
    }

    void Televisao::reduzirVolume{
        volume--;
    }

    int Televisao::getVolume{
        return volume;
    }

    int Televisao::getCanal{
        return canal;
    }

    void Televisao::aumentarCanal{
        canal++;
    }
    void Televisao::reduzirCanal{
        canal--;
    }

    void Televisao::setCanal(int c){
        canal = c;
    }

    void Televisao::setVolume(int v){
        volume = v;
    }
