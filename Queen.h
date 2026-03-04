//2502

#ifndef QUEEN_H
#define QUEEN_H

class Queen
{
    private:
        int col,row;
    public:
        Queen(int r,int c);
        int getRow() const;
        int getCol() const;
        void setCol(int c);
};

#endif