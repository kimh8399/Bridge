#ifndef BRIDGE_INFO_H_INCLUDED
#define BRIDGE_INFO_H_INCLUDED
#include "cards.h"

// location of each player

enum direction {NORTH = 1, EAST, SOUTH, WEST};

// player class
class player
{
public:
    // current direction
    direction curr_dir;

    // deals the deck into it's hand
    void deal(deque<card> cards)
    {
        for(int i = 0; i < card::deck_size/4; i+= (int)curr_dir)
            hand.push_back(cards[i]);
    }

    // players hand
    deque <card> hand;

};

// starts the bridge game
int start_bridge();

#endif // BRIDGE_INFO_H_INCLUDED
