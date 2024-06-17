#include <iostream>
#include <cstdlib>
using namespace std;

#define low_sweetness 0
#define medium_sweetness 1
#define high_sweetness 2



class Drink{
    public :
    string name,size,sweetness;
    int price;
	Drink(string name_ex, string sweetness_ex, int price_ex,string size_ex );
	void get_info(void);
	
};
Drink::Drink(string name_ex, string sweetness_ex, int price_ex,string size_ex )
{
	name=name_ex;
	sweetness=sweetness_ex;
	price=price_ex;
	size=size_ex;
}
void Drink::get_info()
{
	cout<<"name:"<<name<<"\r\n";
	cout<<"sweetness:"<<sweetness<<"\r\n";
	cout<<"price:"<<price<<"\r\n";    
	cout<<"size:"<<size<<"\r\n";
}	



int main(int argc,char *argv[])
{
	
	Drink *d1=new Drink(argv[1], argv[2], atoi(argv[3]), argv[4]);
	// Drink d1(argv[1], argv[2], atoi(argv[3]), argv[4]);
	d1->get_info();
	delete d1;
	return 0;

    // cout<<"hello world!\r\n";
}

