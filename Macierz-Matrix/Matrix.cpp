#include "Matrix.h"
#include <cstdlib>
#include <ctime>

// Konstruktor domyœlny
Matrix::Matrix() : n(0), data(nullptr) {}

// Konstruktor przeci¹¿eniowy alokuj¹cy macierz o wymiarach n na n
Matrix::Matrix(int size) : n(size) {
    alokuj(size);
}

// Konstruktor przeci¹¿eniowy przepisuj¹cy dane z tabeli
Matrix::Matrix(int size, int* t) : n(size) {
    alokuj(size);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = t[i * n + j];
        }
    }
}

// Konstruktor kopiuj¹cy
Matrix::Matrix(const Matrix& m) : n(m.n) {
    alokuj(m.n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = m.data[i][j];
        }
    }
}

// Destruktor
Matrix::~Matrix() {
    if (data != nullptr) {
        for (int i = 0; i < n; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
}

// Alokacja pamiêci
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

// Metoda do wstawiania wartoœci
Matrix& Matrix::wstaw(int x, int y, int wartosc) {
    if (x < n && y < n) {
        data[x][y] = wartosc;
    }
    return *this;
}

// Metoda do pokazywania wartoœci
int Matrix::pokaz(int x, int y) const {
    if (x < n && y < n) {
        return data[x][y];
    }
    return 0;
}

// Metoda do odwracania macierzy (transpozycja)
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

// Metoda do losowania wartoœci
Matrix& Matrix::losuj() {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            data[i][j] = rand() % 10;
        }
    }
    return *this;
}

// Metoda do losowania okreœlonej liczby elementów
Matrix& Matrix::losuj(int x) {
    srand(time(0));
    for (int i = 0; i < x; ++i) {
        int xi = rand() % n;
        int yj = rand() % n;
        data[xi][yj] = rand() % 10;
    }
    return *this;
}

// Przyk³adowy operator wypisania
std::ostream& operator<<(std::ostream& o, const Matrix& m) {
    for (int i = 0; i < m.n; ++i) {
        for (int j = 0; j < m.n; ++j) {
            o << m.data[i][j] << " ";
        }
        o << "\n";
    }
    return o;
}
