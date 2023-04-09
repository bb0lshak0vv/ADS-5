// Copyright 2021 NNTU-CS
#include <string>
#include <map>
#include "tstack.h"

int Prioritetfunc(char op) {
  std::pair<char, int> prioritet[6];
  switch (op) {
    case')':
      prioritet[1].first = ')';
      prioritet[1].second = 1;
    case'(':
      prioritet[0].first = '(';
      prioritet[0].second = 0;
    case'+':
      prioritet[2].first = '+';
      prioritet[2].second = 2;
    case'-':
      prioritet[3].first = '-';
      prioritet[3].second = 2;
    case'*':
      prioritet[4].first = '*';
      prioritet[4].second = 3;
    case'/':
      prioritet[5].first = '/';
      prioritet[5].second = 3;
  }
  int priority = -1;
  for (int j = 0; j < 6; ++j) {
    if (op == prioritet[j].first) {
      priority = prioritet[j].second;
      break;
    }
  }
  return priority;
}
std::string mirOne(const std::string& a) {
  if (a.length() <= 2) return a;
  int b = 2 - a.length() % 2;
  std::string d(a, 0, b);
  for (auto it = a.begin() + b; it != a.end();) {
    d += ' '; d += *it++;;
  }
  return d;
}

std::string infx2pstfx(std::string inf) {
  // добавьте код
  return std::string("");
}

int eval(std::string pref) {
  // добавьте код
  return 0;
}
