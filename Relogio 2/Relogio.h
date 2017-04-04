#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio{
    private:
        int hora;
        int min;
        int seg;
    public:
        void setHorario(int h,int m,int s);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();
};

#endif // RELOGIO_H
