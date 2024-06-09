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


struct Entity {
    static int x, y; // public
};

static void print(Entity e) {
    std::cout << e.x << " , " << e.y << std::endl;
}

int Entity::x;
int Entity::y;

int main() {
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//    print(e);

    Log log;

//    log.setLevel(log.LogLevelWarning);
//    log.warn("Hello!");
//    log.error("Hello!");
//    log.info("Hello!");
    std::cout << log.INFO << std::endl;
}




