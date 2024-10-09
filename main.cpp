#include <iostream>
struct casa {
    float frente;
    float fondo;
    int banos;
    int habitaciones;
    int codigopostal;
    char calle[20];
};

struct personaje {
    int fuerza;
    int destreza;
    int inteligencia;
    int resistencia;
    int arcano;
    int fe;
};

struct persona {
    int edad;
    float altura;
    float peso;
};

struct estudiante {
    int semestre;
    float promedio;
    persona mancillas;
};

int main() {
    casa skibidi;
    skibidi.frente = 25.5;
    skibidi.fondo = 30.5;
    skibidi.banos = 3;
    skibidi.habitaciones = 3;
    skibidi.codigopostal = 44495;

    personaje plancton;
    plancton.fuerza = 88;
    plancton.destreza = 55;
    plancton.inteligencia = 45;
    plancton.resistencia = 69;
    plancton.arcano = 96;
    plancton.fe = 75;

    persona mancillas = {21, 1.79, 65.5};
    estudiante videojuegos = {6, 6.5, mancillas};

    casa* point;
    point = &skibidi;

    personaje* point2;
    point2 = &plancton;

    std::cout << "Frente de la casa: " << point->frente << std::endl;
    std::cout << "Fondo de la casa: " << point->fondo << std::endl;
    std::cout << "Banos de la casa: " << point->banos << std::endl;


    std::cout << "Fuerza del personaje: " << point2->fuerza << std::endl;
    std::cout << "Destreza del personaje: " << point2->destreza << std::endl;

    return 0;
}
