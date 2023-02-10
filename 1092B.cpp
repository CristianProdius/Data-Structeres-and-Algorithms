#include <iostream>
using namespace std;

void selection_sort(int arr[], int size){
    for(int i=0; i<size-1;i++){
        int min_Index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]< arr[min_Index]){
                min_Index = j;
            }
        }
        int temp = arr[min_Index];
        arr[min_Index] = arr[i];
        arr[i] = temp;       
    }
}

int main(){
    int num_stutents, promlem_solved = 0, availabel_teams = 0;
    cin>> num_stutents;

    int *students = new int[num_stutents];

    for(int i=0; i<num_stutents; i++){
        cin >> students[i];
    }

    //selection sort
    selection_sort(students, num_stutents);

    /*for(int i=0; i<num_stutents; i++){
        cout<<students[i]<<" ";
    }
    */

    for(int i=1; i<num_stutents; i+=2){
        availabel_teams += students[i]-students[i-1];
    }
    cout<< availabel_teams;    
} 