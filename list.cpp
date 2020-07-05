#include "list.h"
#include <QString>
#include <QDebug>
//#include <Node.h>


Node *List::Find(int ND, int NDL, int TF, QString NSP_)
{
    Node* ptr = new Node();

}

List::List()
{
head=nullptr;
tailptr=nullptr;
}

QString List::Adding(int ND, int NDL, int TF, QString NSP_, Node* node)
{
    Node* elem = new Node();
    elem->NumDecree=ND;
    elem->NumDrivLic=NDL;
    elem->TotalFine=TF;
    elem->NSP=NSP_;
    if (head == nullptr) {
        head = elem;
        tailptr=elem;
        elem->forwardptr=nullptr;
        elem->backptr=nullptr;
        return  "Первый элемент списка добавлен";
    } else {if (node==nullptr) {
            elem->forwardptr=head;
            head->backptr=elem;
            elem->backptr=nullptr;
            head=elem;
            return "Новый головной элемент добавлен";
        } else {
        //научить программу отличать конец списка от середины?  tailptr? - realise
        //научить программу действовать при node = nullptr; - realise
        //научить программу добавлять узел в нужное место по номеру вместо tailptr???
        //при каждой версии выполнения алгоритм должно возвращаться свое уведомление QString - realise
        if (node->forwardptr!= nullptr) {
        elem->forwardptr=node->forwardptr;
        elem->backptr=node;
        node->forwardptr->backptr=elem;
        node->forwardptr=elem;
        return "Новый элемент списка добавлен";
        } else {
            elem->forwardptr=nullptr;
            elem->backptr=node;
            node->forwardptr=elem;
            tailptr=elem;
            return  "Новый конечный элемент добавлен";
            }
        }
    }
}
