//Class1: Rectangle
class Rectangle{
//Member1: width
//Member2: height
public:
    int width,height;
//Method1: Display(), to display the dimensions of rectangle.
    void Display(){cout<<width<<" "<<height<<endl;}
};
//Class2: RectangleArea, derived from class Rectangle.
class RectangleArea:public Rectangle{
//Method1: Input(), to read the width and height of a rectangle.
public:
    void Input(){cin>>width>>height;}
//Method2: Display(), overloaded function to display the area of rectangle.
    void Display(){cout<<width*height<<endl;}
};
//