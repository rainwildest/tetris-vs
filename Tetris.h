#ifndef TETRIS_H
#define TETRIS_H

/* ��ʾ����˹������Ϸ */
class Tetris
{
public:
    Tetris(int rows, int cols, int left, int top, int blockSize);

    /**
     * @brief ��ʼ��
     * @return void
     */
    void init();

    /**
     * @brief ��ʼ��Ϸ
     * @return void
     */
    void play();

private:
    /**
     * @brief �����¼�
     */
    void keyEvent();

    /**
     * @brief ���´���
     */
    void updateWindow();

    /**
     * @brief ���ؾ�����һ�ε��øú���������˶���ʱ�䣨ms��,��һ�η���Ϊ 0
     * @return int
     */
    int getDelay();

    /**
     * @brief ����
     */
    void drop();

    /**
     * @brief ����
     */
    void clearLine();

private:
    /**
     * @brief ��ʱ
     */
    int delay;

    /**
     * @brief �Ƿ����
     */
    bool update;
};

#endif // TETRIS_H
