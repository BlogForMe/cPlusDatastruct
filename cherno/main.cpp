//
// Created by m on 6/9/24.
//

#include <iostream>

class Log {
public:
    enum Level {
        ERROR = 0, WARNING, INFO
    };

    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;
public:
    Log() = delete;

    void setLevel(int level) {
        m_LogLevel = level;
    }

    void error(const char *message) {
        if (m_LogLevel >= LogLevelError) {
            std::cout << "[error]:" << message << std::endl;
        }
    }

    void warn(const char *message) {
        if (m_LogLevel >= LogLevelWarning) {
            std::cout << "[WARNING]:" << message << std::endl;
        }
    }

    void info(const char *message) {
        if (m_LogLevel >= LogLevelInfo) {
            std::cout << "[info]:" << message << std::endl;
        }
    }
};


class Entity {
public:
    void print() const {
        std::cout << "hello" << std::endl;
    }
};

class ScopedPtr {
private:
    Entity *m_Obj;
public:
    ScopedPtr(Entity *entity) : m_Obj(entity) {

    }

    ~ScopedPtr(){
        delete m_Obj;
    }
};

class Example {
public:
    Example() {
        std::cout << "Created Example Entity!" << std::endl;
    }

    Example(int x) {
        std::cout << "Created Example Entity!" << x << "!" << std::endl;
    }
};


class Entity {
private:
    std::string m_Name;
public:
    Entity() : m_Name("UnKnown") {}

    Entity(const std::string &name) : m_Name(name) {}

    const std::string &getName() const {
        return m_Name;
    };
};

int main() {
    Entity *e;
    {
        Entity *entity = new Entity("john");
        e = entity;
        std::cout << (*e).getName() << std::endl;
    }




//
//    Entity e1("john");
//    std::cout << e1.getName() << std::endl;

//    ScopedPtr entity = new Entity();

//    Entity e;
//    e.print();
//
//    Entity *ptr = &e;
//    (*ptr).print();
//
//    Entity &entity = *ptr;
//    entity.print();


//    const int MAX_AGE = 90;
////    int const* a = new int;
//    int *const a = new int;
//    *a = 2;
//    std::cout << "a point change before " << a << std::endl;
////    a = (int *) &MAX_AGE;
//    std::cout << *a << std::endl;
//    std::cout << "a point change after  " << a << std::endl;


//    std::string name = std::string("john") + " hello";
//    printString(name);
//    std::cout << name << std::endl;

//    Entity *e = new Entity();
//    Player *p = new Player("john");
//    print(e);
//    print(p);
//
//    int example[5];
//    int *ptr = example;
//    for (int i = 0; i < 5; ++i) {
//        example[i] = 2;
//    }
//
//    example[2] = 5;
//    *(ptr + 2) = 6;
//
//    int *another = new int[5];
//    for (int i = 0; i < 5; ++i) {
//        another[i] = 2;
//    }

//    const char *name = "Cherno";
//    name[2] = 'a';



//    bool contains = name.find("no") != std::string::npos;
//    std::cout << name << std::endl;

}



