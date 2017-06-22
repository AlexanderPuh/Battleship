#ifndef VIEW_H
#define VIEW_H


class View
{
private:
    enum
       {
          ROWS = 10,
          ELEMENTS= 10
       };
      int fleetData [ROWS][ELEMENTS];
public:
    View();
    void updateView(int fleetData[ROWS][ELEMENTS]);
   void finishView();
   /* void display();*/
};

#endif // VIEW_H
