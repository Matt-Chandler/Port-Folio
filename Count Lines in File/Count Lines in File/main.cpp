//https://www.cprogramming.com/challenges/file_size.html
//In this challenge, given the name of a file, print out the size of the file, in bytes.If no file is given, 
//provide a help string to the user that indicates how to use the program.

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inFile;
    inFile.open("list.txt"); //Feed list.txt into std::ifstream 'inFile'

    int lineNumbers = 0;
    std::string temp;

    while (inFile >> temp) //Loop until all lines counted
    {
        lineNumbers++;
    }

    std::cout << "This file has " << lineNumbers << " lines." << std::endl; //Output number of file lines

    //Check for error
    /*if (inFile.fail())
    {
        std::cerr << "Error Opening File." << std::endl;
        exit(1);
    }*/

    return 0;
}