#ifndef TETRIS_CLONE_PIECES_H
#define TETRIS_CLONE_PIECES_H

// ——————————————————————————–
// Pieces
// ——————————————————————————–

class Pieces {
public:

    int GetBlockType(int pPiece, int pRotation, int pX, int pY);
    int GetXInitialPosition (int pPiece, int pRotation);
    int GetYInitialPosition (int pPiece, int pRotation);
};


#endif //TETRIS_CLONE_PIECES_H
