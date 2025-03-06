#include <iostream>
#include <string>

int main(int argi, char* args[]){
  int no_flags = 0; int flag = 0; int flags = 0; 
  std::string no_flags_str, flag_str, flags_str;

  for (int i = 0; i < argi; i++){
    std::string arg = args[i];

    if ( arg.starts_with("--") ){
      flags_str = flags_str + arg + "\n";
      flags++;

    } else if( arg.front() != '-' ) {
      no_flags_str = no_flags_str + arg + "\n";
      no_flags++;

    } else {
      flag_str = flag_str + arg + "\n";
      flag++;

    }
  }

    std::cout << flag_str << flags_str << no_flags_str << "\n";
    std::cout << flag << " " << flags << " " << no_flags << "\n";
  
  return 0;
}


/*int main(int argi, char* args[]){*/
/*    for (int i = 1; i < argi; i++){*/
/*      if ( args[i][0] == '-' && args[i][1] == '-' ) {*/
/*        first_buffer = first_buffer + args[i] + "\n";*/
/*        flags++;*/
/*      } else if ( args[i][0] != '-' ) {*/
/*        second_buffer = second_buffer + args[i] + "\n";*/
/*        no_flags++;*/
/*      } else {*/
/*        std::cout << args[i] << "\n";*/
/*        flag++;*/
/*      }*/
/*    }*/
/*    std::cout << first_buffer;*/
/*    std::cout << second_buffer;*/
/*    std::cout << flag << " " << flags << " " << no_flags << "\n";*/
/*  return 0;*/
/*}*/
