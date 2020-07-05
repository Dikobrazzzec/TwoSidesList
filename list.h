#ifndef LIST_H
#define LIST_H
#include <QString>
#include <Node.h>

class List
{
private:
    Node* head;
    Node* Find(int ND, int NDL, int TF, QString NSP_);

public:
    List();
    QString Adding(int ND, int NDL, int TF, QString NSP_, Node *node);

    Node* tailptr;
};

#endif // LIST_H
