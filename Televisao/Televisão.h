#ifndef TELEVIS„O_H
#define TELEVIS„O_H


class Televisao{
    private:
        int volume;
        int canal;
    public:
        void aumentarVolume();
        void reduzirVolume();
        int getVolume();
        int getCanal();
        void aumentarCanal();
        void reduzirCanal();
        void setCanal(int c);
        void setVolume(int v);
};
#endif // TELEVIS„O_H
