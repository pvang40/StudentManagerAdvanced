#ifndef STUDENT_H 
#define STUDENT_H 
#include <string>
#include <iostream> 
#include <vector>

class student 
{ 
    private:
    std::string last; 
    std::string first; 
    std::vector< double > grades; 

    public:
    std::string fullName();      
    void setName(std::string, std::string); 
    double getScore(); 
    void addGrade(double); 
                     
}; 


                     #endif
