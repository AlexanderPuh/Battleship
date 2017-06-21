#ifndef ENEMYFLEET_H
#define ENEMYFLEET_H


class EnemyFleet
{
    enum
      {
         rows = 10,
         elements= 10
      };
     int field [rows][elements];
public:
    EnemyFleet();
    void generateFleet();
};

#endif // ENEMYFLEET_H
