#include "view.h"
#include <iostream>
#include "controller.h"
using namespace std;
View::View()
{

}






void View::updateView(int fleetData[rows][elements]){

cout<<"Your fleet:"<<endl;
for(int i=0; i<rows; i++){
    for(int j=0; j<elements; j++){
        cout<<fleetData[rows][elements]<< " ";

    }
    cout << endl;
}
Controller*controller=new Controller();
controller->createShip();
}


/*
void View::finishView(){


}
*/
