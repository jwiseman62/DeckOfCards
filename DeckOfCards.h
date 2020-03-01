//
//  DeckOfCards.h
//  cpp_class_cards
//
//  Created by Jeff Wiseman on 4/4/19.
//  Copyright © 2019 Jeff Wiseman. All rights reserved.
//

//#ifndef DeckOfCards_h
//#define DeckOfCards_h
//
//
//#endif /* DeckOfCards_h */

#include<array>
#include<string>

//using namespace std;

//card structure definition
struct Card {
    std::string face;
    std::string suit;
};

//DeckOfCards class definition
class DeckOfCards {
public:
    static const int numberOfCards{52};
    static const int faces{13};
    static const int suits{4};
    
    DeckOfCards();      //constructor initializes deck
    void shuffle();     //shuffles cards in deck
    void deal() const;  //deals cards in deck
    
private:
    std::array<Card, numberOfCards> deck; //represents deck of cards
    
};

