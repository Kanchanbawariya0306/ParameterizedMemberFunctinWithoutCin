#include<iostream.h>
#include<string.h>
#include<conio.h>
  class Emp
{
   int age;
   char name[20];
   float sal;
     public:
       void set(int,char*,float)
       void show();
};
   void Emp::set(int a,char *p,float s)
 {
   age = a;
   strcpy(name,p);
   float = s;
 }
   void Emp::show()
 {
   cout<<age<<","<<name<<","<<sal;
   cout<<endl;
 }
  int main()
{ 
  Emp A,B;
  A.set(20,"Kanchan",50000.0);
  B.set(21,"Abhishek",70000.0);
  A.show();
  B.show();
  getch();
}         