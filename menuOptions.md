Menu options:
When entered a wrong option (wrong/non-existing switch case number/ wrong type (eg. string compared with int) the program should not crash.
Add an employee- While adding an employee, the flow of questions to be asked is as follows:
-What type of employee would you like to add?
Software engineer|Manager|Architect|Maids|IT staff
-Enter the age of the employee?
-Enter the joining of the employee in dd-mm-yyy format?
 

List all employees
Have 2-3 predefined entries. Upon adding an employee, it should exist in the table itself

Change the salary for an employee
List all the customers first and add a serial no. next to them.
To choose the specific employee whose salary you want to change the salary, select the option
-Enter the index of the employee ?
-Enter the new salary of the employee?

Change the worktime of an employee
List all the customers first and add a serial no. next to them.
To choose the specific employee whose worktime you want to change
Select the option
-Enter the index of the employee ?
-Enter the new worktime of the employee?

Display manager of an employee chosen
As the program starts, initially there are no managers.
-There are no managers created yet. Would you like to create one now? Y/N
-Enter the name of the employee?
-Enter the age of the employee
-Enter the date of of joining of the employee in dd-mm-yyyy
Should display: Manager created successfully!
List all the employees with the added new employee (manager in this case)
-Enter the index of the employee whose manager you want to see
once the index is entered, check if that person has been alloted a manager.
In the first case, there will be none mapped
-Display- The employee <xyz> has no manager. Please add one from the list below:
-List all the managers
-Please enter the index of the chosen manager (This is done to map)
Add the employee selected under the selected manager
Display-Employee <xyz> added under manager <abc>

Create a customer
Enter the name of the customer
Enter the age of the customer
Enter the aadhar number of the customer
Enter the type of customer, Retail or non-retail
Would you like to open an account for this customer as well? Y/N [Customer-Account mapping]
What is the initial amount to be deposited?
[Retail customers can open a Checking account or Savings account. Non retail customers can open loan accounts]
-Press C for checking account and S for savings account

-
List all customers
Lists all the customers, money stored, type of account, a unique index(if an account is created for that customer) and money added if an account for them has been created
A customer can exist without an account linked to them.

Open an account for a customer
Display the list
-Enter the index of the customer
-What is the initial amount of money to be deposited
-Display "As a retail customer you can open a  chceing account or a savings account. Press C for checking and S for savings" Take input
Display the money in an account

Display the money in an account + interest calculation 
Display the entire list of customer x account
-Enter the index of the customer
-Display the selected index with the balance
"The customer <xyz> has a <Checking account> with balance <566> (After calculation)

Add an office
Have 0 offices initially, then go on adding it to fill the list
-Please enter the name of the office
-Please enter the location of the office
-Please enter I for international and L for local location for the office
-How many employees are there in the office
-Display "The new office has been created"

List all the offices
Display the list of offices added {index, name, location, expenses}
Expenses initially set to 0

Add expenses to a certain office
List all the offices first
-Enter the index of the office
-Enter the amount to add tp <officename> expenses
-Display "The expense amount is <added amount>"
Once added and displayed again during listing of offices, it should show the incremented value 



if(o[no-1].type=='L' && o[no-1].money<=100000){
                    o[no-1].money+=offexpenses;
                    cout<<"Total expense: "<<o[no-1].money<<endl;
                    cout<<"Expenses successfully added"<<endl;
                }
                else if(o[no-1].type=='I' && o[no-1].money<=200000){
                    o[no-1].money+=offexpenses;
                    cout<<"Total expense: "<<o[no-1].money<<endl;
                    cout<<"Expenses successfully added"<<endl;
                }
                else{
                    cout<<"Limit reached! Cannot add expenses/Index of office is not present"<<endl;
                }



