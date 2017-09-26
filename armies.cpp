#include <iostream>
#include <algorithm>
#include <array>
#include <functional>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
    int b;
    cin>>b;
    int baj[b];
    for ( int *p  = baj; p < baj+b; p++){
      cin>>*p;
    }
    int m;
    cin>>m;
    int meg[m];

    for (int *i = meg; i < meg+m; ++i){
      cin>>*i;
    }
    string ans;
    if ( b > m ) ans="Bajtocja";
    else if( b < m ) ans="Megabajtolandia";
    else ans="Draw";
    sort(baj,baj+b,greater<int>());
    sort(meg,meg+m,greater<int>());

    for(int *ba=baj,*me=meg;ba<baj+b,me<meg+m;++ba,++me){
      if ( *ba == *me )
        continue;
      else if ( *ba > *me ){
          ans="Bajtocja";
          break;
      }
      else if( *ba < *me ){
          ans="Megabajtolandia";
          break;
      }

      }
    cout<<ans<<endl;
  }
    /*for(int *i=baj;i<baj+b;i++){
      cout<<*i<<" ";
    }
    cout<<endl;
    for(int *i=meg;i<meg+m;i++){
      cout<<*i<<" ";
    }
    cout<<endl;
  }
  */

  return 0;
}


