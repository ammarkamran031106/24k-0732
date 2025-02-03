#include<iostream>
using namespace std;
class data{
	private:
		int serial_no;
		static int count;
	public:
		data(){
			count++;
			this->set_num(count);
		}
		void set_num(int c){
			serial_no=c;
		}
		int get_num(){
		return serial_no;
		}	
};
int data :: count =0;
int main(){
	data one,second,third;
	cout<<"I'm object:"<<one.get_num()<<endl;
	cout<<"I'm object:"<<second.get_num()<<endl;
	cout<<"I'm object:"<<third.get_num();
	return 0;
}
