#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Feed;

class News
{
    friend class Feed;
    protected:
    string T;
    string message;
    bool read;
    public:
    News(){
        this->T = "EMPTY";
        this->message = "EMPTY";
        read = false;
    };
    News(string T, string message){
        this->T = T;
        this->message = message;
        read = false;
    }
    void isRead(){
        read = true;
    }
    void Read(){
        cout << message<< endl;
        read = true;
    }
    void print(){
        cout << "Theme is " << T << endl;
        cout << "Message is:\n" << message << endl;
        if (read) cout << "This news has already read";
        else cout << "This news has not read yet";
    }
    bool getRead(){
        return read;
    }
    void get(){
        cout << "Which param you wanna get?\nTheme - 1\nMessage - 2\nread - 3\n";
        int p;
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "Theme is " << T << endl;
            break;
        case 2:
            cout << "Message is:\n" << message << endl;
            break;
        case 3:
            if (read) cout << "This news has already read" << endl;
            else cout << "This news has not read yet" << endl;
            break;
        
        default:
        cout << "No such parametre"  << endl;        
            break;
        }
    }
};
class Feed : public News
{
    vector<News> v;
    int size;
    public:
    Feed(){v = {}; size = 0;}
    void isRead(int n){
        if (n < v.size()){
            v[n].read = true;
        }
    }
    void All(){
        for(int i = 0; i < size; i++){
            v[i].Read();
            isRead(i);
        }
    }
    void add(News n){
        v.push_back(n);
        size++;
    }
    void printUnread(){
        bool f = true;
        for(int i = 0; i < size;i++){
            if(v[i].read == false){
                v[i].Read();
                isRead(i);
                f = false;
            }
        }
        if (f) cout << "No unread news" << endl;
    }
    void getSize(){
        cout << "Size is " << size << endl;
    }
};


int count(vector<News>* v){
    int c = 0;
    for(News i : *v){
        if (i.getRead() == false) c++;
    }
    return c;
}