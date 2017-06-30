// ObjRefReturn.cpp
#include <iostream>
#include <string>
using namespace std;
// The following class describes the node in the linked list
class StudentNode
{
	string Name;
	StudentNode *NextStud;
	public:
	int RollNo;
	// Inserting roll no., name and setting NextStud value to null
	void SetStud(int TempRollNo, string TempName)
	{
		RollNo = TempRollNo;
		Name = TempName;
		NextStud = '\0';

	}

	void WriteStud()
	{
		cout << "Roll number is " << RollNo << "and the name is " << Name << endl;
	}

	StudentNode * GetNextPtr()
	// Get the next pointer pointing to the next item in the list
	{
		return NextStud;
	}
	void SetNextPtr(StudentNode * TempPointer)
	// Make the next pointer point to the value passed
	{
		NextStud = TempPointer;
	}
	// Given roll number and name, create an object of student node
	friend StudentNode GenerateStudentNode(int TempRollNo, string TempName);
	/* StudentNode class and all the members of this class are friends of this function.
	Hence, it can access the private members of StudentNode class */
	friend class StudentList;
	/* So all members of StudentList class can refer to our private members */
};

StudentNode GenerateStudentNode(int TempRollNo, string TempName)
{
	StudentNode TempStudNode;
	TempStudNode.RollNo = TempRollNo;
	TempStudNode.Name = TempName;
	return TempStudNode;
};


class StudentList
{
	StudentNode *First;
public:
	void InitializeList()
	{
		First = '\0';
	}
	/* Inserting a student node at the end of a linked list after allocating memory */
	void InsertList(int TempRollNo, string TempName)
	{
		StudentNode *NewStudent = new StudentNode;
		NewStudent -> SetStud(TempRollNo, TempName);
		if(!First)
		First = NewStudent;
		/* If there is no other element, that is, fi rst is null; then, this is the fi rst
		element */
		else
		{
		StudentNode *TempPtr = First;
		while(TempPtr -> NextStud)
		TempPtr = TempPtr->NextStud;
		// Reached the end of the linked list
		TempPtr -> NextStud = NewStudent;
		// Adding an element there
		}
	}
	void DisplayList()
	{
		StudentNode *TempPtr = First;
		while(TempPtr)
		{
		TempPtr -> WriteStud();
		TempPtr = TempPtr->NextStud;
		}
	}
	/* Finding out the student object containing the required name and return reference to
	that object */
	StudentNode & GetStudent(string TempName)
	{
		StudentNode * TempPtr = First;
		while(TempPtr -> Name != TempName)
		{
		TempPtr = TempPtr -> NextStud;
		if(!TempPtr)
		{
		cout << "Error";
		//exit(1);
	}
}
return *TempPtr;
}
};
int main()
{
// StudentList StudList;
// StudList.InsertList(1,"Robin");
// StudList.InsertList(2,"Leena");
// StudList.InsertList(3,"Bob");
// StudList.InsertList(4,"Sam");




// //StudList.DisplayList();
// cout << "Insert the name of student you want to change:";
// string OriginalName, NewName;
// cin >> OriginalName;
// cout << "\n Insert new name: ";
// cin >> NewName;
// cout << "\n Insert new roll no.: ";
// int NewRollNo;
// cin >> NewRollNo;
// // Generate a new node with new roll number and new name
// StudentNode NewNode = GenerateStudentNode(NewRollNo, NewName);
// /* Get the next pointer value of the old student node and then set it in the new node */
// NewNode.SetNextPtr(StudList.GetStudent(OriginalName).GetNextPtr());
// /* The following statement is not possible if GetStudent() does not return reference */
// StudList.GetStudent(OriginalName) = NewNode;
// // Replacing the old object with a new one
// //StudList.DisplayList();
// return 0;
}
