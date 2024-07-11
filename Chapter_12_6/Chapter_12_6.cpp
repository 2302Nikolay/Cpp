#include <iostream>

#include "Card.h"
#include "Enums.h"
#include "Deck.h"
#include "Player.h"
#include"func.h"

int main()
{
   Deck deck{};
 
  deck.shuffleDeck();
 
  if (playBlackjack(deck))
  {
    std::cout << "You win!\n";
  }
  else
  {
    std::cout << "You lose!\n";
  }
 
  return 0;
 
  return 0;
}