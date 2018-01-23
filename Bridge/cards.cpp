#include "cards.h"

int random_num(int i)
{
    return rand()%i;
}

// ouptuts value name through stream
std::ostream& operator<<(std::ostream& os, card::pip_type pip)
{
    return os << pip_names[pip];
}

// outputs suit name through stream
std::ostream& operator<<(std::ostream& os, card::suit_type suit)
{
    return os << suit_names[suit];
}

// Outputs the card name
std::ostream& operator<<(std::ostream& os, card c)
{
    return os << c.pip() << " of " <<c.suit();
}

std::ostream& operator<<(std::ostream& os, deque <card> d)
{
    int i = 12;
    bool first = true;
    while(d[i].suit() == card::spades)
    {
        if(first)
        {
            cout<<(char)6<<": ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
    }
    first = true;
    while(d[i].suit() == card::hearts)
    {
        if(first)
        {
            cout<<endl;
            cout<<(char)3<<": ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
    }

    first = true;
    while(d[i].suit() == card::diamonds)
    {
        if(first)
        {
            cout<<endl;
            cout<<(char)4<<": ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
    }
    first = true;
    while(d[i].suit() == card::clubs)
    {
        if(i == 0)
            break;
        if(first)
        {
            cout<<endl;
            cout<<(char)5<<": ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
    }
    cout<<endl;
    return os;
}
