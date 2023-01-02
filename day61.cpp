#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string st;
    ofstream open;
    open.open("newfile.txt");
    cout<<"enter your dream here: "<<endl;
    cin>>st;
    open<<st;
    open<<"Devesh";
    open.close();
    ifstream input;
    input.open("newfile.txt");
    input>>st;
    cout<<st;
    input.close();
    input>>st;
    cout<<st;
    return 0;
}