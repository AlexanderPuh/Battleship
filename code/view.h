#include <iostream>
using namespace std;

class View
{
public:
  static  const int coordinatesX = 10;
   static const int coordinatesY = 10;


   int fleet[coordinatesX][coordinatesY];

public:
    View();
    ~View();
    void Clear();
    void Show();
};

void update()
{
        for(int i=0; i < coordinatesX; i++)
        {
                for(int j=0; j <coordinatesY; j++)
                {
                        fleet[i][j] = 0;
                }
        }
}

void display()
{
        for(int i=0; i < coordinatesX; i++)
        {
                for(int j=0; j < coordinatesY; j++)
                {
                        cout << fleet[i][j] << " ";
                }
                cout << endl;
        }
}
