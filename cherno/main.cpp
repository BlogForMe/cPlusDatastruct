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

    ~ScopedPtr() {
        delete m_Obj;
    }

//    Entity *getObject() {
//        return m_Obj;
//    }

    Entity*  operator->() {
        return m_Obj;
    }
};


int main() {
//    ScopedPtr entity = new Entity(); // chatgpt也说这个会编译错误
//    entity.getObject()->print();

    ScopedPtr entity = new Entity();
    entity->print();
}



