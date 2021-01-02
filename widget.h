#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#define Free 0
#define Busy 1
#define OK 1
#define ERROR 0
#define MAX_length 640

typedef int Status;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    struct ElemType
    {
        int ID = -1;
        int size = -1;
        int address = -1;
        int status = -1;

    };

    typedef struct DulNode
    {
        ElemType data;
        struct DulNode *prior;
        struct DulNode *next;

    }*DuLinkList;

    //首次适应算法的头指针尾指针
    DuLinkList block_first =nullptr;
    DuLinkList block_last =nullptr;
    //最佳适应算法的头指针尾指针
    DuLinkList block_first2 =nullptr;
    DuLinkList block_last2 =nullptr;

    //回收内存函数
    Status First_recycle(int);
    Status Best_recycle(int);
    //分配内存函数
    Status First_fit(int, int);
    Status Best_fit(int, int);
    //初始化
    Status Initblock();

    //内存分区的数目
    int best_num = 1;
    int first_num = 1;

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
