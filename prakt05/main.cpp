#include <iostream>
#include "listelement.h"

using namespace std;

int main() {
    ListElement le{1};
    le.printWithAllSuccessors();    // 1
    cout << "List has " << le.getElementCount() << " element" << endl;
    le.insertSuccessor(2);      
    le.printWithAllSuccessors();    // 1,2
    le.insertSuccessor(3);      
    le.printWithAllSuccessors();    // 1,3,2
    le.insertSuccessor(4);      
    le.printWithAllSuccessors();    // 1,4,3,2
    le.insertSuccessorAt(7, 1); 
    le.printWithAllSuccessors();    // 1,4,7,3,2
    le.insertSuccessorAt(8, 2); 
    le.printWithAllSuccessors();    // 1,4,7,8,3,2
    le.insertSuccessorAt(9, 3); 
    le.printWithAllSuccessors();    // 1,4,7,8,9,3,2
    cout << "List has " << le.getElementCount() << " elements" << endl;
    le.removeSuccessor();       
    le.printWithAllSuccessors();    // 1,7,8,9,3,2
    le.removeSuccessorAt(0);    
    le.printWithAllSuccessors();    // 1,8,9,3,2
    le.removeSuccessorAt(2);    
    le.printWithAllSuccessors();    // 1,8,9,2
    le.removeSuccessorAt(2);    
    le.printWithAllSuccessors();    // 1,8,9
    le.removeSuccessorAt(2);        // there is no successor at pos 2!
    le.printWithAllSuccessors();    // 1,8,9
    cout << "List has " << le.getElementCount() << " elements" << endl;
    return 0;
}