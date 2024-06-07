#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayFileContent(const string& filename) {
    ifstream file(filename.c_str()); // Add .c_str() for compatibility
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string sourceFilename, destinationFilename;

    // Get source and destination filenames from the user
    cout << "Enter the source file name (e.g., MY_CPP/source.txt): ";
    cin >> sourceFilename;
    cout << "Enter the destination file name (e.g., NEW_CPP/destination.txt): ";
    cin >> destinationFilename;

    // Open source file for reading
    ifstream sourceFile(sourceFilename.c_str()); // Add .c_str() for compatibility

    // Check if source file opened successfully
    if (!sourceFile.is_open()) {
        cerr << "Error opening source file: " << sourceFilename << endl;
        return 1;
    }

    // Open destination file for writing
    ofstream destinationFile(destinationFilename.c_str()); // Add .c_str() for compatibility

    // Check if destination file opened successfully
    if (!destinationFile.is_open()) {
        cerr << "Error opening destination file: " << destinationFilename << endl;
        sourceFile.close(); // Close source file even if the destination fails to open
        return 1;
    }

    // Read and write characters one by one
    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }

    // Close files
    sourceFile.close();
    destinationFile.close();
    cout << "File copied successfully." << endl;

    // Display original file content
    cout << "\nContents of source file (" << sourceFilename << "):" << endl;
    displayFileContent(sourceFilename);

    // Display copied file content
    cout << "\nContents of destination file (" << destinationFilename << "):" << endl;
    displayFileContent(destinationFilename);

    return 0;
}



int main(){
	void displayFilecontent(const string& filename){
		ifstream file(filename.c_str());
	if(!file.is_open()){
		cerr<<"error opening file:"<<file<<endl;
		return;
	}
	string line;
	while(getline(file,line)){
		cout<<file<<endl;
	}
	file.close();
}
int main(){
	string sourceFilename,destinationFilename;
	cout<<"enter the source filename:";
	cin>>sourceFilename;
	cout<<"enter the destinationFilename:";
	cin>>destinationFilename;
	//open sourceFile for reading
	ifstream(sourcr.c_str());
	if(!sourceFile.is_open()){
		cerr<<"error opening source file:"<<sourceFile
	}
}
