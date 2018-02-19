#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  map<char , int> m;
  map<int  , char> n;
  for(int i=48;i<58;i++){
    m.insert(pair<char,int>(i,i-48));
    n.insert(pair<int,char>(i-48,i));
  }
  for(int i=65;i<91;i++){
    m.insert(pair<char,int>(i,i-55));
    n.insert(pair<int,char>(i-55,i));
  }
  map <char,int> :: iterator itr;
  /*for (itr=m.begin();itr!=m.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }
  */
  while(t--){
    string query;
    int base;
    int change;
    cin>>query>>base>>change;
    //cout<<query<<base<<change;
    //cout<<"length of query is "<<query.length()<<endl;
    unsigned int real=0;
    for(int i=1;i<=query.length();i++){
      real+=pow(base,query.length()-i)*m.at(query[i-1]);
    }
    //cout<<"real value is "<<real<<endl;
    vector<char> vec;
    while ( real >= change ){
      //cout<<real%change<<endl;
      vec.push_back(n.at(real%change));
      real=real/change;
    }
    vec.push_back(n.at(real));
    for(int i=vec.size();i>=0;i--)
      cout<<vec[i];
    cout<<endl;
  }

  /*for (int i=0;i<300;i++){
    cout<<" "<<(char)i<<" "<<i<<endl;
  }
  */

  return 0;
}
