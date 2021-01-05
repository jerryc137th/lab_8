#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){
	double loan,perc,pay,newb,interest,total;
	int year=1;	
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>perc;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	interest = loan*(perc/100.0);
	cout << setw(13) << left << interest;
	total = loan+interest;
	cout << setw(13) << left << total;
	if(pay>total){
		cout << setw(13) << left << total; 
		cout << setw(13) << left << "0.00";
		cout << "\n";
		break;
	}
	cout << setw(13) << left << pay;
	newb = total-pay;
	cout << setw(13) << left << newb;
	cout << "\n";
	year++;
	loan = newb;
	
		
	}while(true);
	
	return 0;
}
