Problem
Design a OOPs application to do the following-:

You are in an organization with employees, customers, accounts and offices.

Employees can be of the following types-:

i) Software Engineer;
ii) Manager;
iii) Architect;
iv) Maids
v) IT staff

Customers can be of the following type-:

i) Retail 
ii) Non-Retail

Accounts can be of the following type-:

i) Saving
ii) Checking
iii) Loan accounts

Offices can be of the following types:

i) International 
ii) Local

Employee properties:
All employees have the attributes-> Name, age, salary, date of joining, date of resignation
All employees will have different salaries
All employees will have different worktimes.
All employees will have different managers to report to if they are not a manager. 
IT staff will be the only ones with admin access.

Customers properties:
All customers have the following attributes: Name, age, aadhar, date of account opening.
Retail customers will have the option to open savings or checking accounts.
Non-retails customers will not have the option to open any type of accounts other than loan accounts. 

Accounts properties:
All accounts will have the following attributes: Account number, belongsTo (should be mapped to an employee), date of opening, amount
Saving accounts will have a limit on how much you can withdraw.—5% per minute 
Checking accounts will have no limit on how much you can withdraw.—8% per minute 
Saving accounts will have a different amount of interest that will be added to the account every month and checking accounst will have a different amount of interest that will be added.


Offices properties:
All offices will have the following attributes: Name, location, pin, number of employees, limitReached(boolean)
If the office is international, then its monthly allowance will be different as compared to a local office. Set the upper limit for international to 2 lakhs and local as 1 lakh.
If the office crosses its limit, the office should be marked accordingly. 


Application should-:
i) Allow to add an employee
ii) List all the employees as “name, designation”
iii) Change the salary for a particular employee type.
iv) Change the workhours of an employee.
v) Display manager of any employee chosen.


vi) Create a customer
vii) List all the customers.
viii) Open an account for a customer. 
ix) Display the money in an account. 


x) Add an office.
xi) List all the offices.
xii) Add expenses to a certain office.

LoanAccounts for non-retail customers should be initialized with a loan amount and a rate of interest when creating a non-retail customer.----9% per minute 