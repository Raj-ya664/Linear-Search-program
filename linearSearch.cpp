#include<iostream>
#include<limits>
using namespace std;


int linearSearch(int arr[], int sz, int key){

for(int i =0; i<sz; i++){
      if(arr[i]==key){
        return 1;
      }
}
return -1;

};

int main(){
  


   int  key = 3;
    int arr[5]={23,12,23,45,3};
    

    cout<< linearSearch(arr,5,key);
}


