#include <iostream>
using namespace std;
float func(int A[],int n){
    
    float max=A[0];
    float min=A[0];
    float c=0;
    float c1=0;
    for(int i=0;i <n;i++){
        if(A[i] > max) {
         max = A[i];
         
      }
        else if (A[i] < min) {
            min = A[i]; }; 
    };
    for(int i=0;i <n;i++){
        if (max==A[i]){
             c++;};
        if (min==A[i]){
             c1++;};
       
    };
    
    max=c*max;
    min =c1*min;
    float avg = (min+max)/(c+c1);
    return avg;   
};
int main(){
    int A[]={3,3,1,1,8,4,5,9,11,88,88,88};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<func(A,n);
};
