#include <iostream>
#include <array>
#include "Deposit.h"

std::array<std::string, 42> my_numbers{};

struct MoneyDatabase {
  std::array<Deposit, 100> deposits_{};
  int size_{};

  void add(Deposit deposit);
  int size();
  Deposit get(int index);
  double total_of(std::string currency_code);
};


