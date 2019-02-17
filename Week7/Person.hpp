/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Class specification file for Person class.  Declares Person class that has two data members:
**              a string variable called name, and a double variable called age.  Constructor takes two 
**              parameters and intializes them as the two data members.  Includes getName and getAge methods
**              for returning the two parameters.
*****************************************************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
	private:
		std::string name;
		double age;
	public:
		Person(std::string, double);
		std::string getName();
		double getAge();
};
#endif