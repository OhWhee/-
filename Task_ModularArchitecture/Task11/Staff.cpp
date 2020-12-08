#include "stdafx.h"
#include "Staff.h"

void TStaff::Create() {
	
	pBegin = new TWorker;
	pBegin->EnterWorkerInfo();

	pEnd = pBegin;
}

void TStaff::Add() {

	TWorker* pv = new TWorker;
	pv->EnterWorkerInfo();
	while (!IsUnique(pv->getCode())) {
		cout << pv->getName() << " with code: " << pv->getCode() << " is not unique!" << endl;
		return;
	}

	pEnd->setpNext(pv);
	pv->setpPrev(pEnd);

	pEnd = pv;
}

void TStaff::Insert(int key) {

	TWorker* pCurrent = Find(key);


	if(pCurrent) {

		if(pCurrent == pEnd) {
			/*if (!pBegin->pNext) {
				Create();
			}*/
			Add();
		}
		else {

			TWorker* pv = new TWorker;
			pv->EnterWorkerInfo();

			pv->setpNext(pCurrent->getpNext());
			pv->setpPrev(pCurrent);

			(pCurrent->getpNext())->setpPrev(pv);
			pCurrent->setpNext(pv);
		}
	}
}

void TStaff::Delete(int key) {

	TWorker* pCurrent = Find(key);

	if(pCurrent) {

		if(pCurrent == pBegin) {

			(pBegin->getpNext())->setpPrev(nullptr);
			pBegin = pBegin->getpNext();
		}
		else if(pCurrent == pEnd) {

			(pEnd->getpPrev())->setpNext(nullptr);
			pEnd = pEnd->getpPrev();
		}
		else {

			(pCurrent->getpPrev())->setpNext(pCurrent->getpNext());
			(pCurrent->getpNext())->setpPrev(pCurrent->getpPrev());
		}

		delete pCurrent;
	}
}

TWorker* TStaff::Find(int key) {

	TWorker* tmp = pBegin;

	while(tmp != NULL && tmp->getCode() != key) {

		tmp = tmp->getpNext();
	}

	return tmp;
}

bool TStaff::IsUnique(int key) {

	TWorker* tmp = pBegin;

	while(tmp != NULL) {
		if (tmp->getCode() == key) {
			return false;
		}
		tmp = tmp->getpNext();
	}

	return true;
}

void TStaff::ShowWorkers() {

	TWorker* pv = pBegin;

	while(pv) {

		pv->PrintWorkerInfo();
		pv = pv->getpNext();	
	}
}

TWorker* TStaff::GetMaxSalary() {

   int index = 0;
   float max_salary = pBegin->getSalary();
   TWorker* pv = pBegin;
   TWorker* result = pBegin;
   
   while(pv) {

	   if (pv->getSalary() > max_salary){

		   max_salary = pv->getSalary();
		   result = pv;
	   }

	   pv = pv->getpNext();
   }

   return result;
}