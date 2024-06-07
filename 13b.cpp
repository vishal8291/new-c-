#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // Add this header for compatibility

using namespace std;

int main() 
{
    string inputString;

    // Input string from user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Calculate string length
    int stringLength = inputString.length();

    // Display string and length
    cout << "You entered: " << inputString << endl;
    cout << "String length: " << stringLength << endl;

    // Store string in a file
    string filename = "my_string.txt";
    ofstream outputFile(filename.c_str()); // Add .c_str() for compatibility

    if (outputFile.is_open()) {
        outputFile << inputString;
        outputFile.close();
        cout << "String successfully stored in " << filename << endl;
    } else {
        std::cerr << "Error opening file: " << filename << endl; // Use std::cerr
        return 1; // Return an error code
    }

    // Fetch stored characters from the file
    string storedString;
    ifstream inputFile(filename.c_str()); // Add .c_str() for compatibility

    if (inputFile.is_open()) {
        getline(inputFile, storedString);
        inputFile.close();
        cout << "Characters retrieved from the file: " << storedString << endl;
    } else {
        std::cerr << "Error opening file: " << filename << endl; // Use std::cerr
        return 1; // Return an error code
    }

    return 0;
}

