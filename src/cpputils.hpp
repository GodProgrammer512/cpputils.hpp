// Run once:
#ifndef CPPUTILS_HPP
#define CPPUTILS_HPP

// Importations:
#include <stdio.h>


// Variables:
static constexpr unsigned char base_terminal[]{"\033[m"}, bold[]{"\033[1m"}, base_terminal_bold[]{"\033[m\033[1m"}, red_color[]{"\033[31m"}, green_color[]{"\033[32m"}, yellow_color[]{"\033[33m"}, blue_color[]{"\033[34m"}, cyan_color[]{"\033[36m"}; // Variables to change the Terminal colors.

// Classes and functions:
class CppUtils
{
  public:
    class Terminal
    {
      public:
        static constexpr void clear_terminal()
        {
          fputs("\033[2J\033[H", stdout);
          fflush(stdout);
        }
    };

    // Functions:
    static constexpr unsigned char verify_os(){
      #ifdef _WIN32 // For Windows.
        return 1u;
      #elif defined(__linux__) // For Linux.
        return 2u;
      #else // For another OS.
        return 0u;
      #endif
    }
};

// End code:
#endif
