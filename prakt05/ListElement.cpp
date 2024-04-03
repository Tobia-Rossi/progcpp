//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt05/a1
// Project Code:     progpp05a1

// File Name:        ListElement.cpp
// File Description: Implementation of the class ListElement
// File Code:        progpp05a1listelementcpp

// Author Name:	 Tobia Rossi
// Author Code:	 tuoyo

//-------------------------------------------------------
// Code Begin
//-------------------------------------------------------

// Application includes
#include "ListElement.h"
#include <iostream>

ListElement::ListElement(int val) {
	value = val;
	successorAddr = nullptr;
}

ListElement::ListElement(int val, ListElement* s) {
	value = val;
	successorAddr = s;
}

ListElement::~ListElement () {
	if (successorAddr == nullptr) {
		return;
	}

	delete successorAddr;
}

void ListElement::insertSuccessor(int i) {
	successorAddr = new ListElement(i, successorAddr);
}

void ListElement::insertSuccessorAt(int i, int n) {
	if (n == 0) {
		insertSuccessor(i);
	} else if (n > 0) {
		successorAddr->insertSuccessorAt(i, (n - 1));
	} else {
		std::cout << "Error: successor cannot be before this element" << std::endl;
	}
}

void ListElement::removeSuccessor() {
	if (successorAddr == nullptr) {
		std::cout << "there is no successor at pos!" << std::endl;
		return;
	}

	if (successorAddr->successorAddr == nullptr) {
		delete successorAddr;
		successorAddr = nullptr;
	} else {
		ListElement* temp = successorAddr;
		successorAddr = temp->successorAddr;
		temp->successorAddr = nullptr;
		delete temp;
	}
}

void ListElement::removeSuccessorAt(int n) {
	if (n == 0) {
		removeSuccessor();
	} else if (n > 0) {
		successorAddr->removeSuccessorAt((n - 1));
	} else {
		std::cout << "Error: successor cannot be before this element" << std::endl;
	}
}

int ListElement::getElementCount() {
	if (successorAddr == nullptr) {
		return 1;
	}

	return (successorAddr->getElementCount() + 1);
}

void ListElement::printWithAllSuccessors() {
	if (successorAddr == nullptr) {
		std::cout << value << std::endl;
	} else {
		std::cout << value << ",";
		successorAddr->printWithAllSuccessors();
	}
}

//-------------------------------------------------------
// Code End
//-------------------------------------------------------