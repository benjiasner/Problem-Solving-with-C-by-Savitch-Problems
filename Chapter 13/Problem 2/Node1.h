namespace linkedlistofclasses{
    class Node1{
        public:
            Node1();
            Node1(int value, Node1 *next);
            int getData() const;
            Node1 *getLink() const;
            void setData(int value);
            void setLink(Node1 *next);
        private:
            int data;
            Node1 *link;
    };
    typedef Node1* NodePtr;
}