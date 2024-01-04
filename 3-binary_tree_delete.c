#include "binary_trees.h"
/**
 * binary_tree_delete - deletes entire tree
 * @tree: is a pointer to the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* only do stuff if tree is a thing */
	if (tree)
	{
		/* and keep doing it until we burn it all */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
