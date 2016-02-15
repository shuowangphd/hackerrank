/*Write the class AddElements here*/
template <class T>
class AddElements{
    T ele;
public:
    AddElements(T ele2){ele=ele2;}
    T add(T ele2) {return ele+ele2;}
};
template<>
class AddElements<string>{
        string ele;
public:
    AddElements(string ele2){ele=ele2;}
    string concatenate(string ele2) {return ele+ele2;}
};
//