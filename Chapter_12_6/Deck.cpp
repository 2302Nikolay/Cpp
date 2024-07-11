#include <random>
#include <ctime>
#include <array>
#include <cassert>
#include <algorithm>
#include "Deck.h"

void Deck::printDeck() const
{
    for (const auto& card : m_deck)
   {
    card.printCard();
    std::cout << ' ';
   }
    
    std::cout << '\n';
}

void Deck::shuffleDeck()
{
  static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
 
  std::shuffle(m_deck.begin(), m_deck.end(), mt);

  m_cardIndex = 0;
}

Deck::Deck()
{
    index_type card{ 0 };
 
    auto suits{ static_cast<index_type>(CardSuit::MAX_SUITS) };
    auto ranks{ static_cast<index_type>(CardRank::MAX_RANKS) };
 
    for (index_type suit{ 0 }; suit < suits; ++suit)
    {
      for (index_type rank{ 0 }; rank < ranks; ++rank)
      {
        m_deck[card] = { static_cast<CardRank>(rank), static_cast<CardSuit>(suit) };
        ++card;
      }
    }
}

const Card& Deck::dealCard()
  {
    assert(m_cardIndex < m_deck.size());
    
    return m_deck[m_cardIndex++];
  }