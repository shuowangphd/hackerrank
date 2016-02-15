// Write your Student class here
class Student{
    int ts;  
public:
    void input() {
        cin>>ts;
        int si;
        for(int i=0;i<4;i++){
            cin>>si;
            ts+=si;
        }
    }
    int calculateTotalScore(){return ts;}
};
//