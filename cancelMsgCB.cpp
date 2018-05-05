#include "lab.h"

void cancelMsgCB(Fl_Widget*){
    string warning = "Are you sure you want to cancel your message?";
    int choice = fl_choice(warning.c_str(), "No", "Yes", 0);
    switch(choice){
        case 0: break;
        case 1: composeWin->hide();
    }
}
