#include <iostream>
int main()
{
    //Задание 1: Представление компилятором в памяти различных специкаторов.
    std::cout << "int = " << sizeof(int) << "\n";
    std::cout << "short int = " << sizeof(short int) << "\n";
    std::cout << "long int = " << sizeof(long long int) << "\n";
    std::cout << "float = " << sizeof(float) << "\n";
    std::cout << "double = " << sizeof(double) << "\n";
    std::cout << "long double = " << sizeof(long double) << "\n";
    std::cout << "char = " << sizeof(char) << "\n";
    std::cout << "bool = " << sizeof(bool) << "\n\n";
    //Задание 2: Представление компилятором(в двоичном представлении) спецификатора int, как signed, так и unsigned.
    int v1;
    int o1 = sizeof(v1) * 8;
    int m1 = 1 << o1 - 1;
    std::cout << "int v1 = ";
    std::cin >> v1;
    std::cout << "mask v1 = +";
    for (int i = 1; i <= o1; i++) {
        putchar(v1 & m1 ? '1' : '0');
        v1 <<= 1;
        if (i % o1 - 1 == 0)
        {
            putchar(' ');
        }
        while (i < o1) {
            putchar(v1 & m1 ? '+' : '-'); // "+" для значащих битов и "-" для незначащих
            break;
        }
    }
    std::cout << "\n";
    //Задание 3: Представление компилятором(в двоичном представлении) спецификатора float, как signed, так и unsigned.
    union {
        int t1;
        float v2;
    };
    std::cout << "float v2 = ";
    std::cin >> v2;
    int o2 = sizeof(v2) * 8;
    int m2 = 1 << o2 - 1;
    std::cout << "mask v2 = ";
    for (int i = 1; i <= o2; i++) {
        putchar(t1 & m2 ? '1' : '0');
        t1 <<= 1;
        if (i % o2 - 1 == 0)
        {
            putchar(' ');
        }
        if (i == 9)
        {
            putchar(' ');
        }
    }
    return 0;
}