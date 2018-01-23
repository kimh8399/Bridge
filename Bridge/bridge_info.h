#ifndef BRIDGE_INFO_H_INCLUDED
#define BRIDGE_INFO_H_INCLUDED
#include "cards.h"

// location of each player

#define THE_BOOK 6

enum direction {NORTH, EAST, SOUTH, WEST, num_players};

// player class
class player
{
public:
    player(direction d) :curr_dir(d) {}
    player () {}
    // current direction
    direction curr_dir;

    // deals the deck into it's hand
    void deal(deque<card> cards);

    deque <card> hand;
};

// Sorting functions
bool sort_suit(card i, card j);
bool sort_pip(card i, card j);

// starts the bridge game
void start_bridge();

#endif // BRIDGE_INFO_H_INCLUDED
