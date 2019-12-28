#include<iostream>

using namespace std;

int main(){
    int arr[]={15690,2429342,3423423,484746,15902,612311,73423,809876,93121,100000};
    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length;i++){
        if(!(arr[i]%15)){
            std::cout<<"fizzbuzz"<<"\t";
        }
        else if(!(arr[i]%3)){
            std::cout<<"fizz"<<"\t";
        }
        else if(!(arr[i]%5))
        {
            cout<<"buzz"<<"\t";
        }
        else{
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
}