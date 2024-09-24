#include <iostream>
#include <string>
using namespace std;

 class student
 {
   public:
   //properties(data members)
   string name;
   int rollNumber;
   int age;
   
   //function to display studend information 
   void displayInfo()
   {
     cout<<"name:"<<name<<endl;
     cout<<"rollnumber:"<<rollNumber<<endl;
     cout<<"age:"<<age<<endl;
   }
 };
 
 int main()
 {
   //create objects (instances)of students class
   student s1;
   student s2;
   
   //set properties for student1
   s1.name="payal";
   s1.rollNumber=04;
   s1.age=19;
   
   //set properties for student2
   s2.Name="roshan";
   s2.rollNumber=39;
   s2.age=21;
   
   //display info for each student
   
   cout<<"S1 information:"<<endl;
   s1.displayInfo();
   cout<<endl;
   // for better readability
   
   cout<<"S2 information:"<<endl;
    s2.displayInfo();
    
    
  return 0; 
   
 }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
   
   
   
   
   
 