#include<bits/stdc++.h>
using namespace std;

class shape{
public:
 virtual void draw()=0;
};

class rectangle : public shape{
    public:
    void draw()
    {
        cout<<"Rectangle"<<endl;
    }
};

class square : public shape{
public:
    void draw()
    {
        cout<<"Square"<<endl;
    }
};

class shapefactory{
    private static final EagerInitializedSingleton instance = new EagerInitializedSingleton();
    private shapefactory(){}
public:
    static EagerInitializedSingleton getInstance() {
        return instance;
    }

    shape* getshape(string shapetype)
    {

      if(shapetype=="rectangle")
      {
          return new rectangle();
      }
      else if(shapetype=="square")
      {
          return new square();
      }
      else return nullptr;
    }
};

shapefactory* shapefactory::ins=nullptr;

int main()
{
    shapefactory* shapefac1 = shapefactory::getinstance();
    shapefactory* shapefac2 = shapefactory::getinstance();
    cout<<"Address of shapefactory 1 : "<<shapefac1<<endl;
    cout<<"Address of shapefactory 2 : "<<shapefac2<<endl;


    shape *shape1 = shapefactory1->getshape("rectangle");
    shape1->draw();

    shape *shape2 = shapefactory1->getshape("square");
    shape2->draw();

}