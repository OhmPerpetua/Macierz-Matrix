#include "Matrix.h"

int main() {
    // Testowanie funkcji
    int size = 4;
    int table[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

    Matrix m1(size, table);
    std::cout << "Macierz m1:\n" << m1 << std::endl;

    Matrix m2 = m1;
    std::cout << "Macierz skopiowana m2:\n" << m2 << std::endl;

    m2.wstaw(2, 2, 99);
    std::cout << "Macierz m2 po wstawieniu wartosci:\n" << m2 << std::endl;

    m2.losuj();
    std::cout << "Macierz m2 po losowaniu wartosci:\n" << m2 << std::endl;

    return 0;
}
