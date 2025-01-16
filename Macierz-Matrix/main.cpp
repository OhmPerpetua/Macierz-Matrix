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
    int size = 4;
    int table[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

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
