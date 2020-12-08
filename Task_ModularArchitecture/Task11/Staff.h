#include "Worker.h"

class TStaff {	

private:
	TWorker* pBegin;
	TWorker* pEnd;

public:	

	TStaff() { pBegin = NULL; pEnd = NULL; }
	
	~TStaff() { 
		if(pBegin != NULL) delete pBegin;
		if(pEnd != NULL) delete pEnd;
	}

	void setpBegin(TWorker *pBeginVal) { pBegin = pBeginVal; }
	TWorker* getpBegin() { return pBegin; }
	void setpEnd(TWorker *pEndVal) {  pEnd = pEndVal; }
	TWorker* getpEnd() { return pEnd; }

	void Create();
	void Add();
	void Insert(int key);
	void Delete(int key);
	void ShowWorkers();
	bool IsUnique(int key);
	TWorker* Find(int key);

	TWorker* GetMaxSalary();
};