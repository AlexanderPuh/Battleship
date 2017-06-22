#include "fleet.h"
#include "ship.h"
#include <iostream>
#include <map>
#include <algorithm>
#include <playerfleet.h>
#include <view.h>

using namespace std;
Fleet::Fleet()
{

}
void Fleet::createShip(){
cout<<"Adapter";
int x,y;
while(shipCoordinates.size()<10){
        cout<<"Coordinates of ship"<<endl;
        cin>>x;
        cin>>y;
            if(x<=rows && y<=rows){
            auto itShip=shipCoordinates.begin();
            auto searchX = shipCoordinates.find(x);
                if(searchX != shipCoordinates.end() ) {
                    cout << "Found " << searchX->first << " " << searchX->second << endl;
                    if(searchX->first==x&&searchX->second==y){
                        cout<<"Please try again";
                    }else{
                        shipCoordinates.insert(make_pair(x,y));
                        for(itShip=shipCoordinates.begin(); itShip!=shipCoordinates.end(); itShip++){
                            cout << itShip->first << " : " << itShip->second<< endl;
                         }
                         }

                }
           else{
                  shipCoordinates.insert(make_pair(x,y));
                  for(itShip=shipCoordinates.begin(); itShip!=shipCoordinates.end(); itShip++){
                                  cout << itShip->first << " : " << itShip->second<< endl;
                              }
                 }
                } else{
                         cout<<"Please try again. invalid value of coordinates";
                     }
   }
createField();

}


void Fleet::createField(){

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
               auto searchX = shipCoordinates.find(i);
                   if(searchX != shipCoordinates.end() ) {
                       if(searchX->first==i&&searchX->second==j){
                           field[i][j] = 1;
                       }else{
                           field[i][j]=0;
                       }
                   }
        }
    }
showMyFleet();
}
 void Fleet::showMyFleet(){
     cout<<"My Fleet:"<<endl;
                for(int i=0; i<rows; i++){
                    for(int j=0; j<rows; j++){
                      cout<<field[i][j]<<"";
                    }
                    cout<<endl;
                }
generateFleet();

 }
void Fleet::sinkTheShip(int rows, int collumn){

        if(enemyField[rows][collumn] == 1)
                {
                       enemyField[rows][collumn] = kill;
                       cout<<"You got it";
                       hit++;
                       if(hit==maxHit){
                           View view;
                           view.finishView();

                       }
                generateFleet();
        }
        else {
            cout<<"You missed";
            enemyField[rows][collumn]=miss;
            int max=10;
            int x = rand() % max;
            int y = rand() % max;
            enemySink(x,y);
        }

    }
void Fleet::enemySink(int rows, int collumn){
    if(field[rows][collumn] ==1)
    {
        field[rows][collumn] = kill;
        cout<<"Enemy got it";
        enemyHit++;
        if(enemyHit==maxHit){
            cout<<"Enemy Win!"<<endl;
        }
        showMyFleet();
    }
    else {
        field[rows][collumn]=miss;
        cout<<"Enemy missed";
        showMyFleet();
    }
}


void Fleet::generateFleet(){
    int s = 0;
    if(generatedFleet==0){
           while(s < rows)
           {
                   int x = rand() % rows;
                   int y = rand() % collumn;
                   if(enemyField[x][y] != 1)
                   {
                      s++;
                      enemyField[x][y] = 1;
                   }
           }
           cout<<"Enemy Fleet:"<<endl;
                      for(int i=0; i<rows; i++){
                          for(int j=0; j<rows; j++){
                            cout<<enemyField[i][j]<<"";
                          }
                          cout<<endl;
                      }
                      generatedFleet=1;
                      cout<<"Please make you shot";
                      int x,y;
                      cin>>x;
                      cin>>y;
                      sinkTheShip(x,y);
    }else{
            generatedFleet=1;
            cout<<"Enemy Fleet:"<<endl;
                for(int i=0; i<rows; i++){
                    for(int j=0; j<rows; j++){
                    cout<<enemyField[i][j]<<"";
                    }
                    cout<<endl;
                 }
           generatedFleet=1;
           cout<<"Please make you shot";
           int x,y;
           cin>>x;
           cin>>y;
           sinkTheShip(x,y);
}
}





