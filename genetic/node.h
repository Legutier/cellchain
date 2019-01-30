#ifndef NODE_H
#define NODE_H

class Node
{
	public:
	Node(int neostate);
	int get();
	void set(int num);

	private:
	int state;
};
#endif
