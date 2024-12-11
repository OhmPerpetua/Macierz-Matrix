#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
private:
    int n;
    int** data;

public:
    // Konstruktor domyœlny
    Matrix();

    // Konstruktor przeci¹¿eniowy alokuj¹cy macierz o wymiarach n na n
    Matrix(int size);

    // Konstruktor przeci¹¿eniowy przepisuj¹cy dane z tabeli
    Matrix(int size, int* t);

    // Konstruktor kopiuj¹cy
    Matrix(const Matrix& m);

    // Destruktor
    ~Matrix();

    // Alokacja pamiêci
    Matrix& alokuj(int size);

    // Metoda do wstawiania wartoœci
    Matrix& wstaw(int x, int y, int wartosc);

    // Metoda do pokazywania wartoœci
    int pokaz(int x, int y) const;

    // Metoda do odwracania macierzy (transpozycja)
    Matrix& dowroc();

    // Metoda do losowania wartoœci
    Matrix& losuj();

    // Metoda do losowania okreœlonej liczby elementów
    Matrix& losuj(int x);

    // Przyk³adowy operator wypisania
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H
