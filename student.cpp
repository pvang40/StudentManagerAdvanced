#include "student.h" 
#include <string> 
#include <iostream> 

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
                   
void student::addGrade(double value); 
{


}

double student::getScore(); 
{

} 
