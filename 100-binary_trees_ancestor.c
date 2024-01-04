#include "binary_trees.h"
/**
 * binary_trees_ancestor- find the lowest common ancestor of 2 nodes
 * @first: one node
 * @second: the other
 *
 * Return: ptr to the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	/* declarations */
	binary_tree_t *one, *two;
	size_t d_one, d_two;

	/* check for nodes */
	if (!first || !second)
		return (NULL);
	/* distanct myself from const */
	one = (binary_tree_t *)first;
	two = (binary_tree_t *)second;
	/* get depth of each node */
	d_one = binary_tree_depth(one);
	d_two = binary_tree_depth(two);
	/* frackin try to get on the same level */
	for (; d_two > d_one; d_two--)
		two = two->parent;
	for (; d_one > d_two; d_two--)
		one = one->parent;
	/* assuming that worked, pull back until we have a match */
	while (one && two)
	{
		if (one == two)
			return (one);
		one = one->parent;
		two = two->parent;
	}
	return (NULL);
}
/**
 * binary_tree_depth - count depth of tree
 * @tree: the tree
 * Return: size_t depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* when to return 0 */
	if (!(tree && tree->parent))
		return (0);
	/* else let's call this one to get depth */
	return (binary_tree_depth(tree->parent) + 1);
}
