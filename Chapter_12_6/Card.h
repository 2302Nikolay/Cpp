#pragma once
#include "Enums.h"

class Card
{
private:
    CardRank m_rank{};
    CardSuit m_suit{};

public:
    Card() = default;

    Card(CardRank rank, CardSuit suit);

    void printCard() const;

    int getCardValue() const;
};