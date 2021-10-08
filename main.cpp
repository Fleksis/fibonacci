#include <iostream>

int main() {
  unsigned long long skaitlis1, skaitlis2, summa, cikluSkaits;

  skaitlis1 = 0;
  skaitlis2 = 1;
  summa = 0;
  std::cout << "========= \n";
  std::cout << "fibonacci \n";
  std::cout << "========= \n";

  std::cout << "Ievadi skaitli līdz 99, lai noteikti fibonači: ";
  std::cin >> cikluSkaits;

  if(cikluSkaits <= 99)
  {
    for (int i = 1; i < cikluSkaits+1; i++) {
      summa = skaitlis1 + skaitlis2;
      std::cout << i << " = ";
      std::cout << summa << std::endl;
      skaitlis2 = skaitlis1;
      skaitlis1 = summa;
    }
  } else {
    std::cout << "ERROR: Skaitlis tika ievadīts par lielu!";
  }
  return 0;
}