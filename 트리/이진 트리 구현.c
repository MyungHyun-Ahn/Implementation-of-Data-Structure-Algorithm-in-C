// 이진 트리 구현
#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int data;
	struct Node *leftChild;
	struct Node *rightChild;
} Node;

// 특정한 노드를 초기화하는 함수
Node* initNode(int data, Node *leftChild, Node *rightChild) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->leftChild = leftChild;
	node->rightChild = rightChild;
	return node;
}

// 이진 트리의 전위 순회
void preorder(Node* root) {
	if (root) {
		printf("%d ", root->data);          // 자기 자신 출력 후
		preorder(root->leftChild);          // 왼쪽 자식 출력 후
		preorder(root->rightChild);         // 오른쪽 자식 출력
	}
}

// 이진 트리의 중위 순회
void inorder(Node *root) {
	if (root) {
		inorder(root->leftChild);
		printf("%d ", root->data);
		inorder(root->rightChild);
	}
}

// 이진 트리의 후위 순회
void postorder(Node *root) {
	if (root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		printf("%d ", root->data);
	}
}

// 이진 트리 사용
int main(void) {
	Node* n7 = initNode(50, NULL, NULL);
	Node* n6 = initNode(37, NULL, NULL);
	Node* n5 = initNode(23, NULL, NULL);
	Node* n4 = initNode(5, NULL, NULL);
	Node* n3 = initNode(48, n6, n7);
	Node* n2 = initNode(17, n4, n5);
	Node* n1 = initNode(30, n2, n3);
	preorder(n1);
	printf("\n");
	inorder(n1);
	printf("\n");
	postorder(n1);
	return 0;
}