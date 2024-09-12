#include <iostream>

using namespace std;

class Session {};

class SessionFactory{
    public:
        Session Create();
        Session* CreatePtr();
        void Create(Session* &p);
};

Session SessionFactory::Create(){
    Session s;
    return s;
}

Session* SessionFactory::CreatePtr(){
    return(new Session());
}

void SessionFactory::Create(Session* &p){
    p = new Session();
}

static SessionFactory f;

int main(){
    Session* p1;
    Session* p2 = new Session();
    *p2 = f.Create();
    p1 = f.CreatePtr();
    f.Create(p1);
}