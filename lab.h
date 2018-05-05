#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <Fl/Fl.H>
#include <Fl/Fl_Double_Window.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Input.H>
#include <Fl/Fl_Secret_Input.H>
#include <Fl/fl_ask.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Text_Buffer.H>
#include <Fl/Fl_Text_Display.H>
#include <FL/fl_message.H>
#include <FL/fl_message.H>
#include "Subscriber.h"
#include "BinaryTree.h"
using namespace std;

const int width = 400;
const int height = 400;

const int maxUsers = 10;\

struct Message{
    string from;
    string subject;
    string msg;
};

/*  Excluding for now because we have a Subscriber header file
 *  But shouldn't we include the messages in the subscriber struct?
 *struct Subscriber{
 *   string name;
 *   list<Message> mailbox;
 *};
 */

extern Fl_Double_Window ew;
void loginCB(Fl_Widget*);
void writeMsgCB(Fl_Widget*);
void CB(Fl_Widget*);
void createCB(Fl_Widget*);
void addSubCB(Fl_Widget*);
void MsgCB(Fl_Widget*);
void cancelCB(Fl_Widget*);
void cancelMsgCB(Fl_Widget*);
void createSub(string name, string password, Subscriber &sub, BinaryTree &tree);
extern Fl_Input* loginInput;
extern Fl_Secret_Input* passInput;
extern Fl_Double_Window* sw;
extern Fl_Double_Window* mailWin;
extern Subscriber users[maxUsers];
extern Fl_Text_Editor* msg;
extern Fl_Text_Buffer* msgBuf;
extern Fl_Double_Window* composeWin;
extern Fl_Double_Window* newUsrWin;
extern Fl_Input* nameIn;
extern Fl_Input* passwordIn;
