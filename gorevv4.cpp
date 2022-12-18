#include <iostream>

#include <clocale>

using namespace std;

// Define a struct to represent a point in 2D space
struct Country {
    string name;
    string Capital;
};
struct Province {
    string name;
    Country* country;
};

int main() {
    setlocale(LC_ALL, "Turkish");
    Country turkey;
    Province istanbul;
    turkey.name = "Türkiye";
    turkey.Capital = "Ankara";
    istanbul.name ="İstanbul";
    istanbul.country =&turkey;
    std::cout<<istanbul.country->Capital;





}
