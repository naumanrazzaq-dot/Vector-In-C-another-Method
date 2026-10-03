#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

vector <int> v;
v.push_back(5);
v.push_back(15);
v.push_back(25);
v.push_back(35);
v.pop_back();//last value ko khatam kar deta hai 


cout<<v.at(1)<<endl; //yeh index 1 ki value deta hai
cout<<v[1]<<endl; //alternative of v.at(1)
cout<<v.front()<<endl; //Pehla element batata hai.
cout<<v.back(); //Aakhri element batata hai.
}
