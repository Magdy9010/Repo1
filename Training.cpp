#include <iostream>
#include <string>

double milesToKilometers(float distanceInMiles);

int main()
{
    float distanceInMiles;

    std::cout << "Please enter distance in miles\n" ;
    std::cin >> distanceInMiles ;

    std::cout << "Distance In Km = " <<  milesToKilometers(distanceInMiles) << std::endl;

    return 1;
}

double milesToKilometers(float distanceInMiles)
{
    constexpr float MILES_TO_KM = 1.609;

    return distanceInMiles * MILES_TO_KM ;
}