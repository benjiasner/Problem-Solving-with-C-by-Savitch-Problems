namespace binarytree{
    class TreeNode{
        public:
            TreeNode();
            TreeNode(int value, TreeNode *left, TreeNode *right);
            ~TreeNode();
            int getData() const;
            TreeNode *getRight() const;
            TreeNode *getLeft() const;
            void setData(int value);
            void setRight(TreeNode *setNode);
            void setLeft(TreeNode *setNode);
        private:
            int data;
            TreeNode *left;
            TreeNode *right;
    };
    typedef TreeNode* NodePtr;
}