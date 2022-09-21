
    Local loc("PS","Mangalore",560567,600,false);
    International inter("PWC","Bangalore",560102,500,true);
   

//switch cases for office options 
   case 10:{ //Add a new office 
                string offName,offLoc;
                int offPin, employeeCount;
                bool officeLimit;
                cout<<"To add a new office enter its name, location, pincode, no of employees present and the exepenses limit"<<endl;
                cin>>offName>>offLoc>>offPin>>employeeCount>>officeLimit;
                off.name=offName;
                off.location=offLoc;
                off.pin=offPin;
                off.employeeCount=employeeCount;
                off.limit=officeLimit;
                break;

            }

            case 11:{ //Display all the offices  
                cout<<"All the offices are listed below:"<<endl;
                cout<<loc.name<<" | "<<loc.location<<endl;
                cout<<inter.name<<" | "<<inter.location<<endl;
                break;

            }

            case 12:{ //Add + calculate expenses of an office type 
                int expense;
                string expenseType;
                cout<<"To add expenses to a particular type of office, enter the expenses amount in $ and the type"<<endl;
                cin>>expense>>expenseType;
                if(expenseType=="Local"){
                    cout<<"Local total expense: $"<<loc.calcLocalExpenses(expense)<<endl;
                }

                else if(expenseType=="International"){
                    cout<<"International total expense: $"<<inter.calcInterExpenses(expense)<<endl;
                }
                break;
                
            }