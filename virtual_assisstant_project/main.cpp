#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>
#include<ctime>
using namespace std;
void wishme()
{
    time_t now=time(0);
    tm *time=localtime(&now);
    if(time->tm_hour<12){
        cout<<"good morning babygirl"<<endl;
    }
    else if(time->tm_hour>=12&& time->tm_hour<=16){
        cout<<"good afternoon babygirl"<<endl;
    }
    else if(time->tm_hour>14&&time->tm_hour<24){
        cout<<"good evening babygirl"<<endl;
    }
}
void datetime(){
    time_t now =time(0);
    char *dt=ctime(&now);
    cout<<"the date and time is"<<endl<<dt<<endl;
}
int main()
{
    char ch[100];
    cout<<"----------------------------------------------welcome to A.I.--------------------------------------------";
    cout<<"\n\n";
    char password[20];
    do{
        cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Enter your password"<<endl;
        cout<<"-------------------"<<endl;
        string phrase="enter your password";
        string command="espeak\""+phrase+"\"";
        const char *charCommand=command.c_str();
        system(charCommand);
        gets(password);
        STARTUPINFO startInfo={0};
        PROCESS_INFORMATION processInfo={0};
        if(strcmp(password,"aditi")==0){
            cout<<"correct password"<<endl;
            wishme();
            do{
               cout<<"---------------------------------------------------------------------------------------------"<<endl;
               cout<<"how can I help you my love"<<endl;
               gets(ch);
               cout<<"here is the result for your queries"<<endl;
               if(strcmp(ch,"hi")==0||strcmp(ch,"hey")==0||strcmp(ch,"hello")==0) {
                cout<<"hello honey"<<endl;
               }
               else if(strcmp(ch,"bye")==0||strcmp(ch,"stop")==0||strcmp(ch,"exit")==0) {
                cout<<"good bye, have a nice day!!!!"<<endl;
                exit(0);
               }
                else if(strcmp(ch,"who are you")==0||strcmp(ch,"tell me about yoourself")==0||strcmp(ch,"about")==0) {
                cout<<"I'm a virtual assisstant created by my master Aditi Sharma"<<endl;

               }
                else if(strcmp(ch,"how are you")==0||strcmp(ch,"whatsup")==0||strcmp(ch,"how is your day")==0) {
                cout<<"I'm a virtual assisstant created by my master Aditi Sharma"<<endl;

               }
                else if(strcmp(ch,"time")==0||strcmp(ch,"date")==0) {
                datetime();

               }
               else if(strcmp(ch,"open notepad")==0) {
                cout<<"opening notepad........"<<endl;
                CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);

               }
                else if(strcmp(ch,"open google")==0) {
                cout<<"opening google........"<<endl;
                system("start https://www.google.com");
               }
               else if(strcmp(ch,"open youtube")==0) {
                cout<<"opening youtube........"<<endl;
                system("start https://www.youtube.com");
               }
               else if(strcmp(ch,"open instagram")==0) {
                cout<<"opening google........"<<endl;
                system("start https://www.instagram.com");
               }
               else{
                cout<<"sorry could not understand your queries"<<endl;
               }
            }while(1);
        }
        else{
            cout<<"incorrect password"<<endl;
        }
    }while(1);
    gets(ch);


}
