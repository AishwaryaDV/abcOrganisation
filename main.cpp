#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
#include <stdio.h>

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

    Office(string offName, string loc, int officePin, char ty, int count, bool officelimit){
        name=offName;
        location=loc; 
        pin=officePin;
        type=ty;
        employeeCount=count;
        limit=officelimit;
    }
};
   
class Local: public Office{
    public:
    string type="Local";
    int allowance=50000;
    Local(string offname,string loc, int officePin,char ty, int count, bool officelimit):Office(offname,loc,officePin,ty,count,officelimit){}
    
    void output(){
        cout<<"Inside derived class Local from base Office"<<endl;
    }
};

class International: public Office{
    public:
    string type="International";
    int allowance=150000;
    International(string offname,string loc, int officePin,char ty, int count, bool officelimit):Office(offname,loc,officePin,ty,count,officelimit){}
    
    void output(){
        cout<<"Inside derived class International from base Office"<<endl;
    }

};

class Customer{
    public:
    string name;
    int age;
    int aadhar;
    string joiningDate;

    Customer(string custName,int custAge,int custAadhar,string custDoj){
        name=custName;
        age=custAge;
        aadhar=custAadhar;
        joiningDate=custDoj;
    }

};

class Retail: public Customer{
    public:
    Retail(string custName,int custAge,int custAadhar,string custDoj):Customer(custName,custAge,custAadhar,custDoj){}
    
    void output(){
        cout<<"Inside derived class Retail from base Customer"<<endl;
    }

};

class nonRetail: public Customer{
    public:
    nonRetail(string custName,int custAge,int custAadhar,string custDoj):Customer(custName,custAge,custAadhar,custDoj){}
    
    void output(){
        cout<<"Inside derived class nonRetail from base Customer"<<endl;
    }

};

class Account{
    public:
    int accNumber;
    string belongsTo;
    string accDoj;
    int deposit=0;

    Account(int accnum,string belongsto,string accDoj,int accDeposit){
        accNumber=accnum;
        belongsTo=belongsto;
        accDoj=accDoj;
        deposit=accDeposit;
    }

};

class Savings: public Account{
    public:
    Savings(int accnum,string belongsto,string accDoj,int accDeposit):Account(accnum,belongsto,accDoj,accDeposit){}
    
    void output(){
        cout<<"Inside derived class Savings from base Account"<<endl;
    }

};

class Checking: public Account{
    public:
    Checking(int accnum,string belongsto,string accDoj,int accDeposit):Account(accnum,belongsto,accDoj,accDeposit){}
    
    void output(){
        cout<<"Inside derived class Checking from base Account"<<endl;
    }

};

class Loan: public Account{
    public:
    Loan(int accnum,string belongsto,string accDoj,int accDeposit):Account(accnum,belongsto,accDoj,accDeposit){}
    
    void output(){
        cout<<"Inside derived class Loan from base Account"<<endl;
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
    cout<<"Press 6 to create a new customer"<<endl;
    cout<<"Press 7 to list all customers"<<endl;
    cout<<"Press 8 to open an account for a customer"<<endl;
    cout<<"Press 9 to deposit money to an account"<<endl;
    cout<<"Press 10 to display money in an account(inc. interest%)"<<endl;
    cout<<"Press 11 to list all offices"<<endl;
    cout<<"Press 12 to add a new office"<<endl;
    cout<<"Press 13 to add expenses to an office"<<endl;
    cout<<"Press -1 to exit"<<endl;
    cout<<"----------------------------------------"<<endl;
}

bool inRange(int low, int high, int x){
    return (low<=x && x<=high);
}

int main(){

    clock_t start,end;
    double time_taken;
    int choice,n;
    int serial,offserial,custserial;

    Employee emp("Ais",23,500,"3/4","Engineer");
    Employee eng("Vid",23,400,"5/5","Engineer");

    vector<Employee> v;
    v.push_back(emp);
    v.push_back(eng);
    vector<Office> o;
    vector<Manager> m;
    vector<Customer> c;
    vector<Retail> r;
    vector<nonRetail> nr;
    vector<Savings> s;
    vector<Checking> ch;
    vector<Loan> l;
    
    do{
        menu();
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case -1:{
                exit(1);
            }

            case 1:{ //Display all the employees
                cout<<"No. Name Age Salary JoiningDate Type"<<endl;
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
                char choice;
                string managerName,managerDoj,managerType;
                int managerSal,managerAge;
                int indx,managerindx;

                if(m.empty()==true){
                    cout<<"There are no managers yet, would you like to create one? Y/N"<<endl;
                    cin>>choice;
                    if(choice == 'Y'){
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

                        cout<<"No. Name Age Salary JoiningDate Type "<<endl;
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
                    cout<<"No. ManagerName MangerAge ManagerSalary ManagerDoj Type ManagerWorktime"<<endl;
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
                cout<<"No. Name Age Salary JoiningDate Type Work-hours "<<endl;
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

            case 5:{//Change the worktime of the selected employee
                cout<<"No. Name Age Salary JoiningDate Type "<<endl;
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

            case 6:{ //Create a new customer
                string custname,custdoj,accdoj,custtype;
                int custage,custaadhar,accnum,accdeposit;
                char custchoice,accchoice;
                cout<<"To create a new customer:"<<endl;
                cout<<"Enter name of customer"<<endl;
                cin>>custname;
                cout<<"Enter age of customer"<<endl;
                cin>>custage;
                cout<<"Enter aadhar no of customer"<<endl;
                cin>>custaadhar;
                cout<<"Enter the day of customer joining"<<endl;
                cin>>custdoj;
                cout<<"Enter the type of customer"<<endl;
                cin>>custtype;
                if(custtype == "Retail"){
                    r.push_back(Retail(custname,custage,custaadhar,custdoj));
                    cout<<"Retail customer successfully created!"<<endl;
                }
                else {
                     nr.push_back(nonRetail(custname,custage,custaadhar,custdoj));
                    cout<<"Non-retail customer successfully created!"<<endl;
                }
                cout<<"Would you like to open an account for this cutsomer? Y/N"<<endl;
                cin>>custchoice;
                if(custchoice == 'Y'){
                    cout<<"Retail customers can open Savings and Checking account and Non-retail can open only Loan accounts"<<endl;
                    cout<<"Press S for Savings, C for Checking and L for Loan account creation"<<endl;
                    cin>>accchoice;
                    cout<<"Enter the day of opening the account"<<endl;
                    cin>>accdoj;
                    cout<<"Enter the amount of money you want to deposit"<<endl;
                    cin>>accdeposit;
                    accnum=1 + (rand() % 100000);

                    if(accchoice == 'S'){
                        s.push_back(Savings(accnum,custname,accdoj,accdeposit));
                        cout<<"Savings account created successfully!"<<endl;
                    }
                    else if(accchoice == 'C'){
                        ch.push_back(Checking(accnum,custname,accdoj,accdeposit));
                        cout<<"Checking account created successfully!"<<endl;
                    }
                    else{
                        l.push_back(Loan(accnum,custname,accdoj,accdeposit));
                        cout<<"Loan account created successfully!"<<endl;
                    }
                }
                else{
                    cout<<"No account has been created for this customer!"<<endl;
                }
                break;
            }

            case 7: {//List all customers 
            int nonAccCounter=0;
            int AccCounter=0;

            if(r.empty()==true && nr.empty()==true){
                cout<<"No customers present, please add them!"<<endl;
            }
            else{
                cout<<"Customers without an account are listed below:"<<endl;
                cout<<"No. Customer-Name Customer-Age Aadhar Customer-Type"<<endl;
                if(r.empty()!=true){
                    for(int i=0;i<r.size();i++){
                    cout<<++nonAccCounter<<" "<<r[i].name<<" "<<r[i].age<<" "<<r[i].aadhar<<" "<<r[i].joiningDate<<" "<<"Retail"<<endl;
                    }
                }
                if(nr.empty()!=true){
                    for(int i=0;i<nr.size();i++){
                    cout<<++nonAccCounter<<" "<<nr[i].name<<" "<<nr[i].age<<" "<<nr[i].aadhar<<" "<<nr[i].joiningDate<<" "<<"Non-Retail"<<endl;
                    }
                }
                cout<<endl;
                cout<<"Customers with an account are listed below"<<endl;
                cout<<"No. Acc-no Customer-Name Aadhar AccDoj Holdings AccountType"<<endl;
                for(int i=0;i<s.size();i++){
                    cout<<++AccCounter<<" "<<s[i].accNumber<<" "<<s[i].belongsTo<<" "<<r[i].aadhar<<" "<<s[i].accDoj<<" $"<<s[i].deposit<<" "<<"Savings"<<endl;
                }

                for(int i=0;i<ch.size();i++){
                    cout<<++AccCounter<<" "<<ch[i].accNumber<<" "<<ch[i].belongsTo<<" "<<r[i].aadhar<<" "<<ch[i].accDoj<<" $"<<ch[i].deposit<<" "<<"Checking"<<endl;
                }

                 for(int i=0;i<l.size();i++){
                    cout<<++AccCounter<<" "<<l[i].accNumber<<" "<<l[i].belongsTo<<" "<<nr[i].aadhar<<" "<<l[i].accDoj<<" $"<<l[i].deposit<<" "<<"Loan"<<endl;
                }
            }
            break;
            }

            case 8:{ //Open an account for an existing customer
                int accIndex,accDeposit;
                int counter=0;
                char accChoice;
                cout<<"List of customers without an account are:"<<endl;
                if(r.empty()!=true){
                    for(int i=0;i<r.size();i++){
                    cout<<++counter<<" "<<r[i].name<<" "<<r[i].age<<" "<<r[i].aadhar<<" "<<r[i].joiningDate<<" "<<"Retail"<<endl;
                    }
                }
                if(nr.empty()!=true){
                    for(int i=0;i<nr.size();i++){
                    cout<<++counter<<" "<<nr[i].name<<" "<<nr[i].age<<" "<<nr[i].aadhar<<" "<<nr[i].joiningDate<<" "<<"Non-Retail"<<endl;
                    }
                }
                cout<<"Select the index of the customer you want to create an account for:"<<endl;
                cin>>accIndex;
                cout<<"Enter the initial amount of money you want to deposit:"<<endl;
                cin>>accDeposit;
                cout<<"As a retail customer you can open a Savings/Checking account, press S for Savings and C for Checking account"<<endl;
                cout<<"As a non-retail customer you can open a Loan account, press L for Loan account "<<endl;
                cin>>accChoice;
                //start running the clock here
                start= clock();

                if(accChoice =='S'){
                    s[accIndex-1].deposit+=accDeposit;
                    cout<<"Money added to Savings account!"<<endl;
                }
                if(accChoice =='C'){
                    ch[accIndex-1].deposit+=accDeposit;
                    cout<<"Money added to Checking account!"<<endl;
                }
                if(accChoice =='L'){
                    l[accIndex-1].deposit+=accDeposit;
                    cout<<"Money added to Loan account!"<<endl;
                }
                break;
            }

            case 9: { //Deposit money to an account
                int accDeposit=0, counter=0;
                int accIndex,newMoney=0;
                char addMoneyChoice;
                string accType;

                cout<<"Customer-Account-Deposit list"<<endl;
                cout<<"No. Acc-no Customer-Name Aadhar AccDoj Holdings AccountType"<<endl;
                for(int i=0;i<s.size();i++){
                    cout<<++counter<<" "<<s[i].accNumber<<" "<<s[i].belongsTo<<" "<<r[i].aadhar<<" "<<s[i].accDoj<<" $"<<s[i].deposit<<" "<<"Savings"<<endl;
                }

                for(int i=0;i<ch.size();i++){
                    cout<<++counter<<" "<<ch[i].accNumber<<" "<<ch[i].belongsTo<<" "<<r[i].aadhar<<" "<<ch[i].accDoj<<" $"<<ch[i].deposit<<" "<<"Checking"<<endl;
                }

                 for(int i=0;i<l.size();i++){
                    cout<<++counter<<" "<<l[i].accNumber<<" "<<l[i].belongsTo<<" "<<nr[i].aadhar<<" "<<l[i].accDoj<<" $"<<l[i].deposit<<" "<<"Loan"<<endl;
                }
                cout<<"To deposit money into an account:"<<endl;
                cout<<"Enter the index of customer"<<endl;
                cin>>accIndex;
                cout<<"Enter the account type of the selected index"<<endl;
                cin>>accType;
                cout<<"Enter the amount you want to deposit"<<endl;
                cin>>newMoney;

                if(accType == "Savings"){
                    s[accIndex-1].deposit+=newMoney;
                    cout<<"Money added to "<<s[accIndex-1].belongsTo<<"'s Savings account"<<endl;

                }
                else if(accType == "Checking"){
                    ch[accIndex-1].deposit+=newMoney;
                    cout<<"Money added to "<<ch[accIndex-1].belongsTo<<"'s Checking account"<<endl;

                }
                else if(accType == "Loan"){
                    l[accIndex-1].deposit+=newMoney;
                    cout<<"Money added to "<<l[accIndex-1].belongsTo<<"'s Loan account"<<endl;

                }
                else{
                    cout<<"Wrong index/type of account chosen!"<<endl;
                }
                break;
            }

            case 10:{//Display the money in an account + interest
                int accDeposit=0, counter=0;
                int accIndex;
                char addMoneyChoice;
                string accType;
                cout<<"Customer-Account-Deposit list"<<endl;
                cout<<"No. Acc-no Customer-Name Aadhar AccDoj Holdings AccountType"<<endl;
                for(int i=0;i<s.size();i++){
                    cout<<++counter<<" "<<s[i].accNumber<<" "<<s[i].belongsTo<<" "<<r[i].aadhar<<" "<<s[i].accDoj<<" $"<<s[i].deposit<<" "<<"Savings"<<endl;
                }

                for(int i=0;i<ch.size();i++){
                    cout<<++counter<<" "<<ch[i].accNumber<<" "<<ch[i].belongsTo<<" "<<r[i].aadhar<<" "<<ch[i].accDoj<<" $"<<ch[i].deposit<<" "<<"Checking"<<endl;
                }

                 for(int i=0;i<l.size();i++){
                    cout<<++counter<<" "<<l[i].accNumber<<" "<<l[i].belongsTo<<" "<<nr[i].aadhar<<" "<<l[i].accDoj<<" $"<<l[i].deposit<<" "<<"Loan"<<endl;
                }
                cout<<"Enter the index of customer who's balance you want to see after added interest"<<endl;
                cin>>accIndex;
                cout<<"Enter the account type of the selected index"<<endl;
                cin>>accType;
                //stop running the clock here;
                end= clock();
                //time calculation in seconds 
                time_taken=double(end - start) / double(CLOCKS_PER_SEC);

                if(accType == "Savings"){
                    s[accIndex-1].deposit+=(s[accIndex-1].deposit)*0.05*(time_taken/60);
                    cout<<"Money in "<<s[accIndex-1].belongsTo<<"'s Savings account is $"<<s[accIndex-1].deposit<<endl;

                }
                else if(accType == "Checking"){
                    ch[accIndex-1].deposit+=(ch[accIndex-1].deposit)*0.07*(time_taken/60);
                    cout<<"Money in "<<ch[accIndex-1].belongsTo<<"'s Checking account is $"<<ch[accIndex-1].deposit<<endl;

                }
                else if(accType == "Loan"){
                    l[accIndex-1].deposit-=(l[accIndex-1].deposit)*0.09*(time_taken/60);
                    cout<<"Money in "<<l[accIndex-1].belongsTo<<"'s Loan account is $"<<l[accIndex-1].deposit<<endl;

                }
                else{
                    cout<<"Wrong index/type of account chosen!"<<endl;
                }
                break;

            }

            case 11:{ //List all offices 
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
                o.push_back(Office(offname,offloc,offpin,offtype,empcount,offlimit));
            }
            else{
                cout<<"No.Name Location Pin EmployeeCount Type Expenses Limit"<<endl;
                for(int i=0;i<o.size();i++){
                    offserial=i+1;
                    cout<<offserial<<" "<<o[i].name<<" "<<o[i].location<<" "<<o[i].pin<<" "<<o[i].employeeCount<<" "<<o[i].type<<" "<<o[i].money<<" "<<o[i].type<<endl;
                }
            }

            break;
            }

            case 12: {//Add a new office
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
                o.push_back(Office(offname,offloc,offpin,offtype,empcount,offlimit));
                break;

            }

            case 13: { //Add expenses, check limit
            if(o.empty()==true){
                cout<<"No offices exist, please add them"<<endl;
            }

            else{
                cout<<"No. Name Location Pin EmployeeCount Type Expenses Limit"<<endl;
                for(int i=0;i<o.size();i++){
                    offserial=i+1;
                    cout<<offserial<<" "<<o[i].name<<" "<<o[i].location<<" "<<o[i].pin<<" "<<o[i].employeeCount<<" "<<o[i].type<<" "<<o[i].money<<" "<<o[i].type<<endl;
                }
                int no,offexpenses;
                cout<<"Enter the index of the office you want to add expenses to"<<endl;
                cin>>no;
                if(inRange(1,o.size(),no)){
                     cout<<"Enter the amount to be added"<<endl;
                     cin>>offexpenses;
                     o[no-1].money+=offexpenses;
                     cout<<"Total expenses: "<<o[no-1].money<<endl;
                }

                else{
                    cout<<"Wrong index! Office does not exist"<<endl;
                }
            }
                
            break;
            }

            default:
            cout<<"Wrong input!"<<endl;
            cout<<endl;
        }
    }while(choice!=-1);

    return 0;
}