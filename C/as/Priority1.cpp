/********************************************************************
Roll No: 195057
Name: Manav Doda
Program for Priority (Non-preemptive)Scheduling
Assuming all processes arrived at time = 0
**********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
# define MAX 100 
struct Process{
	int pid;
	int bt;
	int prior;
	int wt;
	int tat;
} p[MAX];
void sortPriority(Process p[], int n){
	Process temp;
	for(int j=0; j<n-1; j++){
		for(int i=0; i<n-1-j; i++){
			if(p[i].prior>p[i+1].prior){
				temp = p[i];
				p[i] = p[i+1];
				p[i+1] = temp;
			}
		}
	}
}
void waiting(Process p[], int n){
	int sum_wt = 0;
	p[0].wt = 0;
	for(int i=1; i<n; i++){
		p[i].wt = p[i-1].wt + p[i-1].bt;
		sum_wt +=p[i].wt;
	}
	float avg = sum_wt/n;
		cout<<"Average waiting time is: "<<avg<<" units."<<endl;
}
void turnaround(Process p[], int n){
	int sum_tat = 0;
	p[0].tat = p[0].bt;
	for(int i=1; i<n; i++){
		p[i].tat = p[i].bt + p[i].wt;
		sum_tat+=p[i].tat;
	}
	float avg = sum_tat/n;
	cout<<"Average turnaround time is: "<<avg<<" units."<<endl;
}
void printTable(Process p[], int n){ // function to print the table 
	// printing the top line
	cout<<"+-----+----------+------------+--------------+-----------------+"<<endl;
    cout<<"| PID | Priority | Burst Time | Waiting Time | Turnaround Time |"<<endl;
    cout<<"+-----+----------+------------+--------------+-----------------+"<<endl;;
    // printing the data
    for(int i=0; i<n; i++){
    	cout<<"| "<<std::setw(2)<<p[i].pid<<"  |"<<"      "<<std::setw(2)<<p[i].prior<<"  |"<<"      "<<std::setw(2)<<p[i].bt<<"    |      "<<std::setw(2)<<p[i].wt<<"      |        "<<std::setw(2)<<p[i].tat<<"       |"<<endl;
    	cout<<"+-----+----------+------------+--------------+-----------------+"<<endl;
	}
}
void printChart(Process p[],int n){ // function to print gantt chart 
   //printing the top line
   cout<<" ";
	for(int i=0; i<n; i++){
		for(int j=0; j<p[i].bt; j++){
			cout<<"--";
		}
		cout<<" ";
	}cout<<endl;
	//printing the bottom line
	cout<<"|";
	for(int i=0; i<n; i++){
		for(int j=0; j<p[i].bt-1; j++){
			cout<<" ";
		}
		cout<<"P"<<p[i].pid;
		for(int j=0; j<p[i].bt-1; j++){
			cout<<" ";
		}cout<<"|";
	}
	cout<<endl;
	// printing the bottom line
	cout<<" ";
	for(int i=0; i<n; i++){
		for(int j=0; j<p[i].bt; j++){
			cout<<"--";
		}cout<<" "; 
	}
	cout<<endl;
	cout<<"0";
	for(int i=0; i<n; i++){
		for(int j=0; j<p[i].bt; j++){
			cout<<"  ";
		}
		if(p[i].tat<9){
			cout<<"\b";
		}
		cout<<p[i].tat;
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"Enter the number of processes: ";
	cin>>n;
	for(int i=0; i<n; i++){
		p[i].pid = i+1; 
		cout<<"Enter the burst time of the processes "<<"P["<<p[i].pid<<"]: ";
		cin>>p[i].bt;
		cout<<"Enter the priority of the processes "<<"P["<<p[i].pid<<"]: ";
		cin>>p[i].prior;
		p[i].wt = p[i].tat = 0;
	}
	sortPriority(p,n);
	waiting(p,n);
	turnaround(p,n);
	printTable(p,n);
	cout<<endl;
	cout<<"       GANTT CHART"<<endl;
	printChart(p,n);
}
