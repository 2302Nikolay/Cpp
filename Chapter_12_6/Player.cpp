  #include "Player.h"
  #include "Deck.h"
  
  void Player::drawCard(Deck& deck)
  {
    m_score += deck.dealCard().getCardValue();
  }
 
  int Player::score() const
  {
    return m_score;
  }
 
  bool Player::isBust() const
  {
    return (m_score > maximumScore);
  }