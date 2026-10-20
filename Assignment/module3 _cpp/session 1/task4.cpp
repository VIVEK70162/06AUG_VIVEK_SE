/*
Build a simple TaskList class/object that stores multiple Task objects and provides 
addTask(title), markTaskDone(index), and showTasks() methods.
Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses. 
*/

#include<iostream>
using namespace std;

class tasklist
{
	public:
		string title[4][1];	
		
	void addtask(string t, int i)
    {
        title[i][0] = t;
    }
		
		void showtask()
		{
			
			for(int i=0; i<3; i++)
			{
			cout<<"\n your task is "<<title[i][0];
			
			}
		}
};
main()
{
	tasklist tl;
 	
 	
	cout<<"enter your 3 task";
	for(int i=0; i<3; i++)
			{
				string s;
			cout<<"enter "<<i+1<<" task = ";
			cin>>s;
			tl.addtask(s,i);
			} 
		
	tl.showtask();
}
