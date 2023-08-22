#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
void drawline(int n,char symbol){
  for(int i=0;i<n;i++){
    cout<<symbol;
  }cout<<endl;
}
void rules(){
  system("cls");
  cout<<"\n\n\n";
  drawline(80,'-');
  cout<<"\t\tRules of the game\n";
  drawline(80,'_');
  cout<<"t1 choose number between 1 to 10\n";
  cout<<"t2 if you win get 10 times of bet\n";
  cout<<"t3 if you loose get nothing\n";
  
}

int main(){
  string playername;
  int amount;
  int bettingamount;
  int guess;
  int dice;
  int choice;

  srand(time(0));

  drawline(60,'_');
  cout<<"\n\n\n\t\tCASINO GAME\n\n\n";
  drawline(60,'_');

  cout<<"\n\nENTER YOUR NAME:";
  getline(cin,playername);

  cout<<"\n\nENTER THE DEPOSITE AMOUNT TO PLAY GAME $:";
  cin>>amount;

  do{
    system("cls");
    rules();

    cout<<"\n\nYOUR CURRENT BALANCE IS $"<<amount<<"\n";
    do{
      cout<<playername<<"enter money to bet:$";
      cin>>bettingamount;
      if(bettingamount>amount){
        cout<<"your betting amount is more than your current amount"<<"\nRE-enter data\n";
        
      }
    }while(bettingamount>amount);
    do{
      cout<<"give your number  to bet betwwen 1to10";
      cin>>guess;
      if(guess<=0||guess>10){
        cout<<"pls check the number should be between 1 to 10"<<"re-enter the number  ";
        
      }
    }while(guess<=0||guess>10);

    dice=rand()%10+1;
    if(dice==guess){
      cout<<"\n\ngood lick you won"<<bettingamount<<endl;
      amount =amount +bettingamount*10;
      
    }
    else{
      cout<<"\n\n bad luck this time"<<bettingamount<<endl;
      amount =amount-bettingamount;
    }
    cout<<"\nthe wining number was"<<dice<<"\n";
    cout<<"\n"<<playername<<"you have $"<<amount<<"\n";
    if(amount==0){
      cout<<"you have no money to play";
      break;
    }
    cout<<"\n\ndoyou wangt to play again(y/n)?";
    cin>>choice;
    
  }while(choice=='y'||choice=='Y');
  cout<<"\n\n\n";
  drawline(70,'=');
  cout<<"\n\n thanks for play game your balance is $"<<amount<<"\n";
  
  
}