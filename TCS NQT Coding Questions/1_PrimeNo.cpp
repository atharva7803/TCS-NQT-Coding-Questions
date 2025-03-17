/*

Q. You are asked to take a donation from people. The people can donate any amount if the donation amount is the" perfect amount" then return true else written false and suggest any adjustment required in the donation amount.

Input-28

Output-true

The example which was given in the exam was 28 so it was given that the factors of 28 up to half of 28 are 1 2 4 7 14. All the factors 1+2+4+7+14 at up to 28 so 28 is a perfect donation

*/

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int no){
    if(no <= 1) return false;

    int sum = 1;
    for(int i = 2; i <= sqrt(no); i++){
        if(no % i == 0){
            sum += i;
            if(i != no/i){
                sum += no/i;
            }
        }
    }
    return sum == no;
}


int main(){
    int no;
    cout<<"Enter no: "<<endl;
    cin>>no;

    if(isPerfect(no)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}