#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
  v.erase(v.begin()+4);
  for(int x:v){
      cout<<x<<endl;
  }
}