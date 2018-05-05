#include "lab.h"
Fl_Double_Window* composeWin;
Fl_Input* to;
Fl_Input* subject;
Fl_Text_Editor* message;
Fl_Text_Buffer* textbuf;
Fl_Button* send;
Fl_Button* cancelMsg;

void writeMsgCB(Fl_Widget*){
    int msgX = width * 0.2;
    int msgY = height * 0.05;
    int msgW = width * 0.77;
    
    composeWin = new Fl_Double_Window(width, height);

    to = new Fl_Input(msgX, msgY, msgW, 30, "To: ");
    subject = new Fl_Input(msgX, msgY + 40, msgW, 30, "Subject: ");
    
    message = new Fl_Text_Editor(width * 0.03, msgY + 90, width * .94, 235, "");
    textbuf = new Fl_Text_Buffer();
    message->wrap_mode(1,35);
    message->buffer(textbuf);
    //USE char* text() to output our text to a string.
    //message->align(ALIGN_TOP);        We might need fltk 2.0 for this
    
    cancelMsg = new Fl_Button(width * 0.79, height * 0.9, 70, 30, "Cancel");
    cancelMsg->callback(cancelMsgCB);
    
    send = new Fl_Button(width * 0.64, height * 0.9, 50, 30, "Send");
    
    //TODO: Make callbacks for the send and cancel buttons with the 
    //      binary search tree code.
    
    
    composeWin->show();
}
