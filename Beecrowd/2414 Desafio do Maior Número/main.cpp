#include <iostream>

int main()
{
    int maior = 0, aux;

    while (1)
    {
        std::cin >> aux;

        if (aux == 0)
            break;

        if (maior < aux)
            maior = aux;
    }

    std::cout << maior << std::endl;

    return 0;
}