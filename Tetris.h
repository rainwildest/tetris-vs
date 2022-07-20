#ifndef TETRIS_H
#define TETRIS_H

/* 表示俄罗斯方块游戏 */
class Tetris
{
public:
    Tetris(int rows, int cols, int left, int top, int blockSize);

    /**
     * @brief 初始化
     * @return void
     */
    void init();

    /**
     * @brief 开始游戏
     * @return void
     */
    void play();

private:
    /**
     * @brief 键盘事件
     */
    void keyEvent();

    /**
     * @brief 更新窗口
     */
    void updateWindow();

    /**
     * @brief 返回距离上一次调用该函数，间隔了多少时间（ms）,第一次返回为 0
     * @return int
     */
    int getDelay();

    /**
     * @brief 下落
     */
    void drop();

    /**
     * @brief 清行
     */
    void clearLine();

private:
    /**
     * @brief 延时
     */
    int delay;

    /**
     * @brief 是否更新
     */
    bool update;
};

#endif // TETRIS_H
