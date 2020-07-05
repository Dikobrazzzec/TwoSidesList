#ifndef NODE_H
#define NODE_H
#include<QString>

class Node {
    int NumDecree, NumDrivLic,TotalFine;
    QString NSP;
    Node* forwardptr;
    Node* backptr;

    friend class List;
};

#endif // NODE_H
