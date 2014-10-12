/* ID: dharmad1
PROG: ride
LANG: C++
*/


#include <cstdio>
#include <cmath>
#include <iostream>
#include <set>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>
#include <cassert>
#include <string>
#include <cstring>
using namespace std;
//const int mod = 1000000007;
//const int N = 100001;
#define rep(i,a,b) for(int i = a; i < b; i++) //rep(i,1,n+1)
#define S(x) scanf("%d",&x)
#define P(x) printf("%d\n",x)
#define ff first
#define ss second

typedef long long ll;//int64
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;
typedef set<int> si;
typedef map<string, int> msi;
ofstream fout ("test.out");
ifstream fin ("test.in");


void string_compare(string&a,string &b)
{

    int i;
     ll resa=1;
    ll resb=1;
    rep(i,0,a.size())  {resa*=(a[i]-'A'+1); resa=resa%47;}
    rep(i,0,b.size())  {resb*=(b[i]-'A'+1);resb=resb%47;}

    if(resa==resb) fout<<"GO"<<endl;
    else fout<<"STAY"<<endl;

}


int main()
{


    string a,b;
    fin>>a>>b;


   string_compare(a,b);


    return 0;
}
