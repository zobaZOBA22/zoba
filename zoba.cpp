/*MY name:Zeinb Salah Abdalkreem
Class: Level 2 
Department:Computer Engineering
*/
#include<iostream>
#include<string>
using namespace std;
main()
{
string name;
                                                          
char y,z;
char A,T;
int grade,b;
cout<<"Enter your  Name:";                                                             //enter your name 
getline(cin,name);                                                                   //funation particularly of name            
cout<<"Enter your Number: "<<"\n";cin>>b;                                                 //enter uuniversit number
cout<<"Enter the Grade = ";cin>>grade;                                               // enter your grade
if((grade>=90)&&(grade)<=100)                                                     
      cout<<"A"<<"\n";
else if((grade<90)&&(grade)>=80) 
      cout<<"B"<<"\n";
else if ((grade<80)&&(grade)>=70)	  
	  cout<<"C"<<"\n";
else if ((grade<70)&&(grade)>=60)	  
	  cout<<"D"<<"\n";
else if((grade<60)&&(grade)>=50)	
      cout<<"F"<<"\n";	
cout<<"Enter your Department: "<<"\n";cin>>z;                                   //enter the department
if (z=='A')                                                                     //test the depart if==A
        cout<<"Control Department"<<endl;                                       //if department==A print control Department
else if(z=='T')                                                                 //test the department if==T
        cout<<"Communication Department"<<endl;                                 //if department==Tprint communication Department
else 
        cout<<"Error"<<"\n";	                                               //if the enter not A or T print error 
    return 0;
}
