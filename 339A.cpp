#include <iostream>
using namespace std;

int main(){
    string the_operations, clean = "";

    cin>> the_operations;

    int size_operations = the_operations.length();
    for(int i=0; i<size_operations; i+=2){
        //cout<<the_operations[i]<<endl;
        char character = the_operations[i];
        clean+=character;
    }

    int size_clean = clean.length();
    for(int i=0; i<size_clean-1; i++){
        for(int j=0; j<size_clean-i-1; j++){
            if(clean[j] > clean[j+1]){
                swap(clean[j],clean[j+1]);
            }
        }

    }
    int i=0;
    for(i=0; i<size_clean-1; i++){
        cout<<clean[i]<<"+";
    }
    cout<<clean[i];
}