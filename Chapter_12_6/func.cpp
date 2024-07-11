#include <iostream>
#include "Deck.h"
#include "Player.h"

bool playerWantsHit()
{
  while (true)
  {
    std::cout << "(h) to hit, or (s) to stand: ";
 
    char ch{};
    std::cin >> ch;
 
    switch (ch)
    {
    case 'h':
      return true;
    case 's':
      return false;
    }
  }
}

bool playerTurn(Deck& deck, Player& player)
{
  while (true)
  {
    std::cout << "You have: " << player.score() << '\n';
 
    if (player.isBust())
    {
      return true;
    }
    else
    {
      if (playerWantsHit())
      {
        player.drawCard(deck);
      }
      else
      {
        return false;
      }
    }
  }
}
 
bool dealerTurn(Deck& deck, Player& dealer)
{
  while (dealer.score() < minimumDealerScore)
  {
    dealer.drawCard(deck);
  }
 
  return dealer.isBust();
}

bool playBlackjack(Deck& deck)
{
  Player dealer{};
  dealer.drawCard(deck);
 
  std::cout << "The dealer is showing: " << dealer.score() << '\n';
 
  Player player{};
  player.drawCard(deck);
  player.drawCard(deck);
 
  if (playerTurn(deck, player))
  {
    return false;
  }
 
  if (dealerTurn(deck, dealer))
  {
    return true;
  }
 
  return (player.score() > dealer.score());
}