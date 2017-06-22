#ifndef SHIP_H
#define SHIP_H
#include <map>
using namespace std;
class Fleet
{
private:
    enum
      {
         ROWS=10,
         COLLUMN=10,
      };

    int field [ROWS][COLLUMN];

     int typeOfShip;
     int enemyField [ROWS][COLLUMN];
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
    void sinkTheShip(int ROWS, int COLLUMN);
    void enemySink(int ROWS, int COLLUMN);

};

#endif // SHIP_H
