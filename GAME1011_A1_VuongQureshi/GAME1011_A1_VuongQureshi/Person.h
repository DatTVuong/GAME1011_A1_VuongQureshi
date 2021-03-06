#pragma once
#ifndef __PERSON__
#define __PERSON__
#include <string>

class Person final
{
private:
	int age;              //Holds the age of the person
	std::string name;     //Holds the name of the person

public:
	Person();
	Person(const std::string name, int age);
	virtual ~Person();
	virtual void DisplayInformation();
	
	//Setters
	void setAge(int age);
	void setName(const std::string name);

	//Getters
	int getAge() const;
	std::string getName() const;

	//Peron Properties
	std::string m_name;
	int m_age;
};
#endif
