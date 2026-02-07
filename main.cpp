#include <iostream>
#include<fstream>
#include<iomanip>
#include <string>


using namespace std;
int main() {
  //std::cout << "Hello World!\n";

//variables
string fileType;

ifstream inData;
ofstream outData; 

// file access program
cout << "Please type which file you'd like to access" << endl; 
cin >> fileType;


inData.open(fileType);

outData.open("output.dat");

// in file variables


string firstName, lastName;
double baseSalary, commissionPercent, totSales, expenses;
inData >> firstName >> lastName >> baseSalary >>commissionPercent >> totSales >> expenses;

// employee program and computations
double commission = (commissionPercent/100) * totSales;
double total = baseSalary + commission + expenses; 

cout << fixed << setprecision (2);

cout << "Payroll data for " << firstName << " " << lastName << endl;
cout << endl;
cout << left << setw(15) << "Base Salary: " << right << setw(10) << baseSalary << endl;
cout << left << setw(15) << "Commission: " << setw(10) << right << commission << " ( " << commissionPercent << "% of " << totSales << ")" << endl;
cout << left << setw(15) << "Expenses: " << right << setw(10) << expenses << endl;
cout << setw(25) << " ----------" << endl;
cout << left << setw(15) << "Total: " << right << setw(10) << total << endl; 









}
