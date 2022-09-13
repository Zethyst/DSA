#include <iostream>
using namespace std;
class abc{
    private: 
    int x,y,z;
    public:
    void get(int p,int q,int r){
         x=p;
         y=q;
         z=r;
    }
    void compute(abc a11,abc a22){
        a11x=a11x+a22y;
        =a11+a22;
        z=a11+a22;
    }
    void display(){
        cout<<x<<endl<<y<<endl<<z;
    }
};
int main (void){
 abc a1,a2,a3;
 a1.get(1,4,5);
 a2.get(4,3,9);
 a3.compute(a1,a2);
 a1.display();
 a2.display();
 a3.display();
return 0;
}