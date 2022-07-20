#include "Tetris.h"
#include <time.h>
#include <stdlib.h>

Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{

}

void Tetris::init()
{
    this->delay = 30;

    /* 配置随机种子 */
    srand(time(NULL));
}

void Tetris::play()
{
    this->init();

    int timer = 0;

    while (1) {
        /* 接受用户输入 */
        this->keyEvent();

        timer += this->getDelay();
        if (timer > 30) {
            timer = 0;

            this->drop();

            /* 渲染游戏画面 */
            this->update = true;
        }


        if (this->update) {
            this->update = false;
            /* 更新游戏的画面 */
            this->updateWindow();

            /* 更新游戏数据 */
            this->clearLine();
        }
    }
}

void Tetris::keyEvent()
{

}

void Tetris::updateWindow()
{

}

void Tetris::clearLine()
{

}

int Tetris::getDelay()
{
    return 0;
}

void Tetris::drop()
{

}
