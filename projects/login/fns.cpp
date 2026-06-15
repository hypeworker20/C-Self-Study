#include <iostream>
bool username_auth(std::string username){
  if (username == "MaFeiLong"){
    return true;
  }
  else{
    return false;
  }
}
bool password_auth(std::string password){
  if (password == "MaFeiLong"){
    return true;
  }
  else{
    return false;
  }
}