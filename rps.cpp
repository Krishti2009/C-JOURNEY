#include<iostream>
#include<ctime>
#include<cstdlib>
char player_choice();
char comp_choice();
void show_choice(char choice);
void choose_winner(char player,char computer);
int main()
{
	char player;
	char computer;
	player=player_choice();
	std::cout<<"Your choice is:";
	show_choice(player);
	computer=comp_choice();
	std::cout<<"\nComputer choice is:";
	show_choice(computer);
	choose_winner(player,computer);
}
char player_choice()
{
	char ch;
	do{
	std::cout<<"Enter r for rock, p for paper and s for scissor:";
	std::cin>>ch;
	}while(ch!='r'&&ch!='p'&&ch!='s');
	return ch;
}
char comp_choice()
{
	srand(time(0));
	int num=(rand()%3+1);
	if(num==1)
	{
		return 'r';
	}
	else if(num==2)
	{
		return 'p';
	}
	else
	{
		return 's';
	}
}
void show_choice(char choice)
{
	switch(choice)
	{
		case 'r':
			std::cout<<"Rock";
			break;
		case 'p':
			std::cout<<"Paper";
			break;
		case 's':
			std::cout<<"Scissor";
			break;
	}
}
void choose_winner(char player,char computer)
{
	if(player=='r'&&computer=='s'||player=='p'&&computer=='r'||player=='s'&&computer=='p')
	{
		std::cout<<"\nPlayer wins";
	}
	else if(player==computer)
	{
		std::cout<<"\nIts a tie";
	}
	else 
	{
		std::cout<<"\nComputer wins";
	}
}