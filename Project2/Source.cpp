#include<locale>
#include"Worker.h"
/*Worker: Фамилия и инициалы, Должность, Год поступления на работу, Зарплата.
Создать массив объектов. Вывести:
a) список работников, стаж работы которых на данном предприятии 
превосходит заданное число лет;
b) список работников, зарплата которых превосходит заданную;
c) список работников, занимающих заданную должность. */
void main() {
	Worker workers[10];
	workers[0].setWorker("Ivanov", "P.O.", "director", 2000, 10000);
	workers[1].setWorker("Petrova", "O.K.", "manager", 2010, 6000);
	workers[2].setWorker("Sidorov", "K.M.","cashier ", 2012, 3000);
	workers[3].setWorker("Koshkunov", "L.O.", "worker", 2017, 5000);
	workers[4].setWorker("Lim", "P.P.", "cashier", 2001, 3500);
	workers[5].setWorker("Svetlova", "P.N.", "accountant", 2000, 9000);
	workers[6].setWorker("Krylov", "D.O.", " lawyer", 2000, 8000);
	workers[7].setWorker("Ryabina", "P.E.", "cleaner", 2015, 2000);
	workers[8].setWorker("Auezov", "A.O.", "cashier", 2016, 2500);
	workers[9].setWorker("Chaikin", "N.R.", "worker", 2014, 5000);
	
	int n;
	int count;
	string str;
	cout << "Enter the item: ";
	cin >> n;

	switch (n) {
	case 1:{
		system("cls");
		cout<< "Enter a number of years :";
		cin >> count;
		for (int i = 0; i < 10; i++) {
			if ((2018 - workers[i].getYy()) > count){
				cout << workers[i].getSname() <<"\t"<< workers[i].getInits() << "\t" << workers[i].getPosition() << "\t" << workers[i].getYy() << "\t" << workers[i].getSalary() <<endl;
			}}
	}break;

	case 2: {
		system("cls");
		cout << "Enter the salary:";
		cin >> count;
		for (int i = 0; i < 10; i++) {
			if (workers[i].getSalary()> count){
				cout << workers[i].getSname() << "\t" << workers[i].getInits() << "\t" << workers[i].getPosition() << "\t" << workers[i].getYy() << "\t" << workers[i].getSalary() << endl;
			}}		
	}break;

	case 3: {
	
		getchar();
		cout << "Enter a position:director,manager,cashier,worker,accountant,lawyer,cleaner: ";
		getline(cin, str);
		for (int i = 0; i < 10; i++) {
			if (workers[i].getPosition() == str){
				cout << workers[i].getSname() << "\t" << workers[i].getInits() << "\t" << workers[i].getPosition() << "\t" << workers[i].getYy() << "\t" << workers[i].getSalary() << endl;
			}}
	}break;
	}
	system("pause");	
}