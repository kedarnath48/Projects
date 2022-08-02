#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
  int c;
  
  cout<<"\t\t\t ____________________________________________________ \n\n\n";
  cout<<"\t\t\t _______________Welcome to the Login Page____________ \n\n\n";
  cout<<"\t\t\t _______________________Menu_________________________ \n\n";
  cout<<"                                                            \n\n";
  cout<<"\t\t\t  | Press 1 to Login                               |" <<endl;
  cout<<"\t\t\t  | Press 2 to Register                            |" <<endl;
  cout<<"\t\t\t  | Press 3 if you forgot your password            |" <<endl;
  cout<<"\t\t\t  | Press 4 to Exit                                |" <<endl;
  cout<<"\n\t\t\t    Please enter your choice : ";
  cout<<endl;
  cin>>c;

  switch(c){
    case 1:
          login();
          break;
    case 2:
          registration();
          break;
    case 3:
          forgot();
          break;
    case 4:
          cout<<"\t\t\t  Thank you! "<<endl;
          break;
    default:
            system("cls");
            cout<<"\t\t\t Please select from the options mentioned above \n"<<endl;
            main();
  }
}
  void login(){
    int count = 0;
    string userId, password, Id, pass;
    system("cls");
    cout<<"\t\t\t Please enter Username and Password"<<endl;
    cout<<"\t\t\t Username ";
    cin>>userId;
    cout<<"\t\t\t Password ";
    cin>>password;

    ifstream input("records.txt");
    while(input>>Id>>pass){
      if(Id == userId && pass == password){
        count = 1;
        system("cls");
      }
    }
    input.close();

    if(count == 1){
      cout<<userId<<"\n Your login is successful \n Thanks for logging in ! \n";
      main();
    }
    else{
      cout<<"Login error \n Please check your username and password \n";
      main();
    }
  }

  void registration(){
    string ruserId, rpassword, rid, rpass;
    cout<<"\t\t\t  Enter your Username ";
    cin>>ruserId;
    cout<<"\t\t\t  Enter your Password ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);

    f1<<ruserId<<" "<<rpassword<<endl;
    system("cls");
    cout<<"\t\t\t  Registration successful \n";
    main();

  }

  void forgot(){
    int option;
    cout<<"\t\t\t  Forgot the password ! No worries \n ";
    cout<<"\t\t\t  Press 1 to search your Id by username "<<endl;
    cout<<"\t\t\t  Press 2 to go back to the main menu "<<endl;
    cout<<"\t\t\t  Enter your choice : ";
    cin>>option;
    switch(option){
      case 1:
      {
            int count1 = 0;
            string suserId, sId, spass;
            cout<<"\t\t\t  Enter the username which you have remembered : ";
            cin>>suserId;

            ifstream f2("records.txt");
            while(f2>>sId>>spass){
              if(sId == suserId){
                count1 = 1;
              }
            }
            f2.close();
            if(count1 == 1){
              cout<<"\t\t\t \n Account found \n";
              cout<<"\t\t\t  Your password is "<<spass;
              main();
            }
            else{
              cout<<"\t\t\t Sorry your account is not found \n";
              main();
            }
            break;
      }
      case 2:
      {
        main();
      }
      default:
              cout<<"\t\t\t Wrong chioce ! Please select the correct option"<<endl;
              forgot();
    }

  }