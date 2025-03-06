#include <iostream>
#include "MoneyDatabase.h"

void MoneyDatabase::add(Deposit deposit) {
    deposits_[size_] = deposit;
    size_++;
  return;
}

int MoneyDatabase::size(){
  return size_;
}

Deposit MoneyDatabase::get(int index){
  if (index > size_)
    return deposits_[index];
  else
    return Deposit deposit{"INV", 0};
}

double MoneyDatabase::total_of(std::string currency_code){
  int total{};
  
  for (int i{}; i < size_; i++){
    if (deposits_[i].currency == currency_code){
      total = total + deposits_[i].amount;
    }
  }
    
  return total;
}

