#include "Arbre.h";

void main() {

	Tree t = NULL;

	addValueR(8, &t);
	addValueR(5, &t);
	addValueR(16, &t);
	addValueR(2, &t);
	addValueR(12, &t);
	addValueR(3, &t);
	addValueR(18, &t);

	recherch(4,t);

	/*
	Tree arbre = createTree(
		0
		, createTree(3, createSheet(6), createSheet(5))
		, createTree(1, createSheet(4), createSheet(8))
	);*/

	/*Sheet* f1 = createSheet(6);
	Sheet* f2 = createSheet(5);
	Tree r1 = createTree(3, f1, f2);

	Sheet* f3 = createSheet(4);
	Sheet* f4 = createSheet(8);
	Tree r2 = createTree(1, f3, f4);

	Tree arbre = createTree(0, r1, r2);*/




}
