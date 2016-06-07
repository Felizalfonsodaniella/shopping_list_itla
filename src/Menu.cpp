/*
 * Menu.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 4)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		removeItems();
		break;
	case 4:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listItems()
{
	
	cout << "Implement  Menu::listItems" << endl;
	 system("cls");
    Element* i = list -> getFirstElement();

    while (i != NULL){
        cout << i -> getCode() << ".- " << i -> getName() << " " << i -> getQuantity() <<endl;
        i = i -> getNext();
    }
    Element *lista2 = list -> getFirstElement();
    while (i != NULL){
        cout << list2 -> getCode() << ".- " << list2 -> getName() << " " << list2 -> getQuantity() <<endl;
        list2 = list2 -> getNext();
    }
    system("pause");
}

void Menu::addItems()
{
	
	cout << "Implement  Menu::addItems" << endl;
	system("cls");
    string name;
    int quantity;
    cout<<"introduce articles" <<endl;
    cout<<"\n enter the name of the article: ";
    cin >> name;
    cout<<"enter the amount of the new contact: ";
    cin >> quantity;
    Element* article = new Element(code, name, quantity);
    list -> add(article);
    code++;
    system("pause");
}

void Menu::removeItems()
{
	
	cout << "Implement  Menu::removeItems" << endl;
	  system("cls");
    int _code, Code;
    cout<<"remove article\n ";
    cout<<"Enter the code the article: ";
    cin >> _code;
    Element* i = list -> getFirstElement();
    while (i != NULL){
        if (_code == i -> getCode()) {
            Element* article = new Element(i -> getCode(), i -> getName(), i -> getQuantity());
            list -> remover(article);
        }
        i = i -> getNext();
    }
    system("pause");
}

void Menu::show()
{
	int option;
	do
	{	
		clearScreen();
		cout << "ITLA Shopping List" << endl;
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=4);
}
