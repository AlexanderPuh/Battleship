#include "view.h"
#include <iostream>
#include "controller.h"
using namespace std;
View::View()
{

}






void View::updateView(int fleetData[ROWS][ELEMENTS]){

cout<<"Your fleet:"<<endl;
for(int i=0; i<ROWS; i++){
    for(int j=0; j<ELEMENTS; j++){
        cout<<fleetData[ROWS][ELEMENTS]<< " ";

    }
    cout << endl;
}
Controller*controller=new Controller();
controller->createShip();
}



void View::finishView(){
cout<<"***YOU WIN***"<<endl;

}

