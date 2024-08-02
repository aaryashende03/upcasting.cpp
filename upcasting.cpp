//Program: In the below given program we learn about the concept of upcasting , downcasting , which  is achieved through dynamic memory allocation of memory. Upcasting -> when a small quantity points out to the larger quantity the nit is known as upcasting .
//Downcasting -> when a larger quantity points out the smaller quantity the it is known as the downcasting 


#include<iostream>
using namespace std;
class Base
{
	public:
	
	         int a , b;

void fun()
{
cout<<"Inside Base fun"<<"\n";
}

};

class Derrived: public Base 
{
public :

            int x , y;

void gun()
{
cout<<"Inside Derrived gun"<<"\n";
}

};

int main()
{
char ch = 'A';  
int no = 11;
char*cp1 = & ch; //char -> char //No casting

int*ip2 = & no ; //int -> int //No casting

char*cp2 = (char*)& no; //char -> int (upcasting)

//int*ip2 = (int*)&ch; //int -> char (downcasting)

Base* bp1 = new Base(); //Base -> Base   //No casting

Derrived*dp1 = new Derrived(); //Derrived -> Derrived  //No casting

Base*bp2 = new Derrived(); //Base -> Derrived (upcasting)

//Derrived*dp2 = new Base(); //Derrived -> Base (downcasting)

return 0;
}	