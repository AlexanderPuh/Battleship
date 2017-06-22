#ifndef ENEMYFLEET_H
#define ENEMYFLEET_H


class EnemyFleet
{
private:
    enum
      {
         ROWS = 10,
         ELEMENTS= 10
      };
     int field [ROWS][ELEMENTS];
public:
    EnemyFleet();
    void generateFleet();
};

#endif // ENEMYFLEET_H
