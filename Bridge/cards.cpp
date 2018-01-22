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
