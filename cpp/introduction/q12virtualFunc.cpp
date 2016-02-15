static int sid=1,pid=1;
class Person{
public:
    char name[100];
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor:public Person{
    int publications,curid;
public:
    Professor(){curid=pid++;}
    void getdata (){
        cin>>name>>age>>publications;
    }
    void putdata (){
        cout<<name<<" "<<age<<" "<<publications<<" "<<curid<<endl;
    }
};
class Student:public Person{
    int marks[6],curid;
public:
    Student(){curid=sid++;}
    void getdata (){
        cin>>name>>age;
        for(int i=0;i<6;i++)
            cin>>marks[i];
    }
    void putdata (){
        int sum=0;
        for(int i=0;i<6;i++)
            sum+=marks[i];
        cout<<name<<" "<<age<<" "<<sum<<" "<<curid<<endl;
    }
};