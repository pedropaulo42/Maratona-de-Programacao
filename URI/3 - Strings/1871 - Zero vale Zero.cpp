#include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n,s;
    string r;

    scanf("%d%d",&m,&n);

    while(m!=0 && n!=0){

        s=m+n;
        r=to_string(s);

        for(int i = 0 ; i < (int)r.size() ; i ++){

            if(r[i]!='0')
                cout<<r[i];
        }

        cout<<"\n";

        scanf("%d%d",&m,&n);
    }

    return 0;
}