/*
 Jake Busson
 Computer Science
 Due: Oct. 1, 2024
 Lab Name: Lab 3 User and File I/O
 Lab Description: In Lab 3, I wrote an interactive C++ code that computes and outputs the mean and standard deviation of 4 intergers. The 4 intergers are inputted into a file by prompts that the user is called upon for interger values. There is also an input file and output file where the numbers in the input file, once ran are computed to the output file.
 */
#include <iostream>
#include <string>
#include "StatsCalc.h" // including the header for the StatsCalc class
#include "fstream" // for file I/O
using namespace std;

int main()
{
    // declaring variables to hold the 4 intergers
    int number1;
    int number2;
    int number3;
    int number4;
  
    ifstream inFile; // created input file stream
    inFile.open("/Users/jakebusson/Desktop/Lab3/Lab3/inMeanStd.dat.txt"); // opening the input file
    inFile >> number1 >> number2 >> number3 >> number4; // gathering intergers from file
    inFile.close(); // closing the input file
    
    StatsCalc statsCalc;
    float mean = statsCalc.mean(number1, number2, number3, number4);
    
    StatsCalc StatsCalc;
    float standarddeviation = StatsCalc.standarddeviation(number1, number2, number3, number4);
    
    // file I/O
    ofstream outFile;
    outFile.open("/Users/jakebusson/Desktop/Lab3/Lab3/outMeanStd.dat.txt"); // open output file
    outFile << "The mean of the numbers is: " << mean << endl; // write mean
    outFile << "The standard deviation of the numbers is: " << standarddeviation << endl; // write standard deviation
    outFile.close();
    
    // prompt for user to enter intergers
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "You entered:" << number1 << endl;

    cout << "Enter the second number: ";
    cin >> number2;
    cout << "You entered:" << number2 << endl;

    cout << "Enter the third number: ";
    cin >> number3;
    cout << "You entered:" << number3 << endl;

    cout << "Enter the fourth number: ";
    cin >> number4;
    cout << "You entered:" << number4 << endl;

    // calculating mean for user entered intergers
    float average = statsCalc.mean(number1, number2, number3, number4);
    cout << "The mean of the numbers is: " << average << endl;
    
    // calulating standard deviation for use entered intergers
    float sd = StatsCalc.standarddeviation(number1, number2, number3, number4);
    cout << "The standard deviation of the numbers is: " << sd << endl;
    
    return 0;
}

