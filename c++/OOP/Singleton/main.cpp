 #include <iostream>

 using namespace std;

class Singleton{
private:
    static Singleton* _instance;
    Singleton();
public:
    static Singleton* getInstance();
};

Singleton* Singleton::_instance = NULL;

Singleton::Singleton(){}

Singleton* Singleton::getInstance(){
    if(_instance == NULL){
        _instance = new Singleton();
    }
    return _instance;
}

 int main(){
    Singleton* object = Singleton::getInstance();
    //Singleton* d = new Singleton();
    return 0;
 }