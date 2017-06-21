#ifndef SHIP_H
#define SHIP_H


class Ship
{
    enum
      {
         coordinatesX = 10,
         coordinatesY= 10
      };
     int ship [coordinatesX][coordinatesY];
     int typeOfShip;
public:
    Ship();
    ~Ship();
   void createShip(int x, int y);
};

#endif // SHIP_H
