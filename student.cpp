#include "student.h" 
#include <string> 
#include <iostream> 
#include <vector>
using namespace std; 

void student::setName(string firstInput, string lastInput) 
{
   last = lastInput; 
      first = firstInput; 
      } 

string student::fullName()
      { 
         first.append(" ");
            first.append(last); 
               return first;
               } 
                   
void student::addGrade(double input) 
{
    grades.push_back(input);      

}

double student::getScore()
{   double finalGrade;
    double number=0; 
    for(int i = 0 ; i<grades.size(); i++)
    {
    number = number + grades[i]; 
    } 
    finalGrade = number/grades.size(); 
    return finalGrade; 
} 
