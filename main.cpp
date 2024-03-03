// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    int zero = 0;
    int n;
    cout<<"Enter size of 01 array : ";
    cin>>n;
 vector<int> vec(n,0);
 cout<<"Enter array : ";
 for(int i=0;i<vec.size();i++){
     cin>>vec[i];
 }
 for(int i=0;i<vec.size();i++){
     if(vec[i]==0){
         zero++;
     }
 }
 cout<<"zeros " <<zero<<endl;

 for(int i=0;i<vec.size();i++){
      if(i<zero){
       vec[i]=0;
      }
      else{
           vec[i]=1;
      }
 }

 for(int ele : vec){
    cout<<"sorted array : ";
     cout<<ele<<" ";
 }
    return 0;
}