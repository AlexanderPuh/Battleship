#ifndef SHIP_H
#define SHIP_H
#include <map>
using namespace std;
class Fleet
{
    enum
      {
         rows=10,
         collumn=10,
      };

    int field [rows][collumn];

     int typeOfShip;
     int enemyField [rows][collumn];
     int hit;
     int enemyHit;
     int const maxHit=10;
     int const kill=2;
     int const miss=3;
     bool generatedFleet=0;
multimap<int, int> shipCoordinates;

public:


    Fleet();
    ~Fleet();
    void createShip();
    check();
    void createField();
    void showMyFleet();
    void generateFleet();
    void sinkTheShip(int rows, int collumn);
    void enemySink(int rows, int collumn);

};

#endif // SHIP_H
