#ifndef __CCLASS_H__
#define __CCLASS_H__

#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <typeinfo>
#include <sstream>
#include <fstream>

using namespace std;

class Piece{
    protected:
        int pos_x;
        int pos_y;
        string name="piece";

    public:
        Piece(){pos_x=0; pos_y=0;};
        Piece(int x, int y):pos_x(x), pos_y(y){}
        void set_x(int x);
        void set_y(int y);
        int get_x();
        int get_y();
        string get_name();
        virtual void check_capture()=0;
};

class King : public Piece{
	public:
        King();
		King(int x, int y):Piece(x,y){name = "King";}
		void check_capture();
};

class Bishop:public Piece{
    public:
        Bishop();
		Bishop(int x, int y):Piece(x,y){name = "Bishop";}
		void check_capture();
};

class Knight : public Piece{
	public:
        Knight();
		Knight(int x, int y):Piece(x,y){name = "Knight";}
		void check_capture();
};

class Rook : public Piece{
	public:
        Rook();
		Rook(int x, int y):Piece(x,y){name = "Rook";}
		void check_capture();
};

class Queen : public Piece{
	public:
        Queen();
		Queen(int x, int y):Piece(x,y){name = "Queen";}
		void check_capture();
};


#endif