#include "Relogio.h"

        int Relogio::getHora(){
            return hora;
        }
        int Relogio::getMinuto(){
            return min;
        }
        int Relogio::getSegundo(){
            return seg;
        }

        void Relogio::setHorario(int h,int m,int s){
            hora=h;
            min=m;
            seg=s;
        }

        void Relogio::avancarHorario(){
            if(hora==23 && min==59 && seg==59){
                hora=0; min=0; seg=0;
            }
            else if(min==59 && seg==59){
                hora++; min=0; seg=0;
            }
            else if(seg==59){
                min++; seg=0;
            }
            else if(seg!=59){
                seg++;
            }
        }
