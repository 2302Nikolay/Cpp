#pragma once
#include "Deck.h"

 // Максимальный счет до проигрыша.
constexpr int maximumScore{ 21 };
 
// Минимальный балл, который должен быть у дилера.
constexpr int minimumDealerScore{ 17 };

class Player
{
private:
  int m_score{};
 
public:
  void drawCard(Deck& deck);
 
  int score() const;
 
  bool isBust() const;
};