#include <iostream>

using namespace std;


int func_readwaterlevel(unsigned int i_waterlevel_ui16, int waterlevelState){
  
  int waterlevel = i_waterlevel_ui16 * 10;
  if(waterlevel < 40){
    waterlevelState = 1;
  }
  else if(waterlevel >= 40 && waterlevel <45){
  }
  else if (waterlevel > 45 && waterlevel <75 && waterlevelState == 1 ){
    waterlevelState = 2;

  }
  else{
    waterlevelState = 3;
  }


  return waterlevelState;
}


int main(){

  short water = 10;

  return 0;
}