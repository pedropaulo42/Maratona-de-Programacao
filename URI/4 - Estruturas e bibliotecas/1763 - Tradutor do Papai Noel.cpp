#include <bits/stdc++.h>

using namespace std;

int main(){
	
	map<string, string> trd;
	string name;
	
	trd.insert(make_pair("brasil","Feliz Natal!"));
	trd.insert(make_pair("alemanha","Frohliche Weihnachten!"));
	trd.insert(make_pair("austria","Frohe Weihnacht!"));
	trd.insert(make_pair("coreia","Chuk Sung Tan!"));
	trd.insert(make_pair("espanha","Feliz Navidad!"));
	trd.insert(make_pair("grecia","Kala Christougena!"));
	trd.insert(make_pair("estados-unidos","Merry Christmas!"));
	trd.insert(make_pair("inglaterra","Merry Christmas!"));
	trd.insert(make_pair("australia","Merry Christmas!"));
	trd.insert(make_pair("portugal","Feliz Natal!"));
	trd.insert(make_pair("suecia","God Jul!"));
	trd.insert(make_pair("turquia","Mutlu Noeller"));
	trd.insert(make_pair("argentina","Feliz Navidad!"));
	trd.insert(make_pair("chile","Feliz Navidad!"));
	trd.insert(make_pair("mexico","Feliz Navidad!"));
	trd.insert(make_pair("antardida","Merry Christmas!"));
	trd.insert(make_pair("canada","Merry Christmas!"));
	trd.insert(make_pair("irlanda","Nollaig Shona Dhuit!"));
	trd.insert(make_pair("belgica","Zalig Kerstfeest!"));
	trd.insert(make_pair("italia","Buon Natale!"));
	trd.insert(make_pair("libia","Buon Natale!"));
	trd.insert(make_pair("siria","Milad Mubarak!"));
	trd.insert(make_pair("marrocos","Milad Mubarak!"));
	trd.insert(make_pair("japao","Merii Kurisumasu!"));
	
	while(cin>>name!=NULL){
		
		if(trd.find(name) == trd.end())
			cout<<"--- NOT FOUND ---"<<endl;
		else
			cout<<trd[name]<<endl;
	}
	
	return 0;
}