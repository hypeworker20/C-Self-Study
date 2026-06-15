#include <iostream>
#include "fns.hpp"
std::string username;
std::string password;
bool logged = false;
void mafeilong();
int main() {
    bool exit = false;
    while (exit == false){
      std::cout << "Enter 'exit' to exit, else enter username: ";
      std::cin >> username;
      if (username == "exit"){
        exit = true;
      }
      else{
        while (!username_auth(username)){
          std::cout << "Enter a valid username: ";
          std::cin >> username;
        }
        std::cout << "Enter password: ";
        std::cin >> password;
        while (!password_auth(password)){
          std::cout << "Enter the correct password: ";
          std::cin >> password;
        }
        if (username_auth(username) && password_auth(password)){
          exit = true;
          logged = true;
        }
      }
    }
    if (logged){
      mafeilong();
    }
}
void mafeilong(){
  std::cout << "MaFeiLong\n";
}
