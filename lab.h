#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <Fl/Fl.H>
#include <Fl/Fl_Double_Window.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Input.H>
#include <Fl/fl_ask.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Text_Buffer.H>
using namespace std;

const int width = 400;
const int height = 400;

struct Message{
    string from;
    string subject;
    string msg;
};

const int maxUsers = 10;

struct Subscriber{
    string name;
    list<Message> mailbox;
};

extern Fl_Double_Window ew;
void loginCB(Fl_Widget*);
extern Fl_Input* loginInput;
extern Fl_Double_Window* sw;
extern Subscriber users[maxUsers];
extern Fl_Text_Editor* msg;
extern Fl_Text_Buffer* msgBuf;
