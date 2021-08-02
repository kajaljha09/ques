#include <iostream>
using namespace std;
float func(int A[],int n){
    
    float sum =0;
    float c=0;
    
    for(int i=0;i <n;i++){
      sum =sum+ A[i];
      
    };
    float avg =sum/n;
    for(int i=0;i <n;i++){
        if (avg==A[i]){
            c=c+1;
        }
    };
    
    return c;
    
    
};
int main(){
    int A[]={5,3,4,5,6,7,9,1,9,1};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"number of elements which are equal to the average of all the elements"<<func(A,n);
};
