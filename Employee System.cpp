              
#include <iostream>
using namespace std;
class Employee{
    private:
        string full_name;
        string email;
        string phone ;
        string position;
        double salary;
        
    public:
    	Employee(){
		}
	Employee(string fn,string email ,string ph ,double sal,string position){
		full_name = fn;
		email=email;
		phone=ph;
		salary=sal;
    	}
    	void setfull_name(string fn){
    	    full_name=fn;
    	}
    	string getfull_name(){
    	    return full_name;
    	}
    	void setemail(string em){
    	    email=em;
    	    
    	}
    	string getemail(){
    	    return email;
    	}
    	void setphone(string ph){
    	    phone=ph;
    	}
    	string getphone(){
    	    return phone;
    	}
    	void setsalary(double sal){
    		salary=sal;
		}
		double getsalary(){
			return salary;
		}
		void setposition(string pos){
			position=pos;
		}
		string getposition(){
			return (position);
		}
    void	display_employee_info(){
    		cout<<"Emplyee Full Name :"<<getfull_name()<<endl;
    		cout<<" Employee Email:"<<getemail()<<endl;
    		cout<<"Employee Phone :"<<getphone()<<endl;
    		cout<<"Employee Salary :"<<getsalary()<<endl;
    		cout<<" Employee Position :"<<getposition()<<endl;
		}
};
template <class T>
class Node{
    public:
        T data;
        Node<T>* next;
        
        Node(T e){
            data = e;
            next = NULL;
        }
};
template <class T>
class EmployeeListt {
	Node<T>* head;
    public:
    	EmployeeListt(){
		
    	    head= NULL;
    	}
    	bool insert_employee(T e){
    		Node<T>* newnode = new Node<T>(e);
    
             if(head==NULL){
             	cout<<"There is not any employee in the list "<<endl;
             	newnode->next=NULL;
             	head=newnode;
             	return false;
			 }
			 
			 
    			Node<T>* temp=head;
    			
    			while(temp!=NULL){
    				
    			if(e.getemail()==temp->data.getemail())
    			{
    			cout<<"The Employee aready exsit"<<endl;
    			return false;
    		
				}
                temp=temp->next;}
              Node<T>*temp2=head;
	         while(temp2->next!=NULL){
              	temp2=temp2->next;
              	}
            	temp2->next=newnode;
            	
}

			

 bool edit_salary(string e,double new_salary){
     	Node<T>*temp=head;
 if(head==NULL){
         cout<<"There is not employee in the list"<<endl;
         return false;
     }
     while(temp!=NULL){
    
		if(e!=temp->data.getemail()){
 		cout<<"The employee doesn't exsit "<<endl;
 	
	 }
	 else{
	 if(e==temp->data.getemail()){
    				temp->data.setsalary( new_salary);
    				
				}
	 	
				}
				temp=temp->next;}

}
 bool delete_employee(string email)   {
 	Node<T>*delptr=head;
 	if(head==NULL){
 		cout<<"There is no employee in the list"<<endl;
 		return false;
	 }
	 if(email==delptr->data.getemail()){
	     head=head->next;
	     delete delptr;
	     cout<<"The employee deleted"<<endl;
	 }
else if(email!=delptr->data.getemail()){

 			Node<T>* prev = NULL;
 			delptr = head;
 			while (delptr->data.getemail() != email)
 			{
 				prev = delptr;
 				delptr = delptr->next;
 				if(delptr==NULL){
 					cout<<"Employee doesn't exsit"<<endl;
 					return true;
				 }
 				
 			 }
 			prev->next = delptr->next;
 			delete delptr;
 			cout<<"The employee deleted"<<endl;}

 }
 	
 	
 bool update_info(string email){
 	Node<T>*temp=head;
 	if(head==NULL){
 			cout<<"There is no employee in the list "<<endl;
		 }
 	while(temp!=NULL){
 		
 		
		  if(email==temp->data.getemail()){
		     int x;
		 
		 	while(x!=6){
		 	cout<<"choose which attribute you want to change :" <<endl;
		 	
		 	cout<<"1.change the full name"<<endl;
		 	
		 	cout<<"2.change the email"<<endl;
		 	
		 	cout<<"3.change the phone"<<endl;
		 	
		 	cout<<"4.change the salary"<<endl;
		 	
		 	cout<<"5.change the position"<<endl;
		 	
		 	cout<<"6.display after you change  "<<endl;
		 	
		 	cout<<"enter the number"<<endl;
			 
		 	cin>>x;
			 if(x==1){
			 	string new_full_name;
			 	cout<<"Enter the new name"<<endl;
			 	cin>>new_full_name;
			 	temp->data.setfull_name(new_full_name);

			 }
			 if(x==2){
			 	string new_email;
			 	cout<<"Enter the new email"<<endl;
			 	cin>>new_email;
			 	temp->data.setemail(new_email);
			 	
			 	
			 }
		 	    if(x==3){
		 	        string new_phone;
		 	        cout<<"Enter the new phone"<<endl;
		 	        cin>>new_phone;
		 	        temp->data.setphone(new_phone);
		 	        
		 	    }
		 	    if(x==4){
		 	        double new_salary;
		 	        cout<<"Enter the new salary"<<endl;
		 	        cin>>new_salary;
		 	        temp->data.setsalary(new_salary);

		 	    }
		 	    if(x==5){
		 	        string new_position;
		 	        cout<<"Enter the new position"<<endl;
		 	        cin>>new_position;
		 	        temp->data.setposition(new_position);

		 	    }
		 	    if(x==6){
		 	        cout<<"The employee after change : "<<endl;

		 	    }
		 	}
		        
		 }
		 else{
 			cout<<"The employee doesn't exsit"<<endl;
 			
		 }
		 
		 temp=temp->next;
	 }
	 
 }
 
    	void display(){//to get out the data of the linked list
    	Node<T>* temp=head;
    	if(head==NULL){
    	    cout<<"There is no employee in the list "<<endl;
    	    
    	}
        while(temp!=NULL){   
            temp->data.display_employee_info();//to output the linked list values
            temp=temp->next;
            
        }
        
    }
};

int main() {
	EmployeeListt<Employee> s;
	Employee e1;
	
	

	int x;
	while(x!=6){
	
	
	
 cout<<"Welcome to the Employee Management System"<<endl;
    
 cout<<"Choose of the following to use the system features :"<<endl;
 
 cout<<"1. Insert a new Employee"<<endl;
 
 cout<<"2. Edit employee's salary"<<endl;
 
 cout<<"3. Delete an employee"<<endl;
 
 cout<<"4. Print all employees"<<endl;
  
 cout<<"5. update the info"<<endl;
 
 cout<<"6. Close the program"<<endl;
 cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
 
 cout<<"Enter the number to choose : "<<endl;
	
	cin>>x;
	
    
    if(x==1){
    	  cout<<"1. Insert a new Employee"<<endl;
    	  
    
    string email , full_name ,position,phone ;
    double salary;
    
    cout<<"Enter the full name "<<endl;
    cin>>full_name;
    cout<<"Enter the email"<<endl;
    cin>>email;
    cout<<"Enter the salary"<<endl;
    cin>>salary;
    cout<<"Enter the phone"<<endl;
    cin>>phone;
    cout<<"Enter the position"<<endl;
    cin>>position;
    Employee e(full_name,email,phone,salary,position);
    e.setfull_name(full_name);
    e.setemail(email);
    e.setsalary(salary);
    e.setphone(phone);
    e.setposition(position);
  
  
    
    	
    	s.insert_employee(e);
    	 s.display();
    	 cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
        
    }
    
    
    if(x==2){
	
    cout<<"2. Edit employee's salary"<<endl;
    string email;
    double new_salary;
    cout<<"Enter the email to serach for :"<<endl;
    cin>> email;
    cout<<"Enter the new salary"<<endl;
    cin>>new_salary;
	s.edit_salary(email,new_salary);
	s.display();
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	if(x==3){
	
    
    cout<<"3. Delete an employee"<<endl;
    string email;
    
    cout<<"Enter the email to serach for"<<endl;
    cin>>email;
    s.delete_employee(email);
    s.display();
    cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    
	}
	if(x==4){
	
    
    cout<<"4. Print all employees"<<endl;
	s.display();
	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	if(x==5){
	    string email;
	    cout<<"Enter the email to serach for :"<<endl;
	    cin>>email;
	    s.update_info(email);
	    s.display();
	    cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	
    if(x==6)
	
       cout<<"The program is closed"<<endl;
       cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
	}
    return 0;
}	
