#include "playerfleet.h"
#include "view.h"
#include "controller.h"
#include <iostream>
using namespace std;
PlayerFleet::PlayerFleet()
{


}

void PlayerFleet::createFleet(){

   for(int i=0; i<rows; i++){
       for(int j=0; j<rows; j++){

 field[i][j] = 0;



       }


   }

  View*view=new View();
   view->updateView(field);
}
void PlayerFleet::addToFleet(){


}
