#include <iostream>

int main()
{
    int a, b, c;
    int viceCamp;

    std::cin >> a >> b >> c;

    if ((a > b and a < c) or (a < b and a > c))
    {
        viceCamp = a;
    }
    else if ((b > a and b < c) or (b < a and b > c))
    {
        viceCamp = b;
    }
    else
    {
        viceCamp = c;
    }

    std::cout << viceCamp << std::endl;

    return 0;
}