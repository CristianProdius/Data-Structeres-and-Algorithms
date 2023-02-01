#include <iostream>
using namespace std;

int main(){
    int nth_fibonaci_num;
    cin >> nth_fibonaci_num;

    int *fibonaci_nums = new int[nth_fibonaci_num];

    for(int i=0; i<nth_fibonaci_num; i++){
        if(i==0){
            fibonaci_nums[i] = 0;
        } else if(i==1){
            fibonaci_nums[i] = 1;            
        }
        else{
            fibonaci_nums[i] = fibonaci_nums[i-1]+fibonaci_nums[i-2];
        }
    }

    for(int i=0; i<nth_fibonaci_num; i++){
        cout<<fibonaci_nums[i]<<endl;
    }
    cout<<endl;
    cout<<fibonaci_nums[nth_fibonaci_num-1];
}