#include <iostream>
#include <algorithm>
#include <cmath>
#include<string>
#include <iostream>
#include <vector>

using namespace std;

//global variables 
//int serial;

class Employee{
    public:
    string name;
    int age;
    int salary;
    string joiningDate;
    string type;
    int workTime=0;
    string manager="None";

   // Employee(){}

    Employee(string n,int a, int sal, string joining, string ty){
        name=n;
        age=a;
        salary=sal;
        joiningDate=joining;
        type=ty;
    }

    string output(){
        cout<<"Inside Base class employee"<<endl;
        return name;
        
    }
    
};
class Engineer: public Employee{
    public:
    Engineer(string name,int age, int sal, string joining,string ty):Employee(name,age,sal,joining,ty){}
    
    void output(){
        cout<<"Inside derived class engineer from base employee"<<endl;  
    }
};

class Manager: public Employee{
    public:
    int workTime=0;
    //Manager():Employee(){};
    Manager(string name,int age, int sal, string joining,string ty):Employee(name,age,sal,joining,ty){}
    
    string output(){
        cout<<"Inside derived class manager from base employee"<<endl;
        return name;  
    }
};

class Architect: public Employee{
    public:
    Architect(string name,int age, int sal, string joining,string ty):Employee(name,age,sal,joining,ty){}
    
    string output(){
        cout<<"Inside derived class architect from base employee"<<endl;
        return name;  
    }
};

class Maid: public Employee{
    public:
    Maid(string name,int age, int sal, string joining,string ty):Employee(name,age,sal,joining,ty){}
    
    string output(){
        cout<<"Inside derived class maid from base employee"<<endl;
        return name;  
    }
};

class Itstaff: public Employee{
    public:
    Itstaff(string name,int age, int sal, string joining,string ty):Employee(name,age,sal,joining,ty){}
    
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
    int employeeCount=0;
    bool limit=false;
    int money=0;
    char type;

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
        return allowance;
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
        return allowance;
    }

};


void menu(){
    cout<<"----------------------------------------"<<endl;
    cout<<"Welcome to ABC organisation"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Press 1 to list all employees"<<endl;
    cout<<"Press 2 to add an employee"<<endl;
    cout<<"Press 3 to display the manager of any employee chosen"<<endl;
    cout<<"Press 4 to change the salary of an employee"<<endl;
    cout<<"Press 5 to change the workhours of an employee"<<endl;
    cout<<"Press 10 to list all offices"<<endl;
    cout<<"Press 11 to add a new office"<<endl;
    cout<<"Press 12 to add expenses to an office"<<endl;
    cout<<"Press -1 to exit"<<endl;
    cout<<"----------------------------------------"<<endl;
}

int main(){

    int choice,n;
    int serial,offserial;

    Employee emp("Ais",23,500,"3/4","Engineer");
    Employee eng("Vid",23,400,"5/5","Engineer");
    Manager mg();

    vector<Employee> v;
    v.push_back(emp);
    v.push_back(eng);
    vector<Office> o;
    vector<Manager> m;
    
    do{
        menu();
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case -1:{
                exit(1);
            }

            case 1:{ //Display all the employees
                cout<<"Name Age Salary JoiningDate Type "<<endl;
                for(int i=0;i<v.size();i++){
                    serial=i+1;
                    cout<<serial<<" "<<v[i].name<<" "<<v[i].age<<" "<<v[i].salary<<" "<<v[i].joiningDate<<" "<<v[i].type<<" "<<v[i].workTime<<endl;
                }
                break;

            }

            case 2:{ //Add an employee
            string empname,empjoin,emptype;
            int empage,empsal;
                cout<<"Enter the name"<<endl;
                cin>>empname;
                cout<<"Enter age of the employee"<<endl;
                cin>>empage;
                cout<<"Enter salary of the employee"<<endl;
                cin>>empsal;
                cout<<"Enter joining date"<<endl;
                cin>>empjoin;
                cout<<"Enter the type of employee"<<endl;
                cin>>emptype;
                cout<<"New employee has been added"<<endl;
                v.push_back(Employee(empname,empage,empsal,empjoin,emptype));
                break;

            } 

            case 3: { //display the manager of a given employee 
                char option;
                string managerName,managerDoj,managerType;
                int managerSal,managerAge;
                int indx,managerindx;

                if(m.empty()==true){
                    cout<<"There are no managers yet, would you like to create one? Y/N"<<endl;
                    cin>>option;
                    if(option=='T'){
                        cout<<"Enter name of manager"<<endl;
                        cin>>managerName;
                        cout<<"Enter age of manager"<<endl;
                        cin>>managerAge;
                        cout<<"Enter the salary of the manager"<<endl;
                        cin>>managerSal;
                        cout<<"Enter joining date of manager"<<endl;
                        cin>>managerDoj;
                        cout<<"Enter type of employee, in this case as Manager"<<endl;
                        cin>>managerType;
                        cout<<"Manager created successfully!"<<endl;
                        m.push_back(Manager(managerName,managerAge,managerSal,managerDoj,managerType));

                        cout<<"Name Age Salary JoiningDate Type "<<endl;
                        for(int i=0;i<v.size();i++){
                            serial=i+1;
                            cout<<serial<<" "<<v[i].name<<" "<<v[i].age<<" "<<v[i].salary<<" "<<v[i].joiningDate<<" "<<v[i].type<<" "<<v[i].workTime<<endl;
                        }

                        cout<<"Enter the index of the employee who's manager you want to see"<<endl;
                        cin>>indx;
                        if(v[indx-1].manager=="None"){
                            cout<<"Employee has no manager, please select a manager from list"<<endl;
                            for(int i=0;i<m.size();i++){
                                serial=i+1;
                                cout<<serial<<" "<<m[i].name<<" "<<m[i].age<<" "<<m[i].salary<<" "<<m[i].joiningDate<<" "<<m[i].type<<" "<<m[i].workTime<<endl;
                            }
                            cout<<"Enter the index of manager you want to map to employee"<<endl;
                            cin>>managerindx;
                            v[indx-1].manager=m[managerindx-1].name;
                            cout<<"Employee "<<v[indx-1].name<<" "<<"added under manager "<<m[managerindx-1].name<<endl;
                        }
                    }

                    else{
                        cout<<"Manager not created!"<<endl;
                    }
                }

                else {
                    cout<<"ManagerName MangerAge ManagerSalary ManagerDoj Type ManagerWorktime"<<endl;
                    for(int i=0;i<m.size();i++){
                                serial=i+1;
                                cout<<serial<<" "<<m[i].name<<" "<<m[i].age<<" "<<m[i].salary<<" "<<m[i].joiningDate<<" "<<m[i].type<<" "<<m[i].workTime<<endl;
                            }

                    cout<<"Enter the index of the employee who's manager you want to see"<<endl;
                    cin>>indx;
                    cout<<"The manager of the employee "<<v[indx-1].name<<" is "<<v[indx-1].manager<<endl;
                }
                break;
            }

            case 4:{//Change the salary of the selected employee
                cout<<"Name Age Salary JoiningDate Type Work-hours "<<endl;
                for(int i=0;i<v.size();i++){
                    serial=i+1;
                    cout<<serial<<" "<<v[i].name<<" "<<v[i].age<<" "<<v[i].salary<<" "<<v[i].joiningDate<<" "<<v[i].type<<endl;
                }
                int no,sal;
                cout<<"Enter the index of the employee who's salary you want to change"<<endl;
                cin>>no;
                cout<<"Enter the new salary"<<endl;
                cin>>sal;
                v[no-1].salary=sal;
                cout<<"Salary has been revised"<<endl;
                break;

            }

            case 5:{//Change the salary of the selected employee
                cout<<"Name Age Salary JoiningDate Type "<<endl;
                for(int i=0;i<v.size();i++){
                    serial=i+1;
                    cout<<serial<<" "<<v[i].name<<" "<<v[i].age<<" "<<v[i].salary<<" "<<v[i].joiningDate<<" "<<v[i].type<<endl;
                }
                int no,wkTime;
                cout<<"Enter the index of the employee who's worktime you want to change"<<endl;
                cin>>no;
                cout<<"Enter the new worktime"<<endl;
                cin>>wkTime;
                v[no-1].workTime=wkTime;
                cout<<"Worktime has been revised"<<endl;
                break;

            }

            case 10:{//List all offices 
            if(o.empty()==true){
                cout<<"There are no offices, please add them"<<endl;
                string offname,offloc;
                char offtype;
                int offpin,empcount;
                bool offlimit=false;

                cout<<"Enter the name of the office"<<endl;
                cin>>offname;
                cout<<"Enter the office location"<<endl;
                cin>>offloc;
                cout<<"Enter I for International and L for local office type"<<endl;
                cin>>offtype;
                cout<<"Enter the office pincode"<<endl;
                cin>>offpin;
                cout<<"Enter the no. of employees"<<endl;
                cin>>empcount;
                cout<<"Office has been added successfully!"<<endl;
                o.push_back(Office(offname,offloc,offpin,empcount,offlimit));
            }
            else{
                cout<<"Name Location Pin EmployeeCount Type Expenses Limit"<<endl;
                for(int i=0;i<o.size();i++){
                    offserial=i+1;
                    cout<<offserial<<" "<<o[i].name<<" "<<o[i].location<<" "<<o[i].pin<<" "<<o[i].employeeCount<<" "<<o[i].type<<" "<<o[i].money<<" "<<o[i].type<<endl;
                }
            }

            break;
            }

            case 11: {//Add a new office
                cout<<"To add a new office:"<<endl;
                string offname,offloc;
                char offtype;
                int offpin,empcount;
                bool offlimit=false;

                cout<<"Enter the name of the office"<<endl;
                cin>>offname;
                cout<<"Enter the office location"<<endl;
                cin>>offloc;
                cout<<"Enter I for International and L for local office type"<<endl;
                cin>>offtype;
                cout<<"Enter the office pincode"<<endl;
                cin>>offpin;
                cout<<"Enter the no. of employees"<<endl;
                cin>>empcount;
                cout<<"Office has been added successfully!"<<endl;
                o.push_back(Office(offname,offloc,offpin,empcount,offlimit));
                break;

            }

            case 12: { //Add expenses, check limit
                cout<<"Name Location Pin EmployeeCount Type Expenses Limit"<<endl;
                for(int i=0;i<o.size();i++){
                    offserial=i+1;
                    cout<<offserial<<" "<<o[i].name<<" "<<o[i].location<<" "<<o[i].pin<<" "<<o[i].employeeCount<<" "<<o[i].type<<" "<<o[i].money<<" "<<o[i].type<<endl;
                }
                int no,offexpenses;
                cout<<"Enter the index of the office"<<endl;
                cin>>no;
                cout<<"Enter the amount to be added"<<endl;
                cin>>offexpenses;

                o[no-1].money+=offexpenses;
                break;
            }

            default:
            cout<<"Wrong input!"<<endl;
            cout<<endl;
        }
    }while(choice!=-1);

    return 0;
}