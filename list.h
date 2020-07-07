#ifndef LIST_H
#define LIST_H
#include <QString>
#include <Node.h>

class List
{
private:
    Node* head;
    Node* Find(int fND, int fNDL, int fTF, QString fNSP);
    Node* FindNumDec(Node* node, int fND);
    bool FindNumDrivLic(Node* node, int fNDL);
    bool FindTotalFine(Node* node, int fTF);
    bool FindNSP(Node* node, QString fNSP);

public:
    List();
    QString Adding(int ND, int NDL, int TF, QString NSP_, Node *node);

    Node* tailptr;
};

#endif // LIST_H
