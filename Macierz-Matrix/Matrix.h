#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

/**
 * @class Matrix
 * @brief Klasa reprezentuj¹ca macierz kwadratow¹.
 */
class Matrix {
private:
    int n; ///< Rozmiar macierzy.
    int** data; ///< WskaŸnik do danych macierzy.

public:
    /**
     * @brief Konstruktor domyœlny.
     */
    Matrix();

    /**
     * @brief Konstruktor przeci¹¿eniowy alokuj¹cy macierz o wymiarach n na n.
     *
     * @param size Rozmiar macierzy.
     */
    Matrix(int size);

    /**
     * @brief Konstruktor przeci¹¿eniowy przepisuj¹cy dane z tabeli.
     *
     * @param size Rozmiar macierzy.
     * @param t Tablica z danymi do przepisania.
     */
    Matrix(int size, int* t);

    /**
     * @brief Konstruktor kopiuj¹cy.
     *
     * @param m Obiekt klasy Matrix do skopiowania.
     */
    Matrix(const Matrix& m);

    /**
     * @brief Destruktor.
     */
    ~Matrix();

    /**
     * @brief Alokacja pamiêci dla macierzy.
     *
     * @param size Rozmiar macierzy.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& alokuj(int size);

    /**
     * @brief Metoda do wstawiania wartoœci do macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @param wartosc Wartoœæ do wstawienia.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& wstaw(int x, int y, int wartosc);

    /**
     * @brief Metoda do pokazywania wartoœci z macierzy.
     *
     * @param x Wiersz.
     * @param y Kolumna.
     * @return int Wartoœæ z macierzy.
     */
    int pokaz(int x, int y) const;

    /**
     * @brief Metoda do odwracania macierzy (transpozycja).
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& dowroc();

    /**
     * @brief Metoda do losowania wartoœci w macierzy.
     *
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj();

    /**
     * @brief Metoda do losowania okreœlonej liczby elementów w macierzy.
     *
     * @param x Liczba elementów do wylosowania.
     * @return Matrix& Referencja do obiektu Matrix.
     */
    Matrix& losuj(int x);

    /**
     * @brief Operator wypisania macierzy.
     *
     * @param o Strumieñ wyjœciowy.
     * @param m Obiekt klasy Matrix do wypisania.
     * @return std::ostream& Referencja do strumienia wyjœciowego.
     */
    friend std::ostream& operator<<(std::ostream& o, const Matrix& m);
};

#endif // MATRIX_H

