/*
===== Bitcoin like address generator =====
Author: SK Yang
Version: 0.1

This little program will help you to generate many address from daemon as you reqested.

Note: don't forget to change the file path to your bitcoin(or a branch) folder.
*/

#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
  
  // Amount of address will be affected by the loop time
  for(int i = 1; i <= 100; i++){
    cout << i << ": ";
    system("C:\\Bitcoin\\daemon\\bitcoind -datadir=C:\\Bitcoin\\blocks getnewaddress"); // don't forget to change file path.
    
    if(i % 50 == 0)
         system("C:\\Bitcoin\\daemon\\bitcoind -datadir=C:\\Bitcoin\\blocks walletpassphrase password 3600"); // don't forget to change file path.
  }
    
  system("pause");
  return 0;   
}
