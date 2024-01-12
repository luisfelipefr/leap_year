#include <iostream>

int main() {
  // Variables;
  int year;
  int yearStore;
  int len = 1;
  bool next = false;

  std::cout << "Digite qual ano deseja saber se é bisexto: ";
  std::cin >> year;

  yearStore = year;

  if(year > 0){
    // we count how many times it can be divided by 10:
    // (how many times we can cut off the last digit until we end up with 0)
      for(len = 0; year > 0; len++ ){
        year = year / 10;
    };
  }

  while( next == false )
  {
    if(len == 4)
      {
        next = true;
      }
      else 
      {
        std::cout << "Digite novamente um ano com os 4 digitos: ";
        std::cin >> year;
        yearStore = year;
        len = 1;
          for(len = 0; year > 0; len++ )
          {
            year = year / 10;
          };
      }

  }

  if(next)
  {
      if(yearStore % 4 == 0 && yearStore % 100 != 0 || yearStore % 400 == 0)
      {
        std::cout << yearStore << " é um ano bissexto.\n";
      }
      else
      {
        std::cout << yearStore << " Não é um ano bissexto.\n";
      }
  }
  

}