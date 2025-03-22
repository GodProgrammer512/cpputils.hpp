// Importations:
#include <stdio.h>


// Variables:
const unsigned char base_terminal[6]{"\033[m"}, bold[7]{"\033[1m"}, base_terminal_bold[13]{"\033[m\033[1m"}, red_color[8]{"\033[31m"}, green_color[8]{"\033[32m"}, yellow_color[8]{"\033[33m"}, blue_color[8]{"\033[34m"}, cyan_color[8]{"\033[36m"};

// Classes and functions:
class CppUtils{

  public:
  class Terminal{
    public:
    static void clear_terminal(){
      printf("\033[2J\033[H");
      fflush(stdout);
    }
  };

  // Functions:
  static unsigned char verify_os(){
    #ifdef _WIN32 // For Windows.
      return 1u;
    #elif defined(__linux__) // For Linux.
      return 2u;
    #else // For another OS.
      return 0u;
    #endif
  }
};
