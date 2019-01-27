#include<iostream>
#include<node.hpp>


Node::Node(int neostate) {
	state = neostate;
}
int Node::get() {
	return state;
}

void Node::set(int num) {
	state = num;
}
