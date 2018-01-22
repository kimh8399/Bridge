// Bridge Simulator
// Huck Kim 2018
//
// Basic Bridge Program

#include "libraries.h"
#include "bridge_info.h"

using namespace std;

int main()
{
    srand(time(NULL));

    deck mainDeck;

    //mainDeck.shuffle();

    for(int i = 0; i < card::deck_size; i++)
        cout<<mainDeck.cards[i]<<endl;

    return 0;

}
