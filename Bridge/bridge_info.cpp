#include "bridge_info.h"

bool sort_func(card i, card j)
{
    return (i.suit()<j.suit());
}

void player::deal(deque<card> cards)
{
    auto card_begin = cards.begin();
    auto card_end = cards.end();

    switch(curr_dir)
    {
        case NORTH:
            advance(card_end, 13);
            break;
        case SOUTH:
            advance(card_begin, 13);
            advance(card_end, 26);
            break;
        case EAST:
            advance(card_begin, 26);
            advance(card_end, 39);
            break;
        case WEST:
            advance(card_begin, 39);
            break;
    }
    hand.assign(card_begin, card_end);
    //sort(hand.begin(), hand.end(),sort_func);
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

    cout<<"North Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<North.hand[i]<<endl;
    cout<<endl;
    cout<<"East Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<East.hand[i]<<endl;
    cout<<endl;
    cout<<"South Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<South.hand[i]<<endl;
    cout<<endl;
    cout<<"West Hand"<<endl;
    for(int i = 0; i < 13; i++)
        cout<<West.hand[i]<<endl;
    cout<<endl;
}
