#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Checking whether the Parking lot is fully occupied
char availible[5][5];
void check_availibility(int probe){
	if(probe > 25){
		cout<<"Parking lot is fully occupied" <<endl;
		
	}
}
	
class time{
	public:
		int h;
		int m;
		int s;
		//Displaying the Current time of entry
		void DisplayTime(){ 
			get_time();
			cout<<"---------hrs  min  sec"<<endl;
			cout<<"Time is : "<<h<<" : "<<m<<" : "<<s<<endl<<endl;
		}
	private:
		//Getting the time directly from the system
		void get_time(){    
			time_t currenttime;                    
			currenttime = time(NULL);              
			tm nowLocal = *localtime(&currenttime);    
			h = nowLocal.tm_hour;           
			m = nowLocal.tm_min;
			s = nowLocal.tm_sec;
		}
};		
			
class parking{
	public:
		int i;
		int j;
	
	// Default initialising Constructor	
	parking(){
		for (i = 0; i <= 5; i++){                
			for (j = 0; j <= 5; j++){
				availible[i][j] = '0';
			}
		}
	}
	
	// Menu Interface
	void DisplayParking(int UB){               
		system("CLS");	
		cout<< "*****************************************\n";
		cout<< "*****************************************\n";
		cout<< "******* Modern Era Parking System *******\n";		
		cout<< "*****************************************\n";
		cout<< "*****************************************\n";
		cout<<"Developed by : Abdul Rafay , Syed Sumam **\n";
		cout<<"	       Rohan Ahmed, Umair Shaikh *\n";
		cout<<"Coloumn "<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;	
		cout<<" Row"<<endl;
		
		for (int i = 1; i <= 5; i++){  
			cout<<i;
			for (int j = 1; j <= 5; j++){			
				cout<<availible[i][j]<<" ";
			}
			cout<<endl;	
		}
		cout<<"Available Slots : "<<25-UB<<endl<<endl;
		cout<<"Used Slots : "<<UB<<endl;
	}		
};

class file : public parking, public time{
	static const int total = 25;
	int newtime[25][5];
	float tm;
	float rs;
	public:
		int i;
		int j;
		int u;
		int v;
		int w;
		int usedspots;
		fstream park;
		file(){
			i = 0;
			j = 1;
			usedspots = 0;
			
			//Reading data for availible spots from file
			park.open("parkingsystem.txt",ios_base::in);
			for(u = 1; u <= 25; i++){
				park>>newtime[1][1]>>newtime[1][2]>>newtime[1][3]>>newtime[1][4]>>newtime>>[1][5];
				for(v = 1;u<=5; v++){
					for(w = 1; w<=5;w++){
						if((newtime[1][1] == v ) && (newtime[1][2] == w){
							usedspots ++;
							availible[v][w] = "1";
							break;
						}
					}
				}
			}
		park.close()
		
		//Setting the parking slot from empty to taken
		void setparking(){
			i = 1;
			j = 0;
			try(check(usedspots);
				Gamma:
				j++;
				if(j>5){
					j = 1;
					i++;
				}
				if(availible[i][j] == "0"){
					park.open("parkingsystem.txt", ios_base::app);
					availible[i][j] = '1';
					usedSpots++;							
					DisplayParking(usedSpots);
					DisplayTime();   
					cout<<"Parking spot ("<<i<<", "<<j<<") has been alloted\n"<<endl;
					park<<i<<endl;
					park<<j<<endl;
					park<<u<<endl;
					park<<v<<endl;
					park<<w<<endl;  
					park.close();
				}
				else{
					goto Gamma;				
				}	
			catch(const char*c){
				cout<<c<<endl;
			}	
		}
		
	//Getting the parking slot assigned to the Vehicle
	void getparking(){
		int l = 1;
			DisplayParking(usedSpots);
			park.open("parkingsystem.txt", ios_base::in);
			while (l <= usedSpots){				
				park>>newTime[l][1]>>newTime[l][2]>>newTime[l][3]>>newTime[l][4]>>newTime[l][5];
				l++;
			}
			park.close();
			park.open("TimeIn.txt", ios_base::out);
			for(int l = 1; l <= usedSpots; l++){																	
				if ((newtime[l][1] == i) && (newtime[l][2] == j)){  				
					DisplayTime(); 
					tm = (((h - (enterTime[l][3]))*3600)+((m - (enterTime[l][4]))*60)+(s - (enterTime[l][5])));
					rs = 250*(tm/3600);
					goto e;
				}
				park<<newtime[l][1]<<endl;
				park<<newtime[l][2]<<endl;
				park<<newtime[l][3]<<endl;
				park<<newtime[l][4]<<endl;
				park<<newtime[l][5]<<endl;
			e:;
			}
			availible[i][j] = '0';
			if(usedSpots > 0){
				usedSpots--;
			}DisplayParking(usedSpots);
			DisplayTime();
			cout<<"Time Period : "<<tm<<" s"<<endl;
			cout<<"Total Cost Calculated : "<<rs<<" Rs"<<"( 250 Rs per hour)"<<endl<<endl;	
			park.close();
		}	
};

class parker : public file{
	int age;
	string name;
	public:
		string reg;
		fstream newdata;
		fstream listdata; 
		friend istream &operator >> (istream &input, Parker &p){                        // Operator Overloading
			Name:;
			cout<<"* Enter The Name : ";
			input.getline(p.name, 30);
			input.getline(p.name, 30);
			cout<<"* Enter The Car's Number Plate : ";
			input>>p.reg;
			cout<<"* Enter Age : ";
			input>>p.age;
			return input;	
		} 
		friend ostream &operator << (ostream &output, const Parker &p){
			output<<"--> Parker Name : "<<p.name<<endl;
			output<<"--> Parker Car Number Plate : "<<p.reg<<endl;
			output<<"--> Parker Age : "<<p.age<<endl<<endl;
		}
		
		// Storing Parker details on to the file
		void Datainput(){
			DisplayTime();DisplayParking(usedSpots);
			newdata.open(reg.c_str(), ios_base::out);
			ListData.open("List.txt", ios_base::app);
			ListData<<reg<<endl;
			ListData.close();
			newdata<<name<<endl;
			newdata<<reg<<endl;
			newdata<<age<<endl;
			setparking();
			newdata<<i<<endl;
			newdata<<j<<endl;
			newdata.close();
		}
		
		///Checking if the file outputs data or exception has occured
		bool Datauotput(){
			DisplayParking(usedSpots);
			cout<<"Enter The Number Plate : ";
			cin>>reg;
			newdata.open(reg.c_str(), ios_base::in);
			try{Check(newdata.fail());
				newdata.getline(name, 30);
				newdata>>reg>>age>>i>>j;
				getparking();
				newdata.close();
				remove(reg.c_str());
			}catch(const char*c){
				cout<<c<<endl;
				newdata.close();
			}
			return newdata.fail();
};

int main(){
	int num;
	bool b;
	Parker p;
	fstream park;
	Alpha:
		p.DisplayParking(p.usedSpots);
		cout<<endl<<endl;
		cout<<"1 : Set Entry Of A Car."<<endl;
		cout<<"2 : Exiting A Car From Slots."<<endl;
		cout<<"3 : Only Exit The Program."<<endl;
		cout<<"4 : Reset Every Thing And Exit."<<endl<<endl;
		cout<<"Please Enter Your Choice : ";
		cin>>num;
		switch(num){
			case(1):{    
				p.DisplayParking(p.usedSpots);
				cin>>p;
				park.open(p.reg.c_str(), ios_base::in);
				if(park.fail()){
					p.Datainput();
					cout<<"Entry has been saved"<<endl;
					system("pause");
					park.close();
					goto Alpha; 
				}
				else{
					cout<<"Number plate already exist"<<endl;
					system("pause");
					park.close();
					goto Alpha;
				}
			}
			case(2):{
			    b = p.DataOut();
			    if(b == false){
					cout<<p;
				}
				system("pause");         
				goto Alpha;   
			}
			case(3):{
				cout<<"\n\nProgram will exit but the \'TimeIn.txt\' and \'List.txt\' will remain"<<endl;
				return 0;	
			}
			case(4):{  
				park.open("List.txt", ios_base::in);
				while(!park.eof()){
					park>>p.reg;
					remove(p.reg.c_str());
				} 
				park.close();
				remove("List.txt");
				remove("TimeIn.txt");
				cout<<"\n\n\'TimeIn.txt\' and \'List.txt\' files has been deleted and the program will be Terminated"<<endl;
				return 0;
			}
		}
}

