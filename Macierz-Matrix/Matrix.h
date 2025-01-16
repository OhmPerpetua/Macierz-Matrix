#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

/**
 * @class Matrix
 * @brief Klasa reprezentuj�ca macierz kwadratow�.
 */
class Matrix {
private:
    int n; ///< Rozmiar macierzy.
    int** data; ///< Wska�nik do danych macierzy.

public:
    /**
     * @brief Konstruktor domy�lny.
     */
    Matrix();

    /**
     * @brief Konstruktor przeci��eniowy alokuj�cy macierz o wymiarach n na n.
     *
     * @param size Rozmiar macierzy.
     */
    Matrix(int size);

    /**
     * @brief Konstruktor przeci��eniowy przepisuj�cy dane z tabeli.
     *
     * @param size Rozmiar macierzy.
     * @param t Tablica z danymi do przepisania.
     */
    Matrix(int size, int* t);

    /**
     * @brief Konstruktor kopiuj�cy.
     *
     * @param m Obiekt klasy Matrix do skopiowania.
     */
    Matrix(const Matrix& m);

    /**
     * @brief Destruktor.
     */
    ~Matrix();

    /**
     * @brief Alokacja pami�ci dla macierzy.
     *
     * @param size Rozmiar macierzy.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& alokuj(int size);

    /**
     * @brief Metoda do wstawiania warto�ci do macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @param wartosc Warto�� do wstawienia.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& wstaw(int x, int y, int wartosc);

    /**
     * @brief Metoda do pokazywania warto�ci z macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @return int Warto�� z macierzy.
     */
    int pokaz(int x, int y) const;

    /**
     * @brief Metoda do odwracania macierzy (transpozycja).
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& dowroc();

    /**
     * @brief Metoda do losowania warto�ci w macierzy.
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj();

    /**
     * @brief Metoda do losowania okre�lonej liczby element�w w macierzy.
     *
     * @param x Liczba element�w do wylosowania.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj(int x);

    /**
     * @brief Operator wypisania macierzy.
     *
     * @param o Strumie� wyj�ciowy.
     * @param m Obiekt klasy Matrix do wypisania.
     * @return std::ostream& Referencja do strumienia wyj�ciowego.
     */
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H

