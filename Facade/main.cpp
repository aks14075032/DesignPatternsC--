#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw()=0;
};

class Circle: public Shape{
public:
    void draw(){
        cout<<"Draw a Circle"<<endl;
    }
};

class Rectangle: public Shape{
public:
    void draw(){
        cout<<"Draw a Rectangle"<<endl;
    }
};

class Square: public Shape{
public:
    void draw(){
        cout<<"Draw a Square"<<endl;
    }
};

class ShapeMaker{
    Shape *circle;
    Shape *rectangle;
    Shape *square;

public:
    ShapeMaker(){
        circle = new Circle();
        rectangle = new Rectangle();
        square = new Square();
    }
    void drawCircle(){
        circle->draw();
    }

    void drawRectangle(){
        rectangle->draw();
    }

    void drawSquare(){
        square->draw();
    };


};

int main() {

    ShapeMaker *shapeMaker = new ShapeMaker();

    shapeMaker->drawCircle();
    shapeMaker->drawRectangle();
    shapeMaker->drawSquare();

    return 0;
}
