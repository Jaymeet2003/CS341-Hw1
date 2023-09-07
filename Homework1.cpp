#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string filename;
    getline(cin, filename); // reading line into filename from input
    string line;

    ifstream myfile(filename); //opening file for reading only

    if(!myfile.is_open()){
        cerr << "Unable to locate the file" << endl; // display error message if file is not open or found
    }else{
        while (!myfile.eof()){ // loop until file reaches end of file
            getline(myfile,line); // reading contents of file line by line
            cout << line << endl; // printing each line
        }
    }
    myfile.close();

    return 0;
}
