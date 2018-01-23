#include "bridge_info.h"
#include "basic_play.h"

bool sort_suit(card i, card j)
{
    return ((int)i.suit() < (int)j.suit());
}

bool sort_pip(card i, card j)
{
    return ((int)i.pip() < (int)j.pip());
}

void player::deal(deque<card> cards)
{
    deque<card>::iterator card_begin = cards.begin();

    hand.assign(card_begin + ((int)curr_dir)*13, card_begin + (int)(curr_dir + 1)*13);

    sort(hand.begin(), hand.end(), sort_pip);
    sort(hand.begin(), hand.end(), sort_suit);
}

void start_bridge()
{
    deck mainDeck;
    mainDeck.shuffle();

    player players[num_players];
    for(int i = 0; i < num_players; i++)
        players[i].curr_dir = (direction)i;

    //dealing the hands
    players[NORTH].deal(mainDeck.cards);
    players[EAST].deal(mainDeck.cards);
    players[SOUTH].deal(mainDeck.cards);
    players[WEST].deal(mainDeck.cards);

    cout<<"North Hand"<<endl;
    cout<<players[NORTH].hand<<endl;

    cout<<"South Hand"<<endl;
    cout<<players[SOUTH].hand<<endl;

    cout<<"West Hand"<<endl;
    cout<<players[WEST].hand<<endl;

    cout<<"East Hand"<<endl;
    cout<<players[EAST].hand<<endl;

    //card::suit_type trump_suit = card::spades;

    // Insert bidding program

    // Basic Play Program
    //start_play(trump_suit, 1, SOUTH, players);

}
