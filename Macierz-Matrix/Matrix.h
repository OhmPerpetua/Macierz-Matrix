#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

/**
 * @class Matrix
 * @brief Klasa reprezentująca macierz kwadratową.
 */
class Matrix {
private:
    int n; ///< Rozmiar macierzy.
    int** data; ///< Wskaźnik do danych macierzy.

public:
    /**
     * @brief Konstruktor domyślny.
     */
    Matrix();

    /**
     * @brief Konstruktor przeciążeniowy alokujący macierz o wymiarach n na n.
     *
     * @param size Rozmiar macierzy.
     */
    Matrix(int size);

    /**
     * @brief Konstruktor przeciążeniowy przepisujący dane z tabeli.
     *
     * @param size Rozmiar macierzy.
     * @param t Tablica z danymi do przepisania.
     */
    Matrix(int size, int* t);

    /**
     * @brief Konstruktor kopiujący.
     *
     * @param m Obiekt klasy Matrix do skopiowania.
     */
    Matrix(const Matrix& m);

    /**
     * @brief Destruktor.
     */
    ~Matrix();

    /**
     * @brief Alokacja pamięci dla macierzy.
     *
     * @param size Rozmiar macierzy.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& alokuj(int size);

    /**
     * @brief Metoda do wstawiania wartości do macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @param wartosc Wartość do wstawienia.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& wstaw(int x, int y, int wartosc);

    /**
     * @brief Metoda do pokazywania wartości z macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @return int Wartość z macierzy.
     */
    int pokaz(int x, int y) const;

    /**
     * @brief Metoda do odwracania macierzy (transpozycja).
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& dowroc();

    /**
     * @brief Metoda do losowania wartości w macierzy.
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj();

    /**
     * @brief Metoda do losowania określonej liczby elementów w macierzy.
     *
     * @param x Liczba elementów do wylosowania.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj(int x);

    /**
     * @brief Operator wypisania macierzy.
     *
     * @param o Strumień wyjściowy.
     * @param m Obiekt klasy Matrix do wypisania.
     * @return std::ostream& Referencja do strumienia wyjściowego.
     */
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H

