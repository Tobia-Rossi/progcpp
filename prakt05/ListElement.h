#pragma once

class ListElement
{
public:
	/**
	 * @brief Construct a new Listenelement object
	 *
	 * @param val The value of this new Listenelement
	 */
	ListElement(int val);

	/**
	 * @brief Destroy this ListElement instance and all of its
	 * successors (in heap mem)
	 *
	 */
	virtual ~ListElement();

	/**
	 * @brief Allocate a new ListElement with value i on the heap and
	 * insert this directly after this one. Equivalent to insert(n, 0)
	 *
	 * @param i The value of the new ListElement instance.
	 */
	void insertSuccessor(int i);

	/**
	 * @brief Allocate a new ListElement with value i on the heap and
	 * insert it after the n-th element after this one.
	 *
	 * @param i The value of the new ListElement instance.
	 * @param n The position relative to this element.
	 *
	 */
	void insertSuccessorAt(int i, int n);

	/**
	 * @brief Remove the successor of this ListElements releasing allocated
	 * heap memory. Equivalent to removeSuccessorAt(0).
	 *
	 */
	void removeSuccessor();

	/**
	 * @brief Remove the successor of the n-th ListElement after this one.
	 * Release heap memory of the element to be deleted.
	 *
	 * @param n The position relative to this element.
	 *
	 */
	void removeSuccessorAt(int n);

	/**
	 * @brief Get the number of elements behind this one in this list
	 *
	 * @return int Number of list elements.
	 */
	int getElementCount();

	/**
	 * @brief Print values of this element and all of its successors in
	 * the list order .
	 *
	 */
	void printWithAllSuccessors();

private:
	/**
	 * @brief Construct a new Listenelement object with successorAddress
	 * pointing to s.
	 *
	 * @param val The value of this new Listenelement.
	 * @param s The successor address of this new Listelement.
	 */
	ListElement(int val, ListElement *s);
	/**
	 * @brief The stored value;
	 *
	 */
	int value;

	/**
	 * @brief Pointer to next element. If none: nullptr
	 *
	 */
	ListElement *successorAddr;
};