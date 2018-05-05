#include "lab.h"
void loginCB(Fl_Widget*){
    string v = loginInput->value();
    string vp = passInput->value();
    if(v == users[0].name && vp == users[0].password){
        string msg = "Hello ";
        msg += v;
        int choice = fl_choice(msg.c_str(), "Exit", "Go to mail", 0);
        switch(choice){
            case 0: exit(EXIT_SUCCESS);
            case 1: mailWin->show();
                    ew.hide();;
        }
    }
    else{
        fl_message("Sorry, You entered the wrong credentials. Try again.");
    }
}
