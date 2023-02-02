#include <iostream>

struct Carro{
    std::string nome;
    std::string cor;
    int pot, velMax,vel;

    void inserir(std::string stnome, std::string stcor, int stpot, int stvelmax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelmax;
        vel=0;

    }
    void mostrar(){
        std::cout << "PRIMEIRO CARRO: " <<"\n\n";
        std::cout << "Nome..........: " << nome << '\n';
        std::cout << "Cor...........: " << cor << '\n';
        std::cout << "Potencia......: " << pot << '\n';
        std::cout << "Velocidade MAX: " << velMax << "\n\n";
    }

    void mudaVel(int mv){
        vel = mv;
        if(vel>velMax){
            vel=velMax;
        }
        if(vel<0){
            vel=0;
        }
    }

};

int main(){
    Carro *carros = new Carro[5];
    Carro carro1, carro2, carro3,carro4,carro5;

    carros[0]=carro1; carros[1]=carro2; carros[2]=carro3; carros[3]=carro4; carros[4]=carro5;

    carros[0].inserir("Mercedes v8", "Prata", 370, 300);
    carros[1].inserir("Mercedes Benz", "Blue", 450, 380);
    carros[2].inserir("Audi TT", "Green", 200, 200);
    carros[3].inserir("Impala 67", "Black", 320, 220);
    carros[4].inserir("Subaru", "White", 380, 240);

    for(int i=0; i<5; i++){
        carros[i].mostrar();
    }

    return 0;
}
