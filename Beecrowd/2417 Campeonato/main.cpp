#include <iostream>

int main()
{
    int c[3];
    int f[3];
    int pTotalC;
    int pTotalF;
    char camp;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> c[i];
        if (i == 0)
            c[i] *= 3;
        if (i == 1)
            pTotalC = c[0] + c[i];
    }

    for (int i = 0; i < 3; i++)
    {
        std::cin >> f[i];
        if (i == 0)
            f[i] *= 3;
        if (i == 1)
            pTotalF = f[0] + f[i];
    }

    if (pTotalC > pTotalF)
        camp = 'C';
    else if (pTotalF > pTotalC)
        camp = 'F';
    else if (c[2] > f[2])
        camp = 'C';
    else if (f[2] > c[2])
        camp = 'F';
    else
        camp = '=';

    std::cout << camp << std::endl;

    return 0;
}