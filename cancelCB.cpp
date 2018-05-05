#include "lab.h"

void cancelCB(Fl_Widget*){
    string warning = "Do you want to cancel the creation of this new subscriber?";
    int choice = fl_choice(warning.c_str(), "No", "Yes", 0);
    switch(choice){
        case 0: break;
        case 1: newUsrWin->hide();
    }
}
