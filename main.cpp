//g++ *.cpp -std=c++11 -I ~/fltk-1.3.3 `fltk-config --cxxflags --ldflags --use-cairo` -o main
#include "lab.h"
Fl_Double_Window ew(width,height);
Fl_Double_Window* sw;
Fl_Double_Window* mailWin;
Fl_Button* loginButton;
Fl_Input* loginInput;
Fl_Secret_Input* passInput;
Fl_Text_Editor* msg;
Fl_Text_Buffer* msgBuf;
Subscriber users[maxUsers];
int main(){
    users[0].name="admin";  //Hard coding sysop login for now
    ew.label("eMail");
    
    int x = 5*width/8;
    int y = 1*height/8;
    int w = 1*width/4;
    int h = 1*height/8;
    loginButton = new Fl_Button(x,y,w,h,"Login");
    loginButton->callback(loginCB);
    
    x = 1*width/4;
    h = 1*height/16;
    loginInput = new Fl_Input(x,y,w,h, "Name: ");
    
    y += 30;
    passInput = new Fl_Secret_Input(x,y,w,h, "Password: ");
    
    /*This is the block of code to create a window which can edit text
      Probably will use to create the GUI for writing emails.
    x = 1*width/8;
    y = 3*height/8;
    w = 1*width/2;
    h = 1*height/2;
    msg = new Fl_Text_Editor(x,y,w,h);
    msgBuf = new Fl_Text_Buffer();
    msg->buffer(msgBuf);
    string s = "Hello world";
    msgBuf->text(s.c_str());*/
    
    //This currently is the *very* rudimentary screen for mail display
    mailWin =  new Fl_Double_Window(width, height);
    // Style table
    // Colors currently do not work for w/e reason but it is not important to lab
    Fl_Text_Display::Style_Table_Entry stable[] = {
         // FONT COLOR      FONT FACE   FONT SIZE
         // --------------- ----------- --------------
         {  FL_RED,         FL_COURIER, 18 }, // A - Red
         {  FL_DARK_YELLOW, FL_COURIER, 18 }, // B - Yellow
         {  FL_DARK_GREEN,  FL_COURIER, 18 }, // C - Green
         {  FL_BLUE,        FL_COURIER, 18 }, // D - Blue
    };
    Fl_Text_Display *disp = new Fl_Text_Display(10,20,380,25, "Display");
    Fl_Text_Buffer *txtbuf = new Fl_Text_Buffer();      //text buffer
    Fl_Text_Buffer *stylebuf = new Fl_Text_Buffer();    //style buffer
    disp->buffer(txtbuf);
    txtbuf->text("Lorem ipsum");
    stylebuf->text("DDDDDDDDDDD");
    mailWin->hide();
    
    ew.show();
    Fl::run();
}
