#include <iostream>

int main() {

  int masivs[20]; // masīva maksimālais elementu skaits ir 20
  int skaits = 0;
  std::cin >> skaits; // ievadam masīva elementu skaitu
  for(int i = 0; i < skaits; i++) { 
      std::cin >> masivs[i];      // aizpildam masīvu
  }

  // mans kods

  int skaitlis1, skaitlis2, summa, pareizs;
  long masivs2[20];
  
  skaitlis1 = 0;
  skaitlis2 = 1;
  pareizs = 0;
  
  std::cout << "========= \n";
  std::cout << "fibonacci \n";
  std::cout << "========= \n";

  std::cout << "Ievadi skaitli līdz 99, lai noteikti fibonači: \n";

  if(skaits <= 99)
    {
      for (int i = 0; i < skaits; i++) {
        summa = skaitlis1 + skaitlis2;
        skaitlis2 = skaitlis1;
        skaitlis1 = summa;
        masivs2[i] = summa;
        std::cout << masivs2[i] << " = " << summa << std::endl;
        }
    }
    std::cout << "================================= \n";
    for(int i = 0; i < skaits; i++){
      if(masivs[i] == masivs2[i]){
          pareizs+=1;
        }
    }
    if(pareizs == skaits){
      std::cout << "Pareizs";
    } else {
      std::cout << "Nepareizs";
    }

    return 0;
}
