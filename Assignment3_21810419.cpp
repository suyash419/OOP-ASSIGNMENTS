#include<iostream>
using namespace std;
class shape
{
public:
    double length,height,area;
    virtual void get_data()
    {
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter Height : ";
        cin >> height;
    }
    virtual void display_area()
    {
        cout << "Area : " << length * height << endl;
    }

};
class triangle : public shape
{
public:
   void display_area()
   {
   area = 0.5 * length * height;
   cout << "Area : " << area << endl;
   }
};
class rectangle : public shape
{
public:
    void display_area()
    {
    area = length * height;
    cout << "Area : " << area << endl;
    }
};

class square : public shape
{
public:
    void get_data()
    {
        cout<<"Enter Length : ";
        cin >> length;
    }

    void display_area()
    {
        area = length * length;
        cout << "Area : " << area << endl;
    }

};
int main()
{
    triangle t;
    rectangle r;
    square s;
    shape *ptr = NULL;
    int sw = 0;
    while(sw != 4)
    {
       cout << "Select\n1. Area of Triangle\n2. Area of Rectangle\n3. Area of square\n4. Exit\n";
           cin >> sw;
           switch(sw)
           {
              case 1:
              ptr = &t;
              ptr -> get_data();
              ptr -> display_area();
              break;

              case 2:
              ptr = &r;
              ptr -> get_data();
              ptr -> display_area();
              break;

              case 3:
              ptr = &s;
              ptr -> get_data();
              ptr -> display_area();
              break;
              case 4:
              cout << "Exit.........\n";
              break;
              default:
              cout << "Invalid selection\n";
              break;
           }
   }
    return 0;
}
