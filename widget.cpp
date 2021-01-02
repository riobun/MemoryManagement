#include "widget.h"
#include "ui_widget.h"
#include<QString>
#include<QStringList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //重置窗口大小
    resize(1000,800);

    //设置窗口标题
    setWindowTitle("MemeoryManagement");

    //初始化
    Initblock();


    ///////////////////首次适应算法部分/////////////////////////////

    //设置行列数
    ui->first_table->setColumnCount(4);
    ui->first_table->setRowCount(8);
    //设置表头
    QStringList headList;
    headList <<"ID" << "Start Address"<<"Size"<<"Status";
    for(int i=0;i<4;i++){
        ui->first_table->setHorizontalHeaderLabels(headList);
    }


    //申请内存按钮的连接
    //作业1申请内存的按钮如下，其他按钮相似
    connect(ui->btn10,&QPushButton::clicked,[=](){

        //内存分配
        if (First_fit(1, 130) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });

    //作业2-6的申请内存的按钮
    connect(ui->btn20,&QPushButton::clicked,[=](){

        if (First_fit(2, 60) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }


    });
    connect(ui->btn30,&QPushButton::clicked,[=](){

        if (First_fit(3, 100) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");

        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }

    });
    connect(ui->btn40,&QPushButton::clicked,[=](){

        if (First_fit(4, 200) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");

        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }

    });
    connect(ui->btn50,&QPushButton::clicked,[=](){

        if (First_fit(5, 140) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");

        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }

    });
    connect(ui->btn60,&QPushButton::clicked,[=](){

        if (First_fit(6, 150) == OK) ui->first_label->setText("alloc success");
                else ui->first_label->setText("alloc failed");

        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }

    });

    //释放内存的按钮的连接
    //作业1释放内存的按钮如下，其他按钮相似
    connect(ui->btn11,&QPushButton::clicked,[=](){


        if (First_recycle(1) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    //作业2-6释放内存的按钮，类作业1
    connect(ui->btn21,&QPushButton::clicked,[=](){


        if (First_recycle(2) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn31,&QPushButton::clicked,[=](){


        if (First_recycle(3) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn41,&QPushButton::clicked,[=](){


        if (First_recycle(4) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn51,&QPushButton::clicked,[=](){


        if (First_recycle(5) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn61,&QPushButton::clicked,[=](){


        if (First_recycle(6) == OK) ui->first_label->setText("free success");
                else ui->first_label->setText("free failed");
        ui->first_table->clearContents();
        DulNode *p1 = block_first->next;
        for(int j=0;j<first_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->first_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->first_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->first_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->first_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->first_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );

    ///////////////////////最佳适应算法部分/////////////////////////////

    //设置行列数
    ui->best_table->setColumnCount(4);
    ui->best_table->setRowCount(8);
    //设置表头
    for(int i=0;i<4;i++){
        ui->best_table->setHorizontalHeaderLabels(headList);
    }

    //申请内存按钮的连接
    //作业1申请内存的按钮如下，其他按钮相似
    connect(ui->btn_10,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(1, 130) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });
    //作业2-6申请内存的按钮，类作业1
    connect(ui->btn_20,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(2, 60) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });
    connect(ui->btn_30,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(3, 100) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });
    connect(ui->btn_40,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(4, 200) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });
    connect(ui->btn_50,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(5, 140) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });
    connect(ui->btn_60,&QPushButton::clicked,[=](){

        //内存分配
        if (Best_fit(6, 150) == OK) ui->best_label->setText("alloc success");
                else ui->best_label->setText("alloc failed");

        //显示内存分配情况
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    });

    //释放内存的按钮的连接
    //作业1释放内存的按钮如下，其他按钮相似
    connect(ui->btn_11,&QPushButton::clicked,[=](){


        if (Best_recycle(1) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    //作业2-6释放内存的按钮，类作业1
    connect(ui->btn_21,&QPushButton::clicked,[=](){


        if (Best_recycle(2) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn_31,&QPushButton::clicked,[=](){


        if (Best_recycle(3) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn_41,&QPushButton::clicked,[=](){


        if (Best_recycle(4) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn_51,&QPushButton::clicked,[=](){


        if (Best_recycle(5) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
    connect(ui->btn_61,&QPushButton::clicked,[=](){


        if (Best_recycle(6) == OK) ui->best_label->setText("free success");
                else ui->best_label->setText("free failed");
        ui->best_table->clearContents();
        DulNode *p1 = block_first2->next;
        for(int j=0;j<best_num;j++)
            {

                if (p1->data.ID == Free)
                    ui->best_table->setItem(j,0,new QTableWidgetItem("FREE"));
                else
                    ui->best_table->setItem(j,0,new QTableWidgetItem(QString::number(p1->data.ID)));

                ui->best_table->setItem(j,1,new QTableWidgetItem(QString::number(p1->data.address)));
                ui->best_table->setItem(j,2,new QTableWidgetItem(QString::number(p1->data.size)));

                if (p1->data.status == Free)
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Free"));
                else
                    ui->best_table->setItem(j,3,new QTableWidgetItem("Busy"));

                p1 = p1->next;
            }
    } );
}

Widget::~Widget()
{
    delete ui;
}

Status Widget::Initblock()
{
    //首次适应算法部分
    block_first = new DulNode;
    block_last = new DulNode;
    block_first->prior = nullptr;
    block_first->next = block_last;
    block_first->data.status = -1;
    block_last->prior = block_first;
    block_last->next = nullptr;
    block_last->data.ID = 0;
    block_last->data.address = 0;
    block_last->data.size = MAX_length;
    block_last->data.status = Free;

    //最佳适应算法部分
    block_first2 = new DulNode;
    block_last2 = new DulNode;
    block_first2->prior = nullptr;
    block_first2->next = block_last2;
    block_first2->data.status = -1;
    block_last2->prior = block_first2;
    block_last2->next = nullptr;
    block_last2->data.ID = 0;
    block_last2->data.address = 0;
    block_last2->data.size = MAX_length;
    block_last2->data.status = Free;
    return 0;
}

Status Widget::First_fit(int ID, int size)
{
    //确保内存中不会同时有多个同一个作业
    DulNode *t = block_first->next;
    while(t){
       if(t->data.ID==ID) return ERROR;

       t=t->next;
    }

    DulNode *p = block_first->next;
    DulNode *temp = nullptr;
    temp = new DulNode;
    temp->data.ID = ID;
    temp->data.size = size;
    temp->data.status = Busy;

    while (p)
    {
        if (p->data.status == Free && p->data.size >= size)
        {
            temp->prior = p->prior;
            temp->next = p;
            temp->data.address = p->data.address;
            p->prior->next = temp;
            p->prior = temp;
            p->data.address = temp->data.address + temp->data.size;
            p->data.size -= size;
            first_num+=1;
            return OK;
        }
        p = p->next;
    }
    return ERROR;
}

Status Widget::Best_fit(int ID, int size)
{
    //确保内存中不会同时有多个同一个作业
    DulNode *t = block_first2->next;
    while(t){
       if(t->data.ID==ID) return ERROR;

       t=t->next;
    }

    int ch = 0;
    DulNode *temp = nullptr;
    temp = new DulNode;
    temp->data.ID = ID;
    temp->data.size = size;
    temp->data.status = Busy;
    DulNode *p = block_first2->next;
    DulNode *q = nullptr;
    while (p)
    {
        if (p->data.status == Free && p->data.size >= size)
        {
            q = p;
            ch = p->data.size - size;
            break;
        }
        p = p->next;
    }
    while (p)
    {
        if ((p->data.status == Free) && (p->data.size >= size))
        {
            if (p->data.size - size < ch)
            {
                ch = p->data.size - size;
                q = p;
                break;
            }
        }
        p = p->next;
    }
    if (q == nullptr) return ERROR;
    else
    {
        temp->prior = q->prior;
        temp->next = q;
        temp->data.address = q->data.address;
        q->prior->next = temp;
        q->prior = temp;
        q->data.address += size;
        q->data.size = ch;
        best_num+=1;
        return OK;
    }
}

Status Widget::First_recycle(int ID)
{
    DulNode *p = block_first->next;
    DulNode *q = nullptr;

    while(p)
    {
        if (p->data.ID == ID)
        {
            q = p;
            p->data.status = Free;
            p->data.ID = Free;
            if ((p->prior->data.status == Free) && (p->next->data.status == Free))
            {

                p->prior->data.size += (p->data.size + p->next->data.size);
                if(p->next->next!=nullptr)
                {
                    p->next->next->prior = p->prior;
                    p->prior->next = p->next->next;
                }
                else
                    p->prior->next=nullptr;

                delete p->next;
                delete p;
                first_num = first_num-2;

            }
            else
            {
                if (p->prior->data.status == Free)
                {
                    p->prior->data.size += p->data.size;
                    p->prior->next = p->next;
                    p->next->prior = p->prior;
                    delete p;
                    first_num-=1;
                }

                else if (p->next->data.status == Free)
                {
                    q = p->next;
                    p->data.size += p->next->data.size;

                    if(p->next->next==nullptr)
                        p->next=nullptr;
                    else
                    {
                        p->next->next->prior = p;
                        p->next = p->next->next;
                    }

                    delete q;
                    first_num-=1;
                }
            }
            break;
        }
        p = p->next;
    }
    return OK;
}

Status Widget::Best_recycle(int ID)
{
    DulNode *p = block_first2->next;
    DulNode *q = nullptr;

    while(p)
    {
        if (p->data.ID == ID)
        {
            q = p;
            p->data.status = Free;
            p->data.ID = Free;
            if ((p->prior->data.status == Free) && (p->next->data.status == Free))
            {

                p->prior->data.size += (p->data.size + p->next->data.size);
                if(p->next->next!=nullptr)
                {
                    p->next->next->prior = p->prior;
                    p->prior->next = p->next->next;
                }
                else
                    p->prior->next=nullptr;


                delete p->next;
                delete p;
                best_num = best_num-2;

            }
            else
            {
                if (p->prior->data.status == Free)
                {
                    p->prior->data.size += p->data.size;
                    p->prior->next = p->next;
                    p->next->prior = p->prior;
                    delete p;
                    best_num-=1;

                }

                else if (p->next->data.status == Free)
                {

                    q = p->next;
                    p->data.size += p->next->data.size;

                    if(p->next->next==nullptr)
                        p->next=nullptr;
                    else
                    {

                        p->next->next->prior = p;
                        p->next = p->next->next;
                    }

                    delete q;
                    best_num-=1;

                }
            }

            break;
        }
        p = p->next;

    }

    return OK;
}
