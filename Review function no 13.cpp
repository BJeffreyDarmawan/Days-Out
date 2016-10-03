#include <iostream>
 	#include <cmath>
 	
 	using namespace std;
 	
 //function 1 is employees working in the company	
 	int noOfEmployee()
 	{
		int a;
 		do{
		 
		cout<<"Enter number of employee: ";cin>>a;
		} while(a < 1);
		return a;
	}

//function 2 is sum of absence of all employees	
	int missedDays(int emplo) // int emplo is 'a' from noOfEmployee
	{
		cout<<"Number of absence the employee did this past year."<<endl;
		int noEmplo=1;
		int totalAbsence=0, absence;
		while(noEmplo<=emplo)
		{
			do{
			cout<<"Employee no. "<<noEmplo<<" ";
			cin>>absence;
			} while (absence<0);
			totalAbsence = totalAbsence + absence;
			noEmplo++;
		}
		return totalAbsence;
	}
//function 3 is the average number of days absent
	double averageAbsence(double emplo, double totalAbsence) 
		{
			double aveAbsence = totalAbsence / emplo;
			return aveAbsence;
		}	
	
	
//MAIN		
	int main()
	{
		
		int m, k;
		m=noOfEmployee();
		//value of m = a from the function
		k=missedDays(m);
		//value of k = totalAbsence from the function
		
		cout<<"Average absence each employee is "<<averageAbsence(m,k);
		
	}	
 	
