#ifndef VIEW_H
#define VIEW_H


class View
{

    enum
       {
          rows = 10,
          elements= 10
       };
      int fleetData [rows][elements];
public:
    View();
    void updateView(int fleetData[rows][elements]);
   void finishView();
   /* void display();*/
};

#endif // VIEW_H
