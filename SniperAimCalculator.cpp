#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    float Range1 = 0.f;
    float Range2 = 0.f;
    int BC = 0;
    float Wind = 0.f;

    printf("credits: \n");
    printf("Classic1337 \n");
    printf("Gh0st \n");
    printf("------------ \n");

    printf("This is a program that uses range, ballistics coefficient \nand windspeed (m/s) to calculate windage hold-over \n");
    printf("------------ \n");

    printf("input Range:");
    std::cin >> Range1;

    printf("input BC:");
    std::cin >> BC;

    printf("input Wind:");
    std::cin >> Wind;

    Range2 = Range1 / 100;

    auto Calculated = (Wind * 2.23694) / BC * Range2;

    printf("Calcuated: %f \n", Calculated);
    system("pause");
}

//CREDITS:
//Gh0st - Math for m/s to mph
//Classic1337 - Creating the program