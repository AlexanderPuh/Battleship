#include <iostream>
using namespace std;

class EnemyFleet
{
public:
    static const int rows = 10;
    static const int elements = 10;
    int maxships = 10;
    int matrix[rows][elements];
public:
    EnemyFleet();
    ~EnemyFleet();
    void SetShips();

};

void generateFleet()
{
    static const int coordinatesX = 10;
    static const int coordinatesY = 10;
    int fleet[coordinatesX][coordinatesY];
        int s = 0;
        while(s < 10)
        {
                int x = rand() % coordinatesX;
                int y = rand() % coordinatesY;
                if(fleet[x][y] != 1)
                {
                        s++;
                        fleet[x][y] = 1;
                }
        }
}
