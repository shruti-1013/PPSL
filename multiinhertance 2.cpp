#include <iostream>
using namespace std;

class Shape
{
  public:
  void shape()
  {
    cout<<"This is a shape. "<<endl;
  }
};
class Polygon: public Shape
{
  public:
  void polygon()
  {
    cout<<"polygon is shape."<<endl;
  }
};
class Rectangle: public Polygon
{
  public:
  void rectangle()
  {
    cout<<"Rectangle is polygon ."<<endl;
  }
};
class Triangle: public Rectangle
{
  public:
  void triangle()
  {
    cout<<"Triangl is polygon ."<<endl;
  }
};
class Square: public Triangle
{
  public:
  void square()
  {
    cout<<"Square is rectangle."<<endl;
  }
};
int main()
{
  Square  s1;
  s1.square();
  s1.triangle();
  s1.rectangle();
  s1.polygon();
  s1.shape();
  
  return 0;
  
}