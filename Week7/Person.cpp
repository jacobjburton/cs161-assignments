/****************************************************************************************************************
** Name: Jacob Burton
** Date: 02/16/2019
** Description: Constructor and methods for Person class.  Constructor takes two parameters, a string name and
**              and a double age.  Includes getName and getAge methods for returning the two parameters.
*****************************************************************************************************************/

#include "Person.hpp"
#include <string>

/****************************************************************************************************************
** Constructor that initializes name to string parameter, and age to double parameter.
*****************************************************************************************************************/
Person::Person(std::string nameIn, double ageIn) {
	name = nameIn;
	age = ageIn;
}

/****************************************************************************************************************
** getName method returns the name of the person.
*****************************************************************************************************************/
std::string Person::getName() {
	return name;
}

/****************************************************************************************************************
** getAge method returns the age of the person.
*****************************************************************************************************************/
double Person::getAge() {
	return age;
}

