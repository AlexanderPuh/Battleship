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
multimap<int, int> shipCoordinates;

public:


    Fleet();
    ~Fleet();
    void createShip();
    check();
    void createField();
    void generateFleet();
};

#endif // SHIP_H
