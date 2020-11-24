#include <vector>
class Board {
private:
	vector <vector<char>> set;
	vector <vector<char>> displaySet;
public:
	void display();
	Board();
	friend class difficulty;


};
