#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string filename;
    getline(cin, filename);
    string line;

    ifstream myfile(filename);
    while (!myfile.eof()){
        getline(myfile,line);
        cout << line << endl;
    }
    myfile.close();

    return 0;
}
