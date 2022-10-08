#include <iostream>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--){

        int n=4;

        

        int input[n];

        for(int i=0;i<n;i++){

        cin>>input[i];}

    

    if(input[0]+input[2]*input[3]>input[1]){

        cout<<"Overflow"<<endl;

    }else if(input[0]+input[2]*input[3]<input[1])

    {

        cout<<"Unfilled"<<endl;

    }else{

        cout<<"Filled"<<endl;

    }

}}
