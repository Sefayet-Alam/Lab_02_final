#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


class Shape
{
    private:
    int r, d, a;
    
    protected:
    string s="SHAPE";

    public:
    void draw()
    {
        cout << "Draw from Shape" << endl;
    }
};

class Circle : public Shape
{
    public:
    void drawCircle(){
        cout<<"draw a circle"<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    void drawRectangle(){
        cout<<"draw a Rectangle"<<endl;
    }
};

class  Triangle: public Shape
{
    public:
    void drawCircle(){
        cout<<"draw a Triangle"<<endl;
    }
};

int main()
{
    Shape myshape;
    // myshape.draw();
    Circle mycircle;
    mycircle.drawCircle();
    mycircle.draw();

    Triangle MyTri;
    MyTri.draw();

    Rectangle Rec;
    Rec.drawRectangle();
    return 0;
}
