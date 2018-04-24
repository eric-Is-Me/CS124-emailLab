#include "lab.h"
void loginCB(Fl_Widget*){
    string v = loginInput->value();
    if(v == users[0].name){
        string msg = "Hello ";
        msg += v;
        int choice = fl_choice(msg.c_str(), "Send", "Read", 0);
        switch(choice){
            case 0: cout << "sending..." << endl;
                    break;
            case 1: cout << "reading..." << endl;
        }
    }
    fl_alert(msg->buffer()->text());
    sw->show();
    ew.hide();
}
