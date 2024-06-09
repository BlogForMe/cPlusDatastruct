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


extern int s_Variable;


class Printable {
public:
    virtual std::string getClassName() = 0;
};

class Entity : public Printable {
public:
    virtual std::string getName() { return "Entity"; } //virtual

    virtual std::string getClassName() { return "Entity"; }
};


class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string &mName) : m_Name(mName) {}

    std::string getName() override { return m_Name; }

    std::string getClassName() override { return "Player"; }
};

void printName(Entity *entity) {
    std::cout << entity->getName() << std::endl;
}

void print(Printable *obj) {
    std::cout << obj->getClassName() << std::endl;
}

void printString(std::string &string) {
    string += "h";
    std::cout << string << std::endl;
}

int main() {

    const int MAX_AGE = 90;
    const int *a = new int; // 不能修改指针指向内容的值
//    *a = 2;
    std::cout << "a point change before " << a << std::endl;
    a = (int *) &MAX_AGE;
    std::cout << *a << std::endl;
    std::cout << "a point change after  " << a << std::endl;


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



