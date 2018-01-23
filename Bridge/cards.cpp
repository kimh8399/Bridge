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
    while(d[i].suit() == card::spades && i >= 0)
    {
        if(first)
        {
            cout<<(char)6<<"S: ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
        if(i < 0)
            break;
    }
    first = true;
    while(d[i].suit() == card::hearts && i >= 0)
    {
        if(first)
        {
            cout<<endl;
            cout<<(char)3<<"H: ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
        if(i < 0)
            break;
    }

    first = true;
    while(d[i].suit() == card::diamonds && i >= 0)
    {
        if(first)
        {
            cout<<endl;
            cout<<(char)4<<"D: ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
        if(i < 0)
            break;
    }
    first = true;
    while(d[i].suit() == card::clubs && i >= 0)
    {
        if(first)
        {
            cout<<endl;
            cout<<(char)5<<"C: ";
            first = false;
        }
        cout<<d[i].pip()<<" ";
        i--;
        if(i < 0)
            break;
    }
    cout<<endl;
    return os;
}
