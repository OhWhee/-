#include "stdafx.h"
#include "Interface.h"

int MainMenu(TStaff& staff) {

	int n = 0;

	cout<<"1 - Add worker"<<endl;
	cout<<"2 - Insert worker"<<endl;
	cout<<"3 - Show workers"<<endl;
	cout<<"4 - Get max salary"<<endl;
	cout<<"5 - Exit"<<endl;

	cin>>n;

	switch (n)
	{
		case 1: staff.getpBegin() ? staff.Add() : staff.Create(); break;

		case 2: staff.getpEnd() ? staff.Insert(staff.getpEnd()->getCode()) : staff.Create(); break;

		case 3: staff.ShowWorkers(); break;

		case 4: {
					cout<<"Worker with MAX salary is: "<<endl;
					TWorker* pv = staff.GetMaxSalary();
					pv->PrintWorkerInfo();
				}
				break;

		case 5: break;

		default:
			cout<<"Wrong action number"<<endl;
	}

	return n;
}