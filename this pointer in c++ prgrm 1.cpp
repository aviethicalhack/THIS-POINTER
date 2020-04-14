 #include<iostream>
using namespace std;
class test
{
	private:
		int x;
		public:
			void setx(int x)
			{
				this->x=x;
				
			}
			void show()
			{
				cout<<"printing the value of x:"<<x<<endl;				
			}
			
};
int main()
{
	test obj;
	int x=20;
	obj.setx(x);
	obj.show();
}


