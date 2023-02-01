#include <iostream>
using namespace std;

int main(){
    long long int horizontal_length_a, vertical_length_b, temp, num_ships = 0;
    cin>> horizontal_length_a>> vertical_length_b;
    while(horizontal_length_a%vertical_length_b!=0){
       num_ships+=horizontal_length_a/vertical_length_b;
       temp=vertical_length_b;
       vertical_length_b=horizontal_length_a%vertical_length_b;
       horizontal_length_a=temp;
    }
    num_ships+=horizontal_length_a/vertical_length_b;
    cout<<num_ships;
}