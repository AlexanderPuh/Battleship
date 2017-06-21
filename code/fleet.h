#include <iostream>
using namespace std;

static const int coordinatesX = 10;
static const int coordinatesY = 10;
int fleet[coordinatesX][coordinatesY];

class Fleet
{

public:
    Fleet();
    ~Fleet();
    bool killShips(int x, int y);
};


bool killShips(int x,int y)
{



    int fleet[coordinatesX][coordinatesY];

        if(fleet[x][y] == 1)
        {
               fleet[x][y] = 2;
                return true;
        }
        return false;
}
