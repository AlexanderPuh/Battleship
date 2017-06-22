#ifndef SHIP_H
#define SHIP_H


class Ship
{
 private:
    enum
      {


         COORDINATES_X = 10,
         COORDINATES_Y= 10
      };
     int ship [COORDINATES_X][COORDINATES_Y];
     int typeOfShip;
public:
    Ship();
    ~Ship();
   void createShip(int x, int y);
};

#endif // SHIP_H
