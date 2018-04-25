#include "lab.h"
void loginCB(Fl_Widget*){
    string v = loginInput->value();
    if(v == users[0].name){
        string msg = "Hello ";
        msg += v;
        int choice = fl_choice(msg.c_str(), "Exit", "Go to mail", 0);
        switch(choice){
            case 0: exit(EXIT_SUCCESS);
            case 1: break;
        }
    }
    //fl_alert(msg->buffer()->text());
    mailWin->show();
    ew.hide();
}
