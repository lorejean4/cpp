#include <iostream>
using namespace std;

struct nameType {
	char first[10];
	char middleInitial;
	char last[20];
};

nameType inputSingle();

int main() {
    nameType sname, ename[3], currentName;
    cout<<"--- Input Single ---\n";
    sname = inputSingle();
    cout<<"---Display Single ---\n";
    cout<<sname.first<<" "<<sname.middleInitial<<". "<<sname.last<<"\n";
    
    cout<<"--- Input Many ---\n";
    for(int index  = 0; index < 3; index++) {
	    cout<<"#"<<index<<"\n";
	    ename[index] = inputSingle();
    }
    cout<<"--- Display Many ---\n";
    
    for(int index = 0; index <3 ; index++) {
        currentName = ename[index];
		cout<<currentName.first<<" "<<currentName.last<<"\n";
    }
}

nameType inputSingle() {
    nameType name; 
    cout<<"Enter your first name: ";
    cin>>name.first;
    cout<<"Enter yout middle initial: ";
    cin>>name.middleInitial;
    cin.ignore();
    cout<<"Enter you last name: ";
    cin>>name.last;
    return name;
}
