#include "list.h"
#include <QString>
#include <QDebug>
//#include <Node.h>


Node *List::Find(int fND, int fNDL, int fTF, QString fNSP)
{
    Node* ptr = new Node();
    ptr = head;
    if (fND!=0) {
        FindNumDec(ptr, fND);
    }
    return  ptr;
}

Node* List::FindNumDec(Node *node, int fND)           // старый аргумент Node* node, int fND
{                                                    // идея заключалась в функции Find, которая запускала бы побочный поисковые функции
    // им передавался бы текущий yказатель и значение для сравнения
    // при совпадении возвращалось бы true, в противоположном случае false

    Node* ptr = head;           //переделать все с for или while
    if (fND!=0) {
        if (fND>tailptr->NumDecree/2) {
            if (ptr->NumDecree==fND) {
                return ptr;
            } else {
                ptr=ptr->backptr;
            }
        } else {
            if (ptr->NumDecree==fND) {
                return ptr;
            } else {
                ptr=ptr->forwardptr;
            }
        }
    }
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
        size++;
        return  "Первый элемент списка добавлен";
    } else {if (node==nullptr) {
            elem->forwardptr=head;
            head->backptr=elem;
            elem->backptr=nullptr;
            head=elem;
            size++;
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
        size++;
        return "Новый элемент списка добавлен";
        } else {
            elem->forwardptr=nullptr;
            elem->backptr=node;
            node->forwardptr=elem;
            tailptr=elem;
            size++;
            return  "Новый конечный элемент добавлен";
            }
        }
    }
}
