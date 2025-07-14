#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void Game (string Player_1,string Player_2) {
    if(Player_1=="Scissor" && Player_2=="Rock") {
        cout<<"Player 2 Win."<<endl; 
    }else if(Player_1=="Rock" && Player_2=="Scissor") {
        cout<<"Player 1 Win."<<endl; 
    }else if(Player_1=="Paper" && Player_2=="Rock") {
        cout<<"Player 1 Win."<<endl; 
    }else if(Player_1=="Rock" && Player_2=="Paper") {
        cout<<"Player 2 Win."<<endl; 
    }else if(Player_1=="Scissor" && Player_2=="Paper") {
        cout<<"Player 1 Win."<<endl; 
    }else if(Player_1=="Paper" && Player_2=="Scissor") {
        cout<<"Player 2 Win."<<endl; 
    }else {
        cout << "Draw" << endl;
    }
}
int main () {
    string Player_1 ,Player_2; 
  cout << "Please enter the choice of the player 1 : " <<endl;
  cin >>Player_1;
  cout << "Please enter the choice of the player  : " <<endl;
  cin >>Player_2;
  Game(Player_1 , Player_2);
}