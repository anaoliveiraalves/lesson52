/*
 * aluno.h
 *
 *  Created on: 18/05/2018
 *      Author: aet
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>

using namespace std;

class Student{
	const int year;
	int number;
	string name;
public:
	Student();
	Student(const string & nam, int n=1, int y=2018);
	int getNumber() const; //this member function is const so it can be called on constant and non-constant objects
	int & getSetNumber();
	void setNumber(int n);
	void show() const;
	//... other get and set function for the remaining member
	~Student();
};




#endif /* STUDENT_H_ */
