#ifndef BLOCK_H
#define BLOCK_H
#include <graphics.h>

struct Point {
    int row;
    int col;
};

/* 表示方块 */
class Block
{
public:
    Block();

    /**
     * @brief 下落
     */
    void drop();

    /**
     * @brief 左右移动
     * @param offset
     */
    void moveLeftRight(int offset);

    /**
     * @brief 旋转
     */
    void retate();

    /**
     * @brief 画方块
     * @param leftMargin
     * @param topMargin
     */
    void draw(int leftMargin, int topMargin);

private:
    /**
     * @brief 方块类型
     */
    int blockType;

    /**
     * @brief 记录小方块的位置
     */
    Point smallBlocks[4];

    IMAGE *img;

    static IMAGE* imgs[7];
    static int size;
};

#endif // BLOCK_H
