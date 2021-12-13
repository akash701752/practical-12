// Practical 12 lab 06/12/2021
// Task 1 V2 : Access Specifiers in Inheritance .
#include <iostream>

using namespace std;

class A
{
    public :
       int x ;
    protected :
       int y ;
    private :
       int z ;
};
class B : private A
{
    public :
     void display()
     {
       x = 10 ; // Inheritance b/c x,y are data members of Class A
       //z = 30 ; // Wrong b/c z is Private member of Class A
       cout<<"X = "<<x <<endl ;
       //cout<<"Y = "<<y <<endl ;
       //cout<<"Z = "<<z <<endl ;
     }
};
/*
class C : public B
{
  public :
   void display()
   {
      y = 20 ; // Inheritance b/c x,y are data members of Class A
     cout<<"Value of Y = "<<y ;
   }
};
*/
int main()
{
    B obj ;
    //obj.x = 30 ; // because Class A is Inherited  Privately  
    //obj.y = 40 ; // wrong b/c y is protected can not access through 
                   // object of Class B but can be accessed through 
                   // object of Child class of Class B .
    
    obj.display(); 
    //C obj2 ;
    //obj2.display() ; // will not be accessed through object of Class C b/c
                     // Class A is inherited as private in Class B
    
    return 0;
}
