#ifndef SQUARES_H
#define SQUARES_H

#include <iostream>
#include <sstream>
#include <string>

namespace shapes
{
    class Square1
    {
    public:
      int side;
      Square1()
      {
        side = 1;
        std::cout << "Object in Square1 has been created by construction \n ";
      }
      Square1(int side)
      {
        this->side = side;
        std:: cout << "Object in Square1 has been created by the overloaded construction \n ";
      }
      ~Square1()
      {
        std::cout <<"Square1: object has been destroyed \n";
      }
    };

    class Square2
    {
    public:
     int* side;
     Square2()
     {
       side = new int;
       *side = 1;
       std::cout << " Square2 : Object has been created by construction \n ";
     }
     Square2(int side)
     {
       this->side= new int;
       *(this->side) = side;
       std::cout << " Square2 : Object has been created by the overloaded construction \n ";
     }
     ~Square2()
     {
       delete side;
       std::cout << " Square2: object has been destroyed| \n";
     }
    };

}
#endif
