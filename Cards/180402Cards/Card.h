#ifndef CARD_H
#define CARD_H
using namespace std;

class Card {
public:
	Card(int face, int suit);
	int getFace() const;
	int getSuit() const;
	string toString();
private:
	int face;
	int suit;
	static const string faceNames[];
	static const string suitNames[];
};

#endif