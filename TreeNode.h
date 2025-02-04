// template <typename T> class TreeNode{
//     public:
//     unsigned int level;
//     T value;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode *parent;
//     TreeNode(T value, TreeNode *parent);
//     ~TreeNode();
// };

// template <typename T> TreeNode<T>::TreeNode(T value, TreeNode *parent){
//     this->value=value;
//     this->left = nullptr;
//     this->right = nullptr;
//     this->parent = parent;
// }

// template <typename T> TreeNode<T>::~TreeNode(){

// }

class TreeNode{
    public:
    unsigned int level;
    double value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(double value);
    ~TreeNode();
};

TreeNode::TreeNode(double value){
    this->value = value;
    this->level = 0;
}

TreeNode::~TreeNode(){}

