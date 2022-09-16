#include <iostream>
#include <algorithm>
#include <cmath>
#include<string>
#include <iostream>

using namespace std;

class Employee{
    public:
    string name;
    int age;
    int salary;
    string joiningDate;
    string type;

    Employee(string n,int a, int sal, string joining){
        name=n;
        age=a;
        salary=sal;
        joiningDate=joining;
    }

    string output(){
        cout<<"Inside Base class employee"<<endl;
        return name;
        
    }
    
};
class Engineer: public Employee{
    public:
    string type="Engineer";
    int workhours=8;
    Engineer(string name,int age, int sal, string joining):Employee(name,age,sal,joining){}
    
    void output(){
        cout<<"Inside derived class engineer from base employee"<<endl;  
    }
};

class Manager: public Employee{
    public:
    string type="Manager";
    int workhours=5;
    Manager(string name,int age, int sal, string joining):Employee(name,age,sal,joining){}
    
    string output(){
        cout<<"Inside derived class manager from base employee"<<endl;
        return name;  
    }
};

class Architect: public Employee{
    public:
    string type="Architect";
    int workhours=3;
    Architect(string name,int age, int sal, string joining):Employee(name,age,sal,joining){}
    
    string output(){
        cout<<"Inside derived class architect from base employee"<<endl;
        return name;  
    }
};

class Maid: public Employee{
    public:
    string type="Maid";
    int workhours=9;
    Maid(string name,int age, int sal, string joining):Employee(name,age,sal,joining){}
    
    string output(){
        cout<<"Inside derived class maid from base employee"<<endl;
        return name;  
    }
};

class Itstaff: public Employee{
    public:
    string type="IT Staff";
    int workhours=24;
    Itstaff(string name,int age, int sal, string joining):Employee(name,age,sal,joining){}
    
    string output(){
        cout<<"Inside derived class itstaff from base employee"<<endl;
        return name;  
    }
};

class Office{
    public:
    string name;
    string location;
    int pin;
    int employeeCount;
    bool limit;

    Office(string offName, string loc, int officePin, int count, bool officelimit){
        name=offName;
        location=loc; 
        pin=officePin;
        employeeCount=count;
        limit=officelimit;
    }
};
   
class Local: public Office{
    public:
    string type="Local";
    int allowance=50000;

Local(string offname,string loc, int officePin, int count, bool officelimit):Office(offname,loc,officePin,count,officelimit){}
    
    void output(){
        cout<<"Inside derived class Local from base Office"<<endl;
    }

    int calcLocalExpenses(int expenses){
        allowance+= expenses;
    }

};

class International: public Office{
    public:
    string type="International";
    int allowance=150000;

International(string offname,string loc, int officePin, int count, bool officelimit):Office(offname,loc,officePin,count,officelimit){}
    
    void output(){
        cout<<"Inside derived class International from base Office"<<endl;
    }

    int calcInterExpenses(int expenses){
        allowance+= expenses;
    }

};


void menu(){
    cout<<"Welcome to ABC organisation"<<endl;
    cout<<"Employee options:";
    cout<<"Press 1 to list all employees {name, designation}"<<endl;
    cout<<"Press 2 to add an employee"<<endl;
    cout<<"Press 3 to display the manager of any employee chosen"<<endl;
    cout<<"Press 4 to change the salary of an employee"<<endl;
    cout<<"Press 5 to change the workhours of an employee"<<endl;
    cout<<endl; 
    cout<<"Office options:"<<endl;
    cout<<"Press 10 to add a new office"<<endl;
    cout<<"Press 11 to list all offices"<<endl;
    cout<<"Press 12 to add expenses to an office"<<endl;
}

int main(){


    Office obj("pwc","bangalore",560102,500,true);
    cout<<obj.name;
    Local obj1("ps","mangalore",560567,600,false);
    obj1.output();





    int choice;
    Employee employee("",0,0,""); //base employee template 
    Engineer emp("Aish",23,500,"3/4");
    Engineer eng("Vid",23,400,"5/5");
    Manager mang("Man",23,400,"5/5");
    Architect arch("Vis",23,400,"5/5");
    Maid md("Sar",23,400,"5/5");
    Itstaff staff("Nag",23,400,"5/5");
    //menu();
    //cout<<"Enter your choice:";
    //cin>>choice;

        switch(choice){
            case 1:{
                cout<<"Employee Names | Designation"<<endl;
                cout<<emp.name<<" | "<<emp.type<<endl;
                cout<<eng.name<<" | "<<eng.type<<endl;
                cout<<mang.name<<" | "<<mang.type<<endl;
                cout<<arch.name<<" | "<<arch.type<<endl;
                cout<<md.name<<" | "<<md.type<<endl;
                cout<<staff.name<<" | "<<staff.type<<endl;
                break;

            }

            case 2:{ 
            //any object created with a switch case gets automatically destroyed once it goes
            // out of scope and all the acquired resources are released due to which we are able to 
            //create a new employee but are not able to add it to the existsing employee table or view it
                string doj, newname, newtype;
                int newage, newsal;
                cout<<"To add an employee Enter name, age, salary, date of joining and designation"<<endl;
                cin>>newname>>newage>>newsal>>doj>>newtype;
                employee.name=newname;
                employee.age=newage;
                employee.salary=newsal;
                employee.joiningDate=doj;
                employee.type=newtype;
                break;
            } 


            case 4:{
                cout<<"To change the salary of an employee type enter the employee type and amount in $"<<endl;
                int amt=0;
                string emptype="";
                cin>>emptype>>amt;
                emp.type=emptype;
                emp.salary=amt;
                cout<<"Revised salary for "<<emp.type<<" is $"<<emp.salary;
                break;

            }

            case 5:{
                cout<<"To change the workhours of an employee type enter the type and value"<<endl;
                int val=0;
                string emptype="";
                cin>>emptype>>val;
                emp.type=emptype;
                emp.workhours=val;
                cout<<"Revised workhours for "<<emp.type<<"is :"<<emp.workhours;
                break;

            }
            default:
            cout<<"Wrong input!";
        }

    //emp.output();

    //cout<< eng.output();
    //cout<< mang.output();
    //cout<< arch.output();
    //cout<< md.output();
    //cout<< staff.output();

    return 0;
}