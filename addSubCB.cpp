#include "lab.h"
Fl_Double_Window* newUsrWin;
Fl_Input* nameIn;
Fl_Input* passwordIn;
Fl_Button* create;
Fl_Button* cancel;

void addSubCB(Fl_Widget*){
    int inputWidth = width * 0.7;
    int inputX = width * 0.25;
    
    newUsrWin = new Fl_Double_Window(width, height/3);
    
    nameIn = new Fl_Input(inputX, height * 0.05, inputWidth, 30, "Name: ");
    passwordIn = new Fl_Input(inputX, height * 0.05 + 40, inputWidth, 30, "Password: ");
    
    create = new Fl_Button(width * 0.58, height/4, 70, 30, "Create");
    create->callback(createCB);
    cancel = new Fl_Button(width * 0.78, height/4, 70, 30, "Cancel");
    cancel->callback(cancelCB);
    
    newUsrWin->show();
}
