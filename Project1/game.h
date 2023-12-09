#ifndef GAME_H
#define GAME_H

#include <iostream>
using namespace std;

inline void game() {
	int age;
	int name;
	// Assuming void return type
	std::cout << R"(
HuskyNZ's Simple C++ game                                                                                                                                                                                                                                                                                                                                                                                                                                     
)" << '\n';

	cout << "Welcome to the game!";
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << "! Welcome to the game!";
cout << "Please enter your age: ";
cin >> age;
cout << "You are " << age << " years old!";



}

#endif GAME_H
