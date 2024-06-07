#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1;

    // Inputting a string
    cout << "Enter a string: ";
    getline(cin, str1);

    // Calculating length of the string
    int length = str1.length();
    cout << "Length of the string: " << length << endl;

    // Storing the string in a file
    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << str1;
        outputFile.close();
        cout << "String successfully stored in output.txt" << endl;
    } else {
        cout << "Unable to open file for writing!" << endl;
        return 1;
    }

    // Fetching the stored characters from the file
    ifstream inputFile("output.txt");
    string fetchedString;
    if (inputFile.is_open()) {
        getline(inputFile, fetchedString);
        inputFile.close();
        cout << "String fetched from file: " << fetchedString << endl;
    } else {
        cout << "Unable to open file for reading!" << endl;
        return 1;
    }

    // Concatenation
    string concatStr = str1 + " Concatenated";
    cout << "Concatenated string: " << concatStr << endl;

    // Substring extraction
    int i = 3;
    int len2 = 5;
    string str2 = str1.substr(i, len2);
    cout << "Substring from index " << i << " with length " << len2 << ": " << str2 << endl;

    // Searching for a substring
    string str3 = "is";
    size_t found = str1.find(str3);
    if (found != string::npos) {
        cout << "Substring '" << str3 << "' found at index " << found << endl;
    } else {
        cout << "Substring '" << str3 << "' not found!" << endl;
    }

    // Converting to uppercase
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "Uppercase string: " << str1 << endl;

    // Converting to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout << "Lowercase string: " << str1 << endl;

    return 0;
}

