#include "Tetris.h"
#include <time.h>
#include <stdlib.h>

Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{

}

void Tetris::init()
{
    this->delay = 30;

    /* ����������� */
    srand(time(NULL));
}

void Tetris::play()
{
    this->init();

    int timer = 0;

    while (1) {
        /* �����û����� */
        this->keyEvent();

        timer += this->getDelay();
        if (timer > 30) {
            timer = 0;

            this->drop();

            /* ��Ⱦ��Ϸ���� */
            this->update = true;
        }


        if (this->update) {
            this->update = false;
            /* ������Ϸ�Ļ��� */
            this->updateWindow();

            /* ������Ϸ���� */
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
