#pragma once
#ifndef __PERSON__
#define __PERSON__
#include <string>

class Person
{
private:                      //Private Variables
	int age;                  //Age
	std::string fullName;     //Full Name 

public:
	//Constructor for age
	Person (int age){
		this->age = age;
	}
	
	//Constructor for name
	Person (std::string name){
		this->Name = name;
	}

	//Setters
	void setAge(int age);
	void setName(std::string name);

	//Getters
	int getAge();
	std::string getName();

};
#endif
