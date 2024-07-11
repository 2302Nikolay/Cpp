#pragma once
#include <array>
#include <iostream>
#include "Card.h"

class Deck
{
public:
    using array_type = std::array<Card, 52>;
    using index_type = array_type::size_type;
    
    array_type m_deck{};
    index_type m_cardIndex{ 0 };
private:

public:
    Deck();

    const Card& dealCard();
    
    void printDeck() const;

    void shuffleDeck();
};