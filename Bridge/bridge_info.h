#ifndef BRIDGE_INFO_H_INCLUDED
#define BRIDGE_INFO_H_INCLUDED
#include "cards.h"

// location of each player

enum direction {NORTH = 1, EAST, SOUTH, WEST};

// player class
class player
{
public:
    player(direction d) {curr_dir = d;}

    // current direction
    direction curr_dir;

    // deals the deck into it's hand
    void deal(deque<card> cards);

    deque <card> hand;
};

// starts the bridge game
void start_bridge();

#endif // BRIDGE_INFO_H_INCLUDED
