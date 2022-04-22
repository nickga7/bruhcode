#include <iostream>
using namespace std;
class sum {
   public:
      int x, y, z;
   void getdata(int a, int b) {
      x=a;
      y=b;
   }
   void display() {
      cout<<"\nSum of X:"<<x;
      cout<<"\nSum of Y:"<<y;
   }
   void operator-(sum &);
};
void sum::operator-(sum &ob) {
   x=x+ob.x;
   y=y+ob.y;
   display();
}
int main() {
   sum ob1, ob2;
   ob1.getdata(10,20);
   ob2.getdata(20,30);
   ob1-ob2;
}
