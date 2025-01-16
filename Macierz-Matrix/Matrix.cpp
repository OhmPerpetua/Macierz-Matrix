#include "Matrix.h"
#include <cstdlib>
#include <ctime>

/**
 * @file Matrix.cpp
 * @brief Implementacja metod klasy Matrix.
 */

 /**
  * @brief Konstruktor domyœlny.
  */
Matrix::Matrix() : n(0), data(nullptr) {}

/**
 * @brief Konstruktor przeci¹¿eniowy alokuj¹cy macierz o wymiarach n na n.
 *
 * @param size Rozmiar macierzy.
 */
Matrix::Matrix(int size) : n(size) {
    alokuj(size);
}

/**
 * @brief Konstruktor przeci¹¿eniowy przepisuj¹cy dane z tabeli.
 *
 * @param size Rozmiar macierzy.
 * @param t Tablica z danymi do przepisania.
 */
Matrix::Matrix(int size, int* t) : n(size) {
    alokuj(size);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = t[i * n + j];
        }
    }
}

/**
 * @brief Konstruktor kopiuj¹cy.
 *
 * @param m Obiekt klasy Matrix do skopiowania.
 */
Matrix::Matrix(const Matrix& m) : n(m.n) {
    alokuj(m.n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = m.data[i][j];
        }
    }
}

/**
 * @brief Destruktor.
 */
Matrix::~Matrix() {
    if (data != nullptr) {
        for (int i = 0; i < n; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
}

/**
 * @brief Alokacja pamiêci dla macierzy.
 *
 * @param size Rozmiar macierzy.
 * @return Matrix& Referencja do obiektu Matrix.
 */
Matrix& Matrix::alokuj(int size) {
    if (data != nullptr) {
        if (size == n) {
            return *this;
        }
        else {
            for (int i = 0; i < n; ++i) {
                delete[] data[i];
            }
            delete[] data;
        }
    }
    n = size;
    data = new int* [n];
    for (int i = 0; i < n; ++i) {
        data[i] = new int[n];
    }
    return *this;
}

/**
 * @brief Metoda do wstawiania wartoœci do macierzy.
 *
 * @param x Wiersz.
 * @param y Kolumna.
 * @param wartosc Wartoœæ do wstawienia.
 * @return Matrix& Referencja do obiektu Matrix.
 */
Matrix& Matrix::wstaw(int x, int y, int wartosc) {
    if (x < n && y < n) {
        data[x][y] = wartosc;
    }
    return *this;
}

/**
 * @brief Metoda do pokazywania wartoœci z macierzy.
 *
 * @param x Wiersz.
 * @param y Kolumna.
 * @return int Wartoœæ z macierzy.
 */
int Matrix::pokaz(int x, int y) const {
    if (x < n && y < n) {
        return data[x][y];
    }
    return 0;
}

/**
 * @brief Metoda do odwracania macierzy (transpozycja).
 *
 * @return Matrix& Referencja do obiektu Matrix.
 */
Matrix& Matrix::dowroc() {
    Matrix temp(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp.data[j][i] = data[i][j];
        }
    }
    *this = temp;
    return *this;
}

/**
 * @brief Metoda do losowania wartoœci w macierzy.
 *
 * @return Matrix& Referencja do obiektu Matrix.
 */
Matrix& Matrix::losuj() {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = rand() % 10;
        }
    }
    return *this;
}

/**
 * @brief Metoda do losowania okreœlonej liczby elementów w macierzy.
 *
 * @param x Liczba elementów do wylosowania.
 * @return Matrix& Referencja do obiektu Matrix.
 */
Matrix& Matrix::losuj(int x) {
    srand(time(0));
    for (int i = 0; i < x; ++i) {
        int xi = rand() % n;
        int yj = rand() % n;
        data[xi][yj] = rand() % 10;
    }
    return *this;
}

/**
 * @brief Operator wypisania macierzy.
 *
 * @param o Strumieñ wyjœciowy.
 * @param m Obiekt klasy Matrix do wypisania.
 * @return std::ostream& Referencja do strumienia wyjœciowego.
 */
std::ostream& operator<<(std::ostream& o, const Matrix& m) {
    for (int i = 0; i < m.n; ++i) {
        for (int j = 0; j < m.n; ++j) {
            o << m.data[i][j] << " ";
        }
        o << "\n";
    }
    return o;
}
