#pragma once
#include "Player.h"
#include "Deck.h"

bool playerWantsHit();

bool playerTurn(Deck& deck, Player& player);

bool dealerTurn(Deck& deck, Player& dealer);

bool playBlackjack(Deck& deck);

