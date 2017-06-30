#ifndef STUDENTLIST_H
#define STUDENTLIST_H


#include <string>
using namespace std;

class StudentNode {

public:
	string name;
	int rollno;
	StudentNode * NextStudent;
	void setStudent(int tempRollno, string tempName);
	void printStudentDetails(void);
	StudentNode * getNextPointer(void);
	void setNextPointer(StudentNode * tempStudentNode);
	friend StudentNode GenerateStudentNode(int tempRollno, string tempName);
	friend class studentList;
};

class StudentList {
	StudentNode * First;
public:
	void initializeStudentList(void);
	void insertStudent(int tempRollno, string tempName);
	void displayStudentList(void);
	StudentNode & getStudent(string tempName);
	void deleteStudent(void);

};

#endif /*STUDENTLIST_H*/
