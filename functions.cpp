#include "functions.h"

Piece *Mas[8][8];

/*
void DrawWindow(){
    cout<<"    0   1   2   3   4   5   6   7"<<endl;
    cout<<"  ┌───┬───┬───┬───┬───┬───┬───┬───┐"<<endl;
    for(int j=7;j>=0;j--){
        cout<<j<<" ";
        for(int i=0;i<8;i++){
            cout<<"│";
            if(Mas[i][j]==NULL) cout<<"   ";
            else if(Mas[i][j]->get_name().compare("Queen")==0) cout<<" Q ";
            else if(Mas[i][j]->get_name().compare("King")==0) cout<<" K ";
            else if(Mas[i][j]->get_name().compare("Bishop")==0) cout<<" B ";
            else if(Mas[i][j]->get_name().compare("Rook")==0) cout<<" R ";
            else if(Mas[i][j]->get_name().compare("Knight")==0) cout<<" H ";
        }
        cout<<"│ "<<j<<endl;
        if(j!=0)
        cout<<"  ├───┼───┼───┼───┼───┼───┼───┼───│"<<endl;
    }
    cout<<"  └───┴───┴───┴───┴───┴───┴───┴───┘"<<endl;
    cout<<"    0   1   2   3   4   5   6   7"<<endl;
    cout<<endl<<endl;
}
*/

void DrawWindow(){
    cout<<"    0   1   2   3   4   5   6   7"<<endl;
    cout<<"  +---+---+---+---+---+---+---+---+"<<endl;
    for(int j=7;j>=0;j--){
        cout<<j<<" ";
        for(int i=0;i<8;i++){
            cout<<"|";
            if(Mas[i][j]==NULL) cout<<"   ";
            else if(Mas[i][j]->get_name().compare("Queen")==0) cout<<" Q ";
            else if(Mas[i][j]->get_name().compare("King")==0) cout<<" K ";
            else if(Mas[i][j]->get_name().compare("Bishop")==0) cout<<" B ";
            else if(Mas[i][j]->get_name().compare("Rook")==0) cout<<" R ";
            else if(Mas[i][j]->get_name().compare("Knight")==0) cout<<" H ";
        }
        cout<<"| "<<j<<endl;
        if(j!=0)
        cout<<"  +---+---+---+---+---+---+---+---+"<<endl;
    }
    cout<<"  +---+---+---+---+---+---+---+---+"<<endl;
    cout<<"    0   1   2   3   4   5   6   7"<<endl;
    cout<<endl<<endl;
}

int ReadFromFile(){
    ifstream file("input.txt", ios_base::in);
    string name,xs,ys;
    int x;
    int y;
    string buf;
    while (getline(file, buf)){
            stringstream ss(buf);
            getline(ss,name,' ');
            getline(ss,xs,' ');
            getline(ss,ys,' ');
            x=stoi(xs);
            y=stoi(ys);
            if(x>=0 && x<=7 && y>=0 && y<=7 && Mas[x][y]==NULL){
                if(name.compare("queen")==0) Mas[x][y]=new Queen(x,y);
                else if(name.compare("king")==0) Mas[x][y]=new King(x,y);
                else if(name.compare("bishop")==0) Mas[x][y]=new Bishop(x,y);
                else if(name.compare("rook")==0) Mas[x][y]=new Rook(x,y);
                else if(name.compare("knight")==0) Mas[x][y]=new Knight(x,y);
                else{
                    cout<<"Error reading from file. Chess piece "<<name<<" does not exist"<<endl;
                    return 1;
                } 
            }
            else{
                cout<<"Error reading from file. "<<x<<" "<<y<<" is Out of border or place already taken"<<endl;
                return 1;
            } 
    }
    file.close();
    return 0;
}

void CheckAll(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(Mas[j][i]!=NULL)
                Mas[j][i]->check_capture();
        }
    }
}