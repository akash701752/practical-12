// Task 2 : Practical 12 : To see flow of execution of  Constructor and Destructor Multilevel Inheritance
#include <iostream>

using namespace std;

class ABC
{
    private :
       int a ;
    public :
      ABC()
      {
          cout<<"This is Constructor of Base Class " << endl ;
      }
      void setA(int c) // Setter
      {
          a = c ; // Setting the Private Variable a Using Setter
      }
      int getA() // Getter
      {
          return a ;
      }
     ~ABC()
     {
         cout<<"This is the Destructor of Base Class " <<endl ;
     }
};
class derived1 : public ABC 
{
    private :
      int b ;
    public :
      derived1()
      {
          cout<<"This is the Constructor of Derived Class 1 "<<endl ;
      }
      void setB(int num2) //local Variable
      {
         b = num2 ;
      }
      int getB()
      {
          return b ;
      }
     ~derived1()
     {
         cout<<"This is the Destructor of 1 Derived Class " <<endl ;
     }
};
class derived2 : public derived1
{
   private :
      int c ;
    public :
      derived2()
      {
          cout<<"This is the Constructor of Derived Class 2 "<<endl ;
      }
      void setC(int num3) //local Variable
      {
         c = num3 ;
      }
      int getC()
      {
          return c ;
      } 
     ~derived2()
     {
         cout<<"This is the Destructor of 2 Derived Class " <<endl ;
     }
};
class derived3 : public derived2
{
   private :
      int d ;
    public :
      derived3()
      {
          cout<<"This is the Constructor of Derived Class 3 "<<endl ;
      }
      void setD(int num4) //local Variable
      {
         d = num4 ;
      }
      int getD()
      {
          return d ;
      }
      void sum()
      {
          cout<<"Sum of all Variables is : " <<getA()+getB()+getC()+getD() <<endl ;
      }
     ~derived3()
     {
         cout<<"This is the Destructor of 3 Derived Class " <<endl ;
     }
};
int main()
{
    derived3 obj ; // Creating Object  Constructor will Called When an Object is Created 
    int num1 , num2 , num3 , num4 ;
    cout<<"Enter the Value of Private Variable A  B  C  D : " ;
    cin>>num1>>num2>>num3>>num4;
    obj.setA(num1) ; // Setting the Value of Private Variable of Class Using Setter 
    obj.setB(num2) ;
    obj.setC(num3) ;
    obj.setD(num4) ;
    cout<<"The Value of Private Variable A is : "<<obj.getA() << endl ; // Getting the Value of a and b using Getter Function
    cout<<"The Value of Private Variable B is : "<<obj.getB() << endl ;
    cout<<"The Value of Private Variable C is : "<<obj.getC() << endl ;
    cout<<"The Value of Private Variable D is : "<<obj.getD() << endl ;
    obj.sum();
    return 0;
}
