#include <iostream>
#include<math.h>
#include<fstream>
#include<strings.h>
#include <stdlib.h>
using namespace std;


string loginpw;
string sportpw;



class student{
	public:
char name[30]; 
char roll[20]; 
char degree[50]; 
	int batch;

	char jan[31];
	char feb[28];
	char mar[31];
	char apr[30];
	char may[31];
	int absent;
	int present;
	double percentage;
	
	
	
	
public:
student()
{
absent=0;
present=0;
	
}

void setroll()
{ 
	
	fflush(stdin);
cin.getline(roll,20);



}
void setname()
{	fflush(stdin);   
    cin.getline(name,30);
}
void setbatch()
{	
	cin>>batch;
}
void setdegree()
{	fflush(stdin);
	cin.getline(degree,50);;
}
void getroll()
{
	
	cout <<"\nRoll: " << roll;
	
}
void getname()
{   
    cout<<"\nName: "<<name;
	
}
void getdegree()
{
	cout<<"\nDegree: "<<degree;
	
}
void getbatch()
{
	cout<<"\nBatch: "<<batch;
	
}
void attendance()
{ int t;
	for(t=0;t<5;t++)        //loop executes for 5 iterations only as it is merely a demonstration.
	{   cout<<"\n\nJanuary: "; //Entering data for 30 or 31 iterations was very time consuming.
		cin>>jan[t];
		if(jan[t]=='a')
		{
			absent=absent+1;
		}
	    if(jan[t]=='p')
	    {
	    	present=present+1;
		}
	}
	cout<<"\n---Present count---\n"<<present;
	for(t=0;t<5;t++)
	{   cout<<"\n\nFebuarary ";
		cin>>feb[t];
		if(feb[t]=='a')
		{
			absent=absent+1;
		}
	    if(feb[t]=='p')
	    {
	    	present=present+1;
		}
	}
	cout<<"\n---Present count---\n"<<present;
	for(t=0;t<5;t++)
	{   cout<<"\n\nMarch: ";
		cin>>mar[t];
		if(mar[t]=='a')
		{
			absent=absent+1;
		}
	    if(mar[t]=='p')
	    {
	    	present=present+1;
		}
	}
	cout<<"\n---Present count---\n"<<present;
	for(t=0;t<5;t++)
	{   cout<<"\n\nApril: ";
		cin>>apr[t];
		if(apr[t]=='a')
		{
			absent=absent+1;
		}
	    if(apr[t]=='p')
	    {
	    	present=present+1;
		}
	}
	cout<<"\n---Present count---\n"<<present;
	for(t=0;t<5;t++)
	{   cout<<"\n\nMay: ";
		cin>>may[t];
		if(may[t]=='a')
		{
			absent=absent+1;
		}
	    if(may[t]=='p')
	    {
	    	present=present+1;
		}
	}
	cout<<"\n---Present count---\n"<<present;
}
void attpercentage()
{
	percentage= static_cast<double>(present)/25.0;
	percentage= static_cast<double>(percentage)*100.0;
	cout<<"\n\n---ATTENDANCE:---\n\n"<<percentage<<"%";
	if(percentage<75.0)
	{
		cout<<"\nThe student cannot sit in the final exams as required attendance is atleast 80%";
}
}
};

class academics: public student
{
	protected:
	int cps[3];    //0 index for mid1 ,1 for mid2 and 2 for finals
	int oop[3];
	int irs[3];
	int de[3];
	int ds[3];
static	int totcps[3];
static	int totoop[3];   //static so that a teacher does not have to put full marks for a paper for every student.
static	int totirs[3];
static	int totde[3];
static	int totds[3];
	double weightcps;
	double weightoop; //for coursepoints calculations.
	double weightirs;
	double weightde;
	double weightds;
	
public:
academics()
{ int i;
for(i=0;i<3;i++)
{
	cps[i]=0;
	oop[i]=0;
	irs[i]=0;
	de[i]=0;
	ds[i]=0;
	}
	
		
}
void setcps()
{
	cout<<"\nEnter mid 1 marks for cps: ";
	cin>>cps[0];
	cout<<"\nEnter mid 2 marks for cps: ";
	cin>>cps[1];
	cout<<"\nEnter Final exam marks for cps: ";
	cin>>cps[2];
}
void setoop()
{
	cout<<"\nEnter mid 1 marks for oop: ";
	cin>>oop[0];
	cout<<"\nEnter mid 2 marks for oop: ";
	cin>>oop[1];
	cout<<"\nEnter Final exam marks for oop: ";
	cin>>oop[2];
}
void setirs()
{
	cout<<"\nEnter mid 1 marks for IRS: ";
	cin>>irs[0];
	cout<<"\nEnter mid 2 marks for IRS: ";
	cin>>irs[1];
	cout<<"\nEnter Final exam marks for IRS: ";
	cin>>irs[2];
}
void setde()
{
	cout<<"\nEnter mid 1 marks for DE: ";
	cin>>de[0];
	cout<<"\nEnter mid 2 marks for DE: ";
	cin>>de[1];
	cout<<"\nEnter Final exam marks for DE: ";
	cin>>de[2];
}
void setds()
{
	cout<<"\nEnter mid 1 marks for ds: ";
	cin>>ds[0];
	cout<<"\nEnter mid 2 marks for ds: ";
	cin>>ds[1];
	cout<<"\nEnter Final exam marks for ds: ";
	cin>>ds[2];
}
void outof()    //total marks for calculations of weighatge
{
	cout<<"\nEnter total marks for each course in mid 1:\n ";
    cout<<"\nCPS: ";
    cin>> totcps[0];
    cout<<"\nOOP: ";
    cin>>totoop[0];
    cout<<"\nIRS: ";
    cin >>totirs[0];
    cout<<"\nDE: ";
    cin>>totde[0];
    cout<<"\nDS: ";
    cin>>totds[0];
    cout<<"\nEnter total marks for each course in mid 2:\n ";
    cout<<"\nCPS: ";
    cin>> totcps[1];
    cout<<"\nOOP: ";
    cin>>totoop[1];
    cout<<"\nIRS: ";
    cin >>totirs[1];
    cout<<"\nDE: ";
    cin>>totde[1];
    cout<<"\nDS: ";
    cin>>totds[1];
    cout<<"\nEnter total marks for each course in Finals:\n ";
    cout<<"\nCPS: ";
    cin>> totcps[2];
    cout<<"\nOOP: ";
    cin>>totoop[2];
    cout<<"\nIRS: ";
    cin >>totirs[2];
    cout<<"\nDE: ";
    cin>>totde[2];
    cout<<"\nDS: ";
    cin>>totds[2];
}


};
int academics::totcps[3]={0};
int academics::totoop[3]={0};
int academics::totirs[3]={0};
int academics::totde[3]={0};
int academics::totds[3]={0};

class sports: public student
{
	protected:
char* sport = new char[15];
char* certificate = new char[20];
	int performance;
	public:
sports()
{
	
}
void setsport()
{   int s;
	cout<<"\nSelect the type of sports";
	cout<<"\n1. Cricket\n2. Football\n3. Badminton\n4. Table Tennis\n5. E-Sports\n6. None";
	cin>>s;
if(s==1)
{
	sport="Cricket";
}  
if(s==2)
{
 sport="Football";		
}
if(s==3)
{
	sport="Badminton";
}
if(s==4)
{
sport = "Table Tennis";	
}
if(s==5)
{
sport="E-sports";	
}
if(s==6)
{
	sport="None";
	 }	 
}

void setper()
{   
int a;
cout<<"\nSelect the type of achievement:";
    cout<<"\n1.Winner of LOG \n2. Runner-Up of LOG\n3. Top 4 in LOG\n4.None ";
 	cin >> a;
performance=0;
if(a==1)
{
certificate="Winner";
performance = 100;	
}
if(a==2)
{
certificate="Runner-Up";
performance = 75;	
}
if(a==3)
{
certificate="Top 4";
performance = 60 ;	
}
if(a==4)
{
certificate="Participant";
performance = 50;	
}
}

				
};

class marksheet: public academics, public sports 
{
	protected:
 char message[1000];    //for teachers if they wish to send a message to this particular student	
 int totalc;
 int totalo;
 int totali;
 int totalde;
 int totalds;
 double cpoints[5];   //0 index for cps, 1 for oop, 2 for irs, 3 for de, 4 for ds (total =5).
 double gpa;
 char* scholarship;
 
 public:
marksheet()
{   totalc =0;
    totalo =0;
    totali =0;
    totalde=0;
    totalds=0;
    gpa=0;
    char* scholarship = new char[10];
	
	}	
void totalmarks()
{

}
void weightage()
{   
	double mid1=0,mid2=0,final=0;
	mid1 = static_cast<double>(cps[0])/static_cast<double>(totcps[0]);
	mid2 = static_cast<double>(cps[1])/static_cast<double>(totcps[1]);
	final = static_cast<double>(cps[2])/static_cast<double>(totcps[2]);
	weightcps = (mid1*25)+(mid2*25)+(final*50);
	
	
	mid1 = static_cast<double>(oop[0])/static_cast<double>(totoop[0]);
	mid2 = static_cast<double>(oop[1])/static_cast<double>(totoop[1]);
	final = static_cast<double>(oop[2])/static_cast<double>(totoop[2]);
	weightoop = (mid1*25)+(mid2*25)+(final*50);
	
	
	mid1 = static_cast<double>(irs[0])/static_cast<double>(totirs[0]);
	mid2 = static_cast<double>(irs[1])/static_cast<double>(totirs[1]);
	final = static_cast<double>(irs[2])/static_cast<double>(totirs[2]);
	weightirs = (mid1*25)+(mid2*25)+(final*50);
	
	 
	mid1 = static_cast<double>(de[0])/static_cast<double>(totde[0]);
	mid2 = static_cast<double>(de[1])/static_cast<double>(totde[1]);
	final = static_cast<double>(de[2])/static_cast<double>(totde[2]);
	weightde = (mid1*25)+(mid2*25)+(final*50);
	
	
	mid1 = static_cast<double>(ds[0])/static_cast<double>(totds[0]);
	mid2 = static_cast<double>(ds[1])/static_cast<double>(totds[1]);
	final = static_cast<double>(ds[2])/static_cast<double>(totds[2]);
	weightds = (mid1*25)+(mid2*25)+(final*50);

	
}

void coursepoints()      //coursepoints conditions
{
	if(weightcps>=0.0 && weightcps<50.0 )
	{
		cpoints[0]= 0.0;
	}
	if(weightcps>=50.0 && weightcps<60.0)
	{
		cpoints[0]= 1.0;
	}
	if(weightcps>=60.0 && weightcps<70.0 )
	{
		cpoints[0]= 2.0;
	}
	if(weightcps>=70.0 && weightcps<84.0 )
	{
		cpoints[0]= 3.0;
	}
	if(weightcps>=84.0)
	{
		cpoints[0]= 4.0;
		
	}
		if(weightoop>=0.0 && weightoop<50.0 )
	{
		cpoints[1]= 0.0;
	}
	if(weightoop>=50.0 && weightoop<60.0 )
	{
		cpoints[1]= 1.0;
	}
	if(weightoop>=60.0 && weightoop<70.0 )
	{
		cpoints[1]= 2;
	}
	if(weightoop>=70.0 && weightoop<84.0 )
	{
		cpoints[1]= 3.0;
	}
	if(weightoop>=84.0)
	{
		cpoints[1]= 4.0;
		
	}
	if(weightirs>=0.0 && weightirs<50.0 )
	{
		cpoints[2]= 0.0;
	}
	if(weightirs>=50.0 && weightirs<60.0 )
	{
		cpoints[2]= 1.0;
	}
	if(weightirs>=60.0 && weightirs<70.0 )
	{
		cpoints[2]= 2.0;
	}
	if(weightirs>=70.0 && weightirs<84.0 )
	{
		cpoints[2]= 3.0;
	}
	if(weightirs>=84.0)
	{
		cpoints[2]= 4.0;
		
	}
		if(weightde>=0.0 && weightde<50.0 )
	{
		cpoints[3]= 0.0;
	}
	if(weightde>=50.0 && weightde<60.0 )
	{
		cpoints[3]= 1.0;
	}
	if(weightde>=60.0 && weightde<70.0 )
	{
		cpoints[3]= 2.0;
	}
	if(weightde>=70.0 && weightde<84.0 )
	{
		cpoints[3]= 3.0;
	}
	if(weightde>=84.0)
	{
		cpoints[3]= 4.0;
		
	}
		if(weightds>=0.0 && weightds<50.0 )
	{
		cpoints[4]= 0.0;
	}
	if(weightds>=50.0 && weightds<60.0 )
	{
		cpoints[4]= 1.0;
	}
	if(weightds>=60.0 && weightds<70.0 )
	{
		cpoints[4]= 2.0;
	}
	if(weightds>=70.0 && weightds<84.0 )
	{
		cpoints[4]= 3.0;
	}
	if(weightds>=84.0)
	{
		cpoints[4]= 4.0;
		
	}
	
	}
void calgpa()
{
	double crhours;
    crhours = (cpoints[0]*2)+(cpoints[1]*3)+(cpoints[2]*3)+(cpoints[3]*3)+(cpoints[4]*3);
	gpa = crhours/14;
}

void scholar() //if conditions on gpa and sports scores ( different scholarship based on scores)
{  
if(gpa<3.0 || performance <50)
{
	cout<<"\nSorry not eligible for any scholarship";
	scholarship="No Scholarship";
}
if((gpa>=3.0 && gpa<3.5) && performance== 50)
{
	cout<<"\nEligble for 25% scholarship!";
	scholarship ="25%"; //created to filing purposes, gotta display it when a student checks his record;
}	
if((gpa >=3.0 && gpa<3.5) && performance==60 )	                                 
{
		cout<<"\nEligble for 35% scholarship!";
	scholarship ="35%";
}
if((gpa>=3.0 && gpa<3.5) && performance== 75 )	                                 
{
		cout<<"\nEligble for 40% scholarship!";
	scholarship ="40%";
}
if((gpa >=3.0 && gpa<3.5) && performance==100 )	                                 
{
		cout<<"\nEligble for 50% scholarship!";
	scholarship ="50%";
}
if(gpa>=3.5 && performance==50)	                                 
{
		cout<<"\nEligble for 35% scholarship!";
	scholarship ="35%";
}
if(gpa>=3.5 && performance==60)	                                 
{
		cout<<"\nEligble for 45% scholarship!";     //cout different percentages of scholarship on this criteria
	scholarship ="45%";
}
if(gpa>=3.5 && performance==75)	                                 
{
		cout<<"\nEligble for 75% scholarship!";
	scholarship ="75%";
}
if(gpa>=3.5 && performance==100)	                                 
{
		cout<<"\nEligble for 100% scholarship!";     //cout different percentages of scholarship on this criteria
	scholarship ="100%";
}

}
void setmes()
{
	fflush(stdin);
cin.getline(message,1000);
}
void display()
{ int k;
 cout<<"\n-------------------\n";
 cout<<"GPA: " <<gpa;
 for(k=0;k<5;k++)
 {
 cout<<"\n cpoints" <<" "<< cpoints[k];
}

}


void display(int a){

cout<<"\nName: ";
cout<<academics::name;
cout<<"\nRoll number: "<< academics::roll;
cout<<"\nDegree: "<<academics::degree;
cout<<"\nBatch: " <<academics::batch;
cout<<"\nSports: " << sport;
cout<<"\nSports Performance Score: " << performance;	
cout<<"\nScholarship: " << scholarship;
cout<<"\nCertificate: " <<certificate;


}
void display(double b)
{
	cout<<"\n Present Count: "<<academics::present;
	cout<<"\n\n\t\t---ATTENDANCE:---\n\n"<<"Percentage: "<<academics::percentage<<"%";
	if(academics::percentage<75.0)
	{
		cout<<"\n\tYou cannot sit in the final exams as required attendance is atleast 80%";
}
cout<<"\n\nAttendance in each month: ";
int z;
cout<<"\nJanuary: \n";
for(z=0;z<5;z++)
{
	
	cout<<z+1<<" "<<academics::jan[z]<<"\n";
}
cout<<"\nFebuaray: \n";
for(z=0;z<5;z++)
{
	
    cout<<z+1<<" "<<academics::feb[z]<<"\n";
}
cout<<"\nMarch: \n";
for(z=0;z<5;z++)
{
	
	cout<<z+1<<" "<<academics::mar[z]<<"\n";
}
cout<<"\nApril \n";
for(z=0;z<5;z++)
{
	
	cout<<z+1<<" "<<academics::apr[z]<<"\n";
}
cout<<"\nMay:  \n";
for(z=0;z<5;z++)
{
	
	cout<<z+1<<" "<<academics::may[z]<<"\n";
}

}
void display(float c)
{
	cout<<"\n----------------------------------------\n";
	cout<<"                     GPA: " << gpa;                  
	cout<<"\n+----------------+----------------+----------+"<< endl;
	cout << "|   Course Name  | Course Points  |Credit hrs|      "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	cout << "|   CPS          |    "<<cpoints[0]<<"           |  2+1     |     "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	cout << "|   OOP          |    "<<cpoints[1]<<"           |  3+1     |     "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	cout << "|   IRS          |    "<<cpoints[2]<<"           |  3+0     |     "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	cout << "|   DE           |    "<<cpoints[3]<<"           |  3+0     |     "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	cout << "|   DS           |    "<<cpoints[4]<<"           |  3+0     |     "<<endl;
	cout << "+----------------+----------------+----------+"<< endl;
	

cout<<"\n\n-------------IMPORTANT MESSAGE FROM TEACHER--------------\n\n";
cout<<"Message: "<<message;
}
};

int main()
{   int i,j,x,y,p,q,access=0,sp=0,b,a,count;
    char c;
	marksheet o;  //for total marks only as those arrays are static
	marksheet m[100];
	ifstream io;
   io.open("objectscount.txt",ios::in); 
   if(!io)
   {
   	cout<<"\nFile not found!\n";
   }
   io.get(c);
   io.close();
   
	
	cout<<"\t\t\t\t---------Welcome to Flex!------------";
	cout<<"\nAre you a \n1.Teacher \n2.Student";
	cin>>x;
	if(x==1)
	{
		cout<<"\nUpdate the marks for Performances in academics: ";
		for(j=1;j<=5;j++)
{
		cout<<"\n\n\nEnter the password: ";
		cin>> loginpw;
		if(loginpw == "fast123")
		{
		
            

			cout<<"\n\n---------------Access Granted!---------------";
			
			access=1;
			j=5;
		}
else
{
			cout<<"\n\n--------------Access Denied! You have "<< 5-j << " more tries--------------";
		if(j==5)
		{
			cout<< "\n\n----------------Blocked!----------------\n";
			exit(1);
			
			
		}
}
}
if(access == 1)
{   
    cout<<"\n\n";
	o.outof();  // another object for this function only, as the arrays are static so the values will ramain same for any object.
	//Secondly since we are not required to ask exam paper max marks for each student as it reamins same for everyone, we can't have it in the loop.
	for(i=c;i<100; i++)  
{                        

	cout<<"\n-----------------\n";
	cout<<"\n\nEnter Name of the student: ";
	m[i].academics::setname();
	cout<<"\nEnter Roll number of the student: ";
	m[i].academics::setroll();
    cout<<"\nEnter batch: ";
    m[i].academics::setbatch();
    cout<<"\nEnter degree program: ";
    m[i].academics::setdegree();


  m[i].setcps();
  m[i].setoop();
  m[i].setirs();
  m[i].setde();
  m[i].setds();	

  
  
cout<<"\n----------------\n";
cout<<"\n\nEdit sports performances: ";


cout<<"\n\n---------Your access cannot be granted unless you input the otp given by the sportics head---------\n\n";


		for(j=1;j<=5;j++)
{
		cout<<"\n\n\nEnter the password provided by the sportics head: ";
		cin>>sportpw;
		if(sportpw == "sportics123")
		{
			cout<<"\n\n---------------Access Granted!---------------\n\n";
			sp=1;
			j=5;
		}
else
{
			cout<<"\n\n--------------Access Denied! You have "<< 5-j << " more tries--------------";
		if(j==5)
		{
			cout<< "\n\n----------------Blocked!----------------\n";
			exit(1);
			
		}
}
}

if(sp==1)
{
m[i].setsport();
m[i].setper();
  m[i].weightage();
  m[i].coursepoints();
  m[i].calgpa();
  m[i].scholar();
  m[i].display();

}

cout<<"\n------------\n";
cout<<"\nWould you like to edit attendance of this student?";
cout<<"\n1. Yes\n2. No";
cin>>p;
if(p==1)
{
m[i].academics::attendance();
m[i].academics::attpercentage();
}
cout<<"\n\nEnter any message you would like to convey to this student: \n";
m[i].setmes();



ofstream os;
os.open("objects.txt",ios::app);
os.write((char*)&m[i],sizeof(m[i]));
os.close();
	


cout<<"\n------------\n";
cout<<"Do you wish to update marks for another student?";
cout<<"\n1. Yes\n2. No";
cin >>b;
if(b==2)
{
count = i+1;
i=100;

}
}
}

ofstream o;
o.open("objectscount.txt",ios::out);
o.put(count);
o.close();
}
if(x==2)
{
	
	char ro[12];
    
   cout<<"Enter Roll number: ";
   fflush(stdin);
   cin.getline(ro,12);
   
   int l;
   marksheet m;
   ifstream is;
   is.open("objects.txt",ios::in);
    if(!is)
    {
    	cout<<"\nRecord not found";
	}
   is.seekg(0,ios::beg);
   for (l=0;l<100;l++)
   {
   	
	is.read((char*)&m,sizeof(m)); 
   
if(strcmp(ro,m.academics::roll)==0)
  {
  
    m.display();
   m.display(1);
   m.display(1.0);
   cout<<"\n\t\t----TRANSCRIPT---\n";
   m.display(1.0f);
   l=100;
}
if(is.eof())
{
	l=100;
}
}
is.close();
}

}

   
   
   

    








