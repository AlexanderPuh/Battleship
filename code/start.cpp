#include <iostream>
#include <enemyfleet.h>
#include <fleet.h>
#include <view.h>
#include <ctime>
#include <QCoreApplication>
using namespace std;


int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    srand(time(NULL));
   update();
    generateFleet();
    int pos1,pos2;
    char prompt;
    while(1)
    {
            cout << "Please input location: "; cin >> pos1 >> pos2;
            if(killShips(pos1,pos2))
                    cout << "You got me! :)" << endl;
            else
                    cout << "Sorry no ship at that position!" << endl;
            cout << "Do you want to surrender (y/n)? "; cin >> prompt;
            if(prompt == 'y')
                    break;
    }
    cout << "Game over!" << endl;
    display();
    system("pause");
    return a.exec();
}
