// To find factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int factorial=1;
    for(int i=n; i>=1; i--){
      factorial*=i;
    }
  
    cout<<factorial<<endl;
    return 0;
}