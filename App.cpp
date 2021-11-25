/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spector Reese
 */

#include <iostream>
using namespace std;

int main() {
    
    //initialize variables
	string symbol;	
	double inputOne = 0, inputTwo = 0, total = 0;
	
	//prompt user
	cout << "Define an operator, then two numbers \n";
    
    //ingest user input - symbol number number 
    cin >> symbol >> inputOne >> inputTwo;
    
    //if addition
	if (symbol == "+" || symbol == "plus") {
	    total = inputOne + inputTwo;
	}
	    
	//if subtraction
	if (symbol == "-" || symbol == "minus") { 
	    total = inputOne - inputTwo; 
	}
	
	//if multiplication
	if (symbol == "*" || symbol == "mul") {
	    total = inputOne * inputTwo;
	}	
	
	//if division
	if (symbol == "/" || symbol == "div") {
		total = inputOne / inputTwo;
	}
	
	//print result
	cout << inputOne << ' ' << symbol << ' ' << inputTwo << " = " << total;

	//return
	return 0;
}
