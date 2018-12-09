#include <iostream>

using namespace std;

template<typename T>
class TreeNode
{
public:
	T value;
	TreeNode<T>* pRight = nullptr;
	TreeNode<T>* pLeft = nullptr;
};

template<typename T>
class BinaryTree
{
private:
	void chopTree(TreeNode<T>* CurrentNode);
};

template<typename T>
void BinaryTree<T>::chopTree(TreeNode<T>* CurrentNode)
{
	if (CurrentNode == nullptr) return; // terminitation criteria
	chopTree(CurrentNode->pLeft);
	chopTree(CurrentNode->pRight);
	delete CurrentNode;
}


int main(void)
{

	return 0;
}