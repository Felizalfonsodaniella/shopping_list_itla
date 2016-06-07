/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	if (FirstElement == NULL){
        FirstElement = element;
        latestElement = element;
    } else {
        latestElement -> setNext(element);
        latestElement = element;
    }
	cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	 Element* i = getFirstElement();
    //removeElement = element;
    Element* _element;
    cout<< i -> getCode();
    cout<< element -> getCode();
    //while (i != NULL ){
        //cout << element -> getCode();
        //delete(i);
        if (element -> getCode() == _element -> getCode()){
            cout << "It found a match";
           // remove(i -> getNext());
        //}

        //i -> getNext();
    }
	cout << "You should write the code for removing the index " << index << endl;
}
