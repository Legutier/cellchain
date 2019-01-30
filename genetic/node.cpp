#include<iostream>
#include"node.h"


Node::Node(int neostate) {
	state = neostate;
}
int Node::get() {
	return state;
}

void Node::set(int num) {
	state = num;
}
