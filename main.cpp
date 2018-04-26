//g++ *.cpp -std=c++11 -I ~/fltk-1.3.3 `fltk-config --cxxflags --ldflags --use-cairo` -o main
#include "lab.h"
Fl_Double_Window ew(width,height);
Fl_Double_Window* sw;
Fl_Button* loginButton;
Fl_Input* loginInput;
Fl_Text_Editor* msg;
Fl_Text_Buffer* msgBuf;
Subscriber users[maxUsers];
int main(){
    users[0].name="lmao";
    ew.label("eMail");
    
    int x = 5*width/8;
    int y = 1*height/8;
    int w = 1*width/4;
    int h = 1*height/8;
    loginButton = new Fl_Button(x,y,w,h,"wooooo");
    loginButton->callback(loginCB);
    x = 1*width/4;
    h = 1*height/16;
    loginInput = new Fl_Input(x,y,w,h, "Name: ");
    x = 1*width/8;
    y = 3*height/8;
    w = 1*width/2;
    h = 1*height/2;
    msg = new Fl_Text_Editor(x,y,w,h);
    msgBuf = new Fl_Text_Buffer();
    msg->buffer(msgBuf);
    string s = "Hello world";
    msgBuf->text(s.c_str());
    sw =  new Fl_Double_Window(width/2, height/2);
    sw->hide();
    
    ew.show();
    Fl::run();
}
