// when a function calls itself, until a specified condition is met.
#include <bits/stdc++.h>
using namespace std;
// void func(){
//     cout << "1";
//     func();
//     // this will keep on going forever as its a non ending infinite recursion as their is no specified condition to check
// 
 int counts = 0;

// void func(){
//     std::cout<<counts<<std::endl;
//     counts++;
//     func();
// }
void func(){
    if(counts == 5){
        return;
    }
    counts++;
    cout<<counts<<endl;
    func();
}
int main(){

    func();
    return 0;
}