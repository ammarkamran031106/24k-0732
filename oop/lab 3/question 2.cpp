#include <iostream>
#include <conio.h>
using namespace std;

class toolbooth{
	private:
		int tcars;
		float tmoney;
	public:
		toolbooth():tcars(0),tmoney(0){
		};
		void payingcar(){
			tmoney=tmoney+0.5;
			tcars+=1;
		}
		void nonpay(){
			tcars+=1;
		}
		void display(){
			cout<<"the total car paid:"<<tmoney<<endl;
		cout<<"the total car:"<<tcars<<endl;
		}
};
int main(){
	toolbooth toll1;
	cout<<"enter a for paying car"<<endl;
	cout<<"enter b for non paying car"<<endl;
	cout<<"enter esc to exit program"<<endl;
	char ch;
	while (ch!=27){
		ch=_getch();
		if(ch==97){
			toll1.payingcar();	
		}
		else if(ch==98){
			toll1.nonpay();
		}
	}
	toll1.display();
	
}
