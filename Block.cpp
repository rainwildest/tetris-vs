#include "Block.h"
#include <stdlib.h>

IMAGE* Block::imgs[7] = { NULL };
int Block::size = 36 ;

Block::Block()
{
	if (imgs[0] == NULL) {
		IMAGE imgTmp;
		loadimage(&imgTmp, "resource/tiles.png");
		SetWorkingImage(&imgTmp);

		for (int i = 0; i < 7; i++) {
			imgs[i] = new IMAGE;
			getimage(imgs[i], i * size, 0, size, size);
		}

		/* �ָ������� */
		SetWorkingImage();
	}

	int blocks[7][4] = {
		1,3,5,7, // I
		2,4,5,7, // Z 1��
		3,5,4,6, // Z 2��
		3,5,4,7, // T
		2,3,5,7, // L
		3,5,7,6, // J
		2,3,4,5  // ��
	};

	/* �������һ�ֶ���˹���� */
	this->blockType = 1 + rand() % 7; 

	/* ��ʼ�� smallBlocks */
	for (int i = 0; i < 4; i++) {
		int value = blocks[this->blockType - 1][i];
		smallBlocks[i].row = value / 2;
		smallBlocks[i].col = value % 2;
	}

	img = imgs[blockType - 1];
}

void Block::drop()
{

}

void Block::moveLeftRight(int offset)
{

}

void Block::retate()
{

}

void Block::draw(int leftMargin, int topMargin)
{

}