#include "catch.hpp"
#pragma once

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)



class Tagliatelle
{
private:
    double L; // długość kawałka makaronu
    double W; // szerokość kawałka makaronu
    double R; // proporcja jajek do mąki

    static const double C; // stała zadeklarowana, ale nie zdefiniowana tutaj

public:
    // Konstruktor domyślny
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

    // Konstruktor parametryczny
    Tagliatelle(double length, double width, double ratio) : L(length), W(width), R(ratio) {}

    // Metoda ileMaki zwracająca masę mąki dla P porcji
    double ileMaki(unsigned P) const { return P * L * W * (1.0 - R) * C; }
};