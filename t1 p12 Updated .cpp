// Practical 12 lab 06/12/2021
// Task 1 : Complete Implementation of Access Inheritance .
#include <iostream>

using namespace std;

class A
{
    public :
       int x , y  ;
   
};
class B : public A
{
    public :
     void display()
     {
       //x = 10 ; // Inheritance b/c x,y are data members of Class A
       //y = 20 ; // Inheritance b/c x,y are data members of Class A
       cout<<"X = "<<x<<" Y = "<<y <<endl;
     }
};
int main()
{
    B obj ;
    obj.x = 30 ;
    obj.y = 40 ;
    obj.display(); 
    return 0;
}
