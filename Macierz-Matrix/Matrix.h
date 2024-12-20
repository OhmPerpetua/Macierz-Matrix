#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
private:
    int n;
    int** data;

public:
    // Konstruktor domyślny
    Matrix();

    // Konstruktor przeciążeniowy alokujący macierz o wymiarach n na n
    Matrix(int size);

    // Konstruktor przeciążeniowy przepisujący dane z tabeli
    Matrix(int size, int* t);

    // Konstruktor kopiujący
    Matrix(const Matrix& m);

    // Destruktor
    ~Matrix();

    // Alokacja pamięci
    Matrix& alokuj(int size);

    // Metoda do wstawiania wartości
    Matrix& wstaw(int x, int y, int wartosc);

    // Metoda do pokazywania wartości
    int pokaz(int x, int y) const;

    // Metoda do odwracania macierzy (transpozycja)
    Matrix& dowroc();

    // Metoda do losowania wartości
    Matrix& losuj();

    // Metoda do losowania określonej liczby elementów
    Matrix& losuj(int x);

    // Przykładowy operator wypisania
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H
