
#include <iostream>
#include <fstream>
#define FILE_NAME "Laptop.dat"

using namespace std;

class laptop {
private : 
	int 	modelNo;
	char 	name[100] ;
	int 	ram,hdd;

public  :

	void readlaptop(){
		cout<<"laptop DETAILS"<<endl;
		cout<<"ENTER laptop model no : " ;
		cin>>modelNo;
		cout<<"ENTER  NAME OF THE laptop : ";
        cin.ignore();
		cin.getline(name,100);
		
		cout<<"ram : "; cin>>ram;
		cout<<"hdd: "; cin>>hdd;
	}

	void displaylaptop(){
		cout<<"laptop ID: "<<modelNo<<endl
		 <<"laptop NAME: "<<name<<endl
         <<"Ram: "<<ram<<endl
         <<"Hdd: "<<hdd<<endl;
		
	}
};

int main(){
	

	laptop emp;

	emp.readlaptop();
	
	fstream file;
	file.open(FILE_NAME,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	
	file.write((char*)&emp,sizeof(emp));
	file.close();
	cout<<"Date saved into file the file.\n";
	

	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return -1;
	}
	
	if(file.read((char*)&emp,sizeof(emp))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			
			emp.displaylaptop();
	}
	else{
		cout<<"Error in reading data from file...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}