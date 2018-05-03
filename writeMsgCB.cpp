#include "lab.h"
Fl_Double_Window* composeWin;
Fl_Input* to;
Fl_Input* subject;
Fl_Input* message;
Fl_Button* send;
Fl_Button* cancel;

void writeMsgCB(Fl_Widget*){
    int msgX = width * 0.2;
    int msgY = height * 0.05;
    int msgW = width * 0.77;
    
    composeWin = new Fl_Double_Window(width, height);
    
    to = new Fl_Input(msgX, msgY, msgW, 30, "To: ");
    subject = new Fl_Input(msgX, msgY + 40, msgW, 30, "Subject: ");
    message = new Fl_Input(width * 0.03, msgY + 90, width * .94, 235, "");
    //message->align(ALIGN_TOP);        We might need fltk 2.0 for this
    cancel = new Fl_Button(width * 0.79, height * 0.9, 70, 30, "Cancel");
    send = new Fl_Button(width * 0.64, height * 0.9, 50, 30, "Send");
    
    //TODO: Make callbacks for the send and cancel buttons with the 
    //      binary search tree code.
    
    
    composeWin->show();
}
