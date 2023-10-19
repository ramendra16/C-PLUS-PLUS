#include<iostream>
using namespace std;

class B
{
	protected:
		int x;
		public:
			void get_dataB()
			{
				cout<<"\n enter value of x: ";
				cin>>x;
			}
};
class DB1 : public virtual B
{
	protected:
		int y;
		public:
			void get_dataB1(){
				cout<<"\n enter value of y: ";
				cin>>y;
			}
};
class DB2 : public virtual B
{
	protected:
		int z;
		public:
			void get_dataB2()
			{
				cout<<"\n enter value of z: ";
				cin>>z;
			}
};
int main() {
    DB1 objDB1;
    objDB1.get_dataB();  
    objDB1.get_dataB1();
    
    DB2 objDB2;
    objDB2.get_dataB();  
    objDB2.get_dataB2(); 
    
    return 0;
}