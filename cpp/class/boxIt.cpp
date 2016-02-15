class Box{
//Implement the class Box  
    int l,b,h;
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions : 
public:
// Constructors: 
// Box();
    Box(){l=b=h=0;BoxesCreated++;}
// Box(int,int,int);
    Box(int l2,int b2,int h2){l=l2;b=b2;h=h2;BoxesCreated++;}
// Box(Box);
    Box(Box &b2){l=b2.l;b=b2.b;h=b2.h;BoxesCreated++;}
// Destructor
// ~Box()
    ~Box(){BoxesDestroyed++;}
// int getLength(); // Return box's length
    int getLength(){return l;}
// int getBreadth (); // Return box's breadth
    int getBreadth (){return b;}
// int getHeight ();  //Return box's height
    int getHeight (){return h;}
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume(){return (long long) l*b*h;}
//Overload operator < as specified
//bool operator<(Box &b)
    bool operator<(Box &b2){
        if(l<b2.l)return true;
        if(l==b2.l){
            if(b<b2.b)return true;
            if(b==b2.b && h<b2.h)return true;
        }
        return false;
    }
    friend ostream& operator<<(ostream& out,Box B);
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)
    ostream& operator<<(ostream& out,Box B){
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
//