
class TWorker {

private:
	char name[30];
	int code;
	float salary;
	TWorker* pPrev;
	TWorker* pNext;


public:
	char getName() { return *name; }
	int getCode() { return code; }
	float getSalary() { return salary; }

	char setName(char nameVal) { *name = nameVal; }
	int setCode(int codeVal) { code = codeVal; }
	float setSalary(float salaryVal) { salary = salaryVal; }


	TWorker * getpPrev() { return pPrev; }
	TWorker * getpNext() { return pNext; }
	void setpPrev(TWorker* pPrevVal) { pPrev = pPrevVal; }
	void setpNext(TWorker* pNextVal) { pNext = pNextVal; }




	TWorker();

	void EnterWorkerInfo(); // TWorker& worker
	void PrintWorkerInfo(); // const TWorker& worker
};