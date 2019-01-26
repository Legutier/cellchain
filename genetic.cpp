#include<iostream>

using namespace std;
/*	Clase nodo, representa los estados
*/
class Node
{
	public:
	Node(int neostate);
	int get();
	void set(int num);

	private:
	int state;
};

Node::Node(int neostate) {
	state = neostate;
}
int Node::get() {
	return state;
}


void Node::set(int num) {
	state = num;
}
/* cuadricula de estados */
class Grid
{
	public:
	Grid(int x,int y);
	void show();
	void setSeed(int xS, int yS);

	private:
	int x;
	int y;
	Node*** GridArr;
};

Grid::Grid(int a, int b) {
	x = a;
	y = b;
	GridArr = new Node**[x];
	for (int i = 0; i < x; i++) {
		GridArr[i] = new Node*[y];
		for(int j = 0; j < y; j++) {
			GridArr[i][j] = new Node(0);
		}
	}
}

void Grid::show() {
	for (int i = 0; i < x; i++){
		for(int j = 0; j < y; j++) {
			cout << "[" << GridArr[i][j]->get() << "]";
			if(j+1 == y) cout << "\n";
		}
	}
}

void Grid::setSeed(int xS, int yS) {
	GridArr[xS][yS]->set(1);
}

int main() {
	int x, y, a, b = 0;
	bool act = true;
	char c;
	cout << "please give x and y\n";
	cin >> x
	    >> y;
	Grid grid = Grid(x,y);
	grid.show();
	while(act == true) {
		cout << "Press F to get next state, N to generate seed, C to exit:\n";
		cin >> c;
		switch(c) {
			case 'n' :
			case 'N' :
				cout << "Choose where to seed\n";
				cin >> a
				    >> b;
				grid.setSeed(a,b);
			case 'f' :
			case 'F' :
				grid.show();
				break;
			case 'c' :
			case 'C' :
				act = false;
				break;
		}
	}
	return 0;
}
