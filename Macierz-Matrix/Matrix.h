#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
private:
    int n;
    int** data;

public:
    // Konstruktor domy�lny
    Matrix();

    // Konstruktor przeci��eniowy alokuj�cy macierz o wymiarach n na n
    Matrix(int size);

    // Konstruktor przeci��eniowy przepisuj�cy dane z tabeli
    Matrix(int size, int* t);

    // Konstruktor kopiuj�cy
    Matrix(const Matrix& m);

    // Destruktor
    ~Matrix();

    // Alokacja pami�ci
    Matrix& alokuj(int size);

    // Metoda do wstawiania warto�ci
    Matrix& wstaw(int x, int y, int wartosc);

    // Metoda do pokazywania warto�ci
    int pokaz(int x, int y) const;

    // Metoda do odwracania macierzy (transpozycja)
    Matrix& dowroc();

    // Metoda do losowania warto�ci
    Matrix& losuj();

    // Metoda do losowania okre�lonej liczby element�w
    Matrix& losuj(int x);

    // Przyk�adowy operator wypisania
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H
