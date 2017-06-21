#include "controller.h"
#include "playerfleet.h"
#include <iostream>
#include "fleet.h"
using namespace std;
Controller::Controller()
{

}
void Controller::createFleet(){

    cout<<"The game started"<<endl;
    cout<<"Please, create your fleet"<<endl;
PlayerFleet*fleet=new PlayerFleet();
fleet->createFleet();
}

void Controller:: createShip(){
cout<<"Now you have to create ships"<<endl;
Fleet*adapter=new Fleet();
adapter->createShip();

}
void Controller::sinkTheShip(){


}

