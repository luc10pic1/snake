#ifndef SNAKE_H
#define SNAKE_H
#include <vector>

struct pos {
    int X;
    int Y;
};

class Snake {
public:
    Snake(){};

    std::vector<pos*> getCorpo() {
        return corpo;
    }

private:
    int lunghezza;
    std::vector<pos*> corpo;
};

#endif //SNAKE_H
