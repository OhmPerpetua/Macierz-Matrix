#include "Matrix.h"

/**
 * @file main.cpp
 * @brief G³ówny plik programu testuj¹cego klasê Matrix.
 */

 /**
  * @brief Funkcja g³ówna programu.
  *
  * Tworzy obiekty klasy Matrix, wykonuje operacje na macierzach i wyœwietla wyniki.
  *
  * @return int Kod zakoñczenia programu.
  */
int main() {
    // Testowanie funkcji
    int size = 5;
    int* table = new int[size * size];

    // Automatyczne wype³nianie tablicy wartoœciami od 1 do 16
    for (int i = 0; i < size * size; ++i) {
        table[i] = i + 1;
    }

    /**
     * @brief Tworzenie macierzy m1 o rozmiarze 4x4.
     */
    Matrix m1(size, table);
    std::cout << "Macierz m1:\n" << m1 << std::endl;

    /**
     * @brief Tworzenie kopii macierzy m1.
     */
    Matrix m2 = m1;
    std::cout << "Macierz skopiowana m2:\n" << m2 << std::endl;

    /**
     * @brief Wstawianie wartoœci 99 do macierzy m2 na pozycji (2, 2).
     */
    m2.wstaw(2, 2, 99);
    std::cout << "Macierz m2 po wstawieniu wartosci:\n" << m2 << std::endl;

    /**
     * @brief Losowanie wartoœci w macierzy m2.
     */
    m2.losuj();
    std::cout << "Macierz m2 po losowaniu wartosci:\n" << m2 << std::endl;

    return 0;
}
