#include <iostream>
 	#include <cmath>
 	
 	using namespace std;
 	
 	int noOfEmployee()
 	
 	{
		int a;
 		do{
		 
		cout<<"Enter amount of employee: ";cin>>a;
		} while(a < 1);
		return a;
	}


	int missedDays(int emplo) 
	
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

 	
