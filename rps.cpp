#include<iostream>
#include<cstdlib>  //  for genearting randon number
#include<ctime>  // for defining current time 
 
// pre-processor constants :
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
//	Rules :
   /* 
    Rock beats scissors
    scissors beats paper 
    papper beats rock
   
   */
	// srand - seed random value ~  
	// time - function return current time 
	// convert time function  into unsigned value for srand 
	srand((unsigned int) time(NULL));  
	
	int player_throw = 0;
	int ai_throw=0;
	bool draw = false;
	
	
	do
	{
	cout<<" ___________________"<<endl;
	cout<<"|                   |"<<endl;
	cout<<"| Select your throw |"<<endl;
	cout<<"|                   |"<<endl;
	cout<<"|  (1) Rock         |"<<endl;
	cout<<"|  (2) Paper        |"<<endl;
	cout<<"|  (3) Scissors     |"<<endl;
	cout<<"|                   |"<<endl;
	cout<<"|   Selection :     |"<<endl;
    cout<<"|                   |"<<endl;
	cin>>player_throw;
	
	

	cout<<endl;
	
		if(player_throw == ROCK)
	{
	 cout <<"Player Throws ROCK."<<endl;	
	}
	
	else if(player_throw == PAPER)	
	{
		cout <<"Player Throws PAPER."<<endl;	
	}
	
	else if(player_throw == SCISSORS)	
	{
		cout <<"Player Throws SCISSORS."<<endl;	
	}
	// rand() -> 0 ....99999999 % 3 =   0-2 + 1 -> 1-3
	//
	// 10 % 3 --> 1
	// 11 % 3 --> 2
	// 12 % 3 --> 0
	// 13 % 3 --> 1
		
	ai_throw = (rand() % 3) + 1;
	
	if(ai_throw == ROCK)
	{
	 cout <<"AI Throws ROCK."<<endl;	
	}
	
	else if(ai_throw == PAPER)	
	{
		cout <<"AI Throws PAPER."<<endl;	
	}
	
	else if(ai_throw == SCISSORS)	
	{
		cout <<"AI Throws SCISSORS."<<endl;	
	}	
	
	draw = false;
	
	if(player_throw == ai_throw)
	{
		draw =true;
		cout<<"Draw! Play again!"<<endl;
	}
	
	else if(player_throw == ROCK && ai_throw == SCISSORS)
	{
		cout<< "ROCK beats SCISSORS! YOU WIN."<<endl;
	}
		
	else if(player_throw == ROCK && ai_throw == PAPER)
	{
		cout<< "PAPER beats ROCK! YOU LOSE."<<endl;
	}
	
	else if(player_throw == PAPER && ai_throw == ROCK)
	{
		cout<< "PAPER beats ROCK! YOU WIN."<<endl;
	}
	
	else if(player_throw == PAPER && ai_throw == SCISSORS)
	{
		cout<< "SCISSORS beats PAPER! YOU LOSE."<<endl;
	}
	
	else if(player_throw == SCISSORS && ai_throw == PAPER)
	{
		cout<< "SCISSORS beats PAPER! YOU WIN."<<endl;
	}
	
	else if(player_throw == SCISSORS && ai_throw == ROCK)
	{
		cout<< "ROCK beats SCISSORS! YOU LOSE."<<endl;
	}
	
	cout<<endl;
	
	}while(draw);
	
}
