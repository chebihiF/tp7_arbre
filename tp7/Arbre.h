#include <stdio.h>
#include <stdlib.h>

typedef struct sheet
{
	int value;
	struct sheet* left;
	struct sheet* right;
} Sheet;

typedef Sheet* Tree;

Sheet* createSheet(int);
Tree createTree(int, Sheet*, Sheet*);
void addValue(int, Tree*);


void addValue(int value, Tree* arbre) {
	if (arbre == NULL)
		*arbre = (Tree) malloc(sizeof(Sheet));
	else {
		Tree p = *arbre;
		while (p!=NULL)
		{
			if (value > p->value)
				p = p->right;
			else
				p = p->left;
		}
		p = (Tree)malloc(sizeof(Sheet));
		p->value = value;
		p->left = NULL;
		p->right = NULL;
	}
}


Sheet* createSheet(int value) {
	Sheet* s1 = (Sheet*) malloc(sizeof(Sheet));
	s1->value = value;
	s1->left = NULL;
	s1->right = NULL;
	return s1;
}

Tree createTree(int value, Sheet* left, Sheet* right) {
	Tree s1 = (Sheet*)malloc(sizeof(Sheet));
	s1->value = value;
	s1->left = left;
	s1->right = right;
	return s1;
}

