#ifndef CARDS_H_INCLUDED
#define CARDS_H_INCLUDED

#include "libraries.h"

using namespace std;

int random_num(int i);

class card
{
public:
    // Enums for the suit and the value
    enum pip_type {two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace, pip_count};
    enum suit_type {clubs, diamonds, hearts, spades, suit_count, no_trump};

    // Deck size calculated through the size of enums
    enum {deck_size = suit_count * pip_count};

    //given a suit and value converts it to a value
    card(suit_type s, pip_type p): value(s + suit_count * p) {};

    // Gives a number based on the value
    suit_type suit() { return suit_type(value / pip_count); }
    pip_type pip() { return pip_type(value % pip_count); }

    explicit card(unsigned char v = 0): value(v) {};

//private:
    // value of card
    unsigned int value;
};

// list of names for values
const char* const pip_names[] =
{ "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "ace"};

// ouptuts value name through stream
std::ostream& operator<<(std::ostream& os, card::pip_type pip);

// list of names for suits
const char* const suit_names[] =
{ "clubs", "diamonds", "hearts", "spades" };

// outputs suit name through stream
std::ostream& operator<<(std::ostream& os, card::suit_type pip);

// Outputs the card name
std::ostream& operator<<(std::ostream& os, card c);

class deck
{
public:
    // fills the deck with cards
    deck()
    {
        for(int i = 0; i < card::deck_size; i++)
            cards.push_back(card(i));
    }

    // randomly shuffles the cards
    void shuffle()
    {
        int num_Shuffle = rand();
        for(int i = 0; i < num_Shuffle; i++)
            random_shuffle(cards.begin(), cards.end());
    }

    // the deque of cards
    deque<card> cards;

};

#endif // CARDS_H_INCLUDED
