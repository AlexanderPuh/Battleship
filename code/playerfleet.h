#ifndef FLEET_H
#define FLEET_H


class PlayerFleet
{
enum
  {
     rows = 10,
     elements= 10
  };
 int field [rows][elements];

public:
    PlayerFleet();
    ~PlayerFleet();
    void createFleet();
    void addToFleet();
};


#endif // FLEET_H

