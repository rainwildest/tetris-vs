#ifndef BLOCK_H
#define BLOCK_H
#include <graphics.h>

struct Point {
    int row;
    int col;
};

/* ��ʾ���� */
class Block
{
public:
    Block();

    /**
     * @brief ����
     */
    void drop();

    /**
     * @brief �����ƶ�
     * @param offset
     */
    void moveLeftRight(int offset);

    /**
     * @brief ��ת
     */
    void retate();

    /**
     * @brief ������
     * @param leftMargin
     * @param topMargin
     */
    void draw(int leftMargin, int topMargin);

private:
    /**
     * @brief ��������
     */
    int blockType;

    /**
     * @brief ��¼С�����λ��
     */
    Point smallBlocks[4];

    IMAGE *img;

    static IMAGE* imgs[7];
    static int size;
};

#endif // BLOCK_H
