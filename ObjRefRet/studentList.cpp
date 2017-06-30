/*
	StudentList.cpp
*/

#include <iostream>
#include "studentList.hpp"

StudentNode GenerateStudentNode(int tempRollno, string tempName) {
	StudentNode tempStudentNode;
	tempStudentNode.name = tempName;
	tempStudentNode.rollno = tempRollno;
	return tempStudentNode;
};

void StudentNode::setStudent(int tempRollno, string tempName) {
	name = tempName;
	rollno = tempRollno;
	NextStudent = NULL;
}

void StudentNode::printStudentDetails(void) {
	cout << "Student Name: " << name << endl;
	cout << "Student RollNo.: " << rollno << endl;
}

StudentNode * StudentNode::getNextPointer(void) {
	return NextStudent;
} 

void StudentNode::setNextPointer(StudentNode * tempStudentNode) {
	NextStudent = tempStudentNode;
}

void StudentList::initializeStudentList(void) {
	First = NULL;
}

void StudentList::insertStudent(int tempRollno, string tempName) {
	StudentNode * newStudentNode = new StudentNode;
	newStudentNode->setStudent(tempRollno, tempName);
	if(! First) {
		First = newStudentNode;
	} else {
		StudentNode * tempNode = First;
		while(tempNode->NextStudent) {
			tempNode = tempNode->NextStudent;
		}
		tempNode->NextStudent = newStudentNode;
	}
}

void StudentList::displayStudentList(void) {
	if(! First) {
		StudentNode * tempNode = First;
	
		while(tempNode->NextStudent) {
			tempNode->printStudentDetails();
			tempNode = tempNode->NextStudent;
		}
	} else {
		cout << "List is empty" << endl;
	}
}

StudentNode & StudentList::getStudent(string tempName) {
	StudentNode * tempNode = First;
	if(! tempNode) {
		cout << "List is empty" << endl;
	} else {
		while(tempNode->name != tempName) {
			tempNode = tempNode->NextStudent;
		}
		return * tempNode;
	}
}

void StudentList::deleteStudent(void) {
	if(! First) {
		StudentNode * tempNode = First;
	
		while(tempNode->NextStudent)
			tempNode = tempNode->NextStudent;
		delete tempNode->NextStudent;
		tempNode->NextStudent = NULL;
	} else {
		cout << "List is empty" << endl;
	}
}

int main() {
	StudentList Studlist;
	Studlist.insertStudent(1, "vipin");
	Studlist.insertStudent(2, "deva");
	Studlist.insertStudent(3, "jeeva");
	Studlist.insertStudent(4, "aravind");
	//Studlist.displayStudentList();
	return 0;
}
