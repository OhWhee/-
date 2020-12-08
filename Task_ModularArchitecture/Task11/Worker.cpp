#include "stdafx.h"
#include "Worker.h"

TWorker::TWorker() {
	
	strcpy_s(name, "\0");
	code = 0;
	salary = 0.0;

	pPrev = NULL;
	pNext = NULL;
}

void TWorker::EnterWorkerInfo() {

	cout << "Enter worker name: ";
	cin >> name;
	cout << "Enter worker code: ";
	cin >> code;
	cout << "Enter worker salary: ";
	cin >> salary;
}

void TWorker::PrintWorkerInfo() {

    cout << "Name: "<<name<<endl;
	cout << "Code: "<<code<<endl;
	cout << "Salary: "<<salary<<endl;
}