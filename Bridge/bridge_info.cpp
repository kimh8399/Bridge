#include "bridge_info.h"

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

    hand.assign(card_begin + ((int)curr_dir-1)*13, card_begin + (int)curr_dir*13);

    sort(hand.begin(), hand.end(), sort_pip);
    sort(hand.begin(), hand.end(), sort_suit);

    for(int i = 0; i < 13; i++)
        cout<<hand[i]<<endl;
}

void start_bridge()
{
    deck mainDeck;
    mainDeck.shuffle();

    // Setting player direction
    player North(NORTH);
    player East(EAST);
    player South(SOUTH);
    player West(WEST);

    //dealing the hands
    North.deal(mainDeck.cards);
    East.deal(mainDeck.cards);
    South.deal(mainDeck.cards);
    West.deal(mainDeck.cards);

    cout<<"South Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<South.hand[i]<<endl;
    cout<<endl;

    cout<<"North Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<North.hand[i]<<endl;
    cout<<endl;

    cout<<"East Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<East.hand[i]<<endl;
    cout<<endl;

    cout<<"West Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<West.hand[i]<<endl;
    cout<<endl;
}
