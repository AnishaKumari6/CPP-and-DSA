#include<iostream>
#include<iomanip>
using namespace std;
class Teacher{
    public:
    string name;
    double salary;
    int id;
    double *cgpaptr;
    Teacher(string name,double salary,int id,double cgpa){
        this->name=name;
        this->salary=salary;
        this->id=id;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    Teacher(Teacher &t){
        this->name=t.name;
        this->salary=t.salary;
        this->id=t.id;
        cgpaptr=new double;
        *cgpaptr=*t.cgpaptr;

    }
    
    void printVal(){
        cout<<name<<" "<<salary<<" "<<id<<" "<<fixed << setprecision(2)<<*cgpaptr<<endl;

    }
    ~Teacher(){
    delete cgpaptr; 
}
};
int main(){
    
    int id;
    double salary;
    string name;
    double cgpa;
    cin>>id>>salary>>name>>cgpa;
    Teacher t1(name,salary,id,cgpa);
    t1.printVal();
    Teacher t2(t1);
    *(t2.cgpaptr)=9.2;
    t2.printVal();
}