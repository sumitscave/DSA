#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string &s1, string &s2){

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}
int main(){
string s1 = "AVON";
string s2 = "NOVA";
cout<<isAnagram(s1, s2);
 return 0;
}