/*Worker: Фамилия и инициалы, Должность, Год поступления на работу, Зарплата. 
Создать массив объектов. Вывести: 
a) список работников, стаж работы которых на данном предприятии превосходит заданное число лет; 
b) список работников, зарплата которых превосходит заданную; 
c) список работников, занимающих заданную должность. */
#ifndef _WORKER_H_
#define _WORKER_H_
#include <string>
#include <iostream>

using namespace std;

class Worker {
private:
	string sname;
	string inits;
	string position;
	int yy;
	int salary;

public:
	void setSname(const string &sname) {	this->sname = sname;}
	void setInits(const string &inits) { this->inits = inits; }
	void setPosition(const string &position) { this->position = position; }
	void setYy(const int &yy) { this->yy = yy; }
	void setSalary(const int &salary) { this->salary = salary; }
	void setWorker(const string &sname, const string &inits, const string &position, const int &yy, const int &salary) {
		this->sname = sname;
		this->inits = inits;
		this->position = position;
		this->yy= yy;
		this->salary = salary;
	}
	string getSname() { return sname; }
	string getInits() { return inits; }
	string getPosition() { return position; }
	int getYy() { return yy; }
	int getSalary() { return salary; }
};

#endif