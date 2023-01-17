#include "Class.h"
#include "functions.h"


void Piece::set_x(int x){
    pos_x=x;
}

void Piece::set_y(int y){
    pos_y=y;
}

int Piece::get_x(){
    return pos_x;
}

int Piece::get_y(){
    return pos_y;
}

string Piece::get_name(){
    return name;
}

void King::check_capture(){
    for(int j=pos_x-1;j<=pos_x+1;j++){
        for(int i=pos_y-1;i<=pos_y+1;i++){
            if(i>=0 && i<=7 && j>=0 && j<=7){
                if(!(i==pos_x && j==pos_y)){
                    if(Mas[i][j]!=NULL){
                	    cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            	    }
                }
                
        	}
    	}
	}
    cout<<endl;
}



void Bishop::check_capture(){
    for(int i=pos_x-1;i>=0;i--){
        if(Mas[i][pos_y]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][pos_y]->get_name()<<" on "<<Mas[i][pos_y]->get_x()<<" "<<Mas[i][pos_y]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_y-1;i>=0;i--){
        if(Mas[pos_x][i]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x][i]->get_name()<<" on "<<Mas[pos_x][i]->get_x()<<" "<<Mas[pos_x][i]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x+1;i<8;i++){
        if(Mas[i][pos_y]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][pos_y]->get_name()<<" on "<<Mas[i][pos_y]->get_x()<<" "<<Mas[i][pos_y]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_y+1;i<8;i++){
        if(Mas[pos_x][i]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x][i]->get_name()<<" on "<<Mas[pos_x][i]->get_x()<<" "<<Mas[pos_x][i]->get_y()<<endl;
            break;
        }
    }
    
    cout<<endl;
}



void Knight::check_capture(){
    if(pos_x>=2){
        if(pos_y>=1){
            if(Mas[pos_x-2][pos_y-1]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x-2][pos_y-1]->get_name()<<" on "<<Mas[pos_x-2][pos_y-1]->get_x()<<" "<<Mas[pos_x-2][pos_y-1]->get_y()<<endl;
            }
        }  
        if(pos_y<=6){
            if(Mas[pos_x-2][pos_y+1]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x-2][pos_y+1]->get_name()<<" on "<<Mas[pos_x-2][pos_y+1]->get_x()<<" "<<Mas[pos_x-2][pos_y+1]->get_y()<<endl;
            }
        }     
    }
    if(pos_x<=5){
        if(pos_y>=1){
            if(Mas[pos_x+2][pos_y-1]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x+2][pos_y-1]->get_name()<<" on "<<Mas[pos_x+2][pos_y-1]->get_x()<<" "<<Mas[pos_x+2][pos_y-1]->get_y()<<endl;
            }
        }  
        if(pos_y<=6){
            if(Mas[pos_x+2][pos_y+1]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x+2][pos_y+1]->get_name()<<" on "<<Mas[pos_x+2][pos_y+1]->get_x()<<" "<<Mas[pos_x+2][pos_y+1]->get_y()<<endl;
            }
        }     
    }

    if(pos_y>=2){
        if(pos_x>=1){
            if(Mas[pos_x-1][pos_y-2]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x-1][pos_y-2]->get_name()<<" on "<<Mas[pos_x-1][pos_y-2]->get_x()<<" "<<Mas[pos_x-1][pos_y-2]->get_y()<<endl;
            }
        }  
        if(pos_x<=6){
            if(Mas[pos_x+1][pos_y-2]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x+1][pos_y-2]->get_name()<<" on "<<Mas[pos_x+1][pos_y-2]->get_x()<<" "<<Mas[pos_x+1][pos_y-2]->get_y()<<endl;
            }
        }     
    }
    if(pos_y<=5){
        if(pos_x>=1){
            if(Mas[pos_x-1][pos_y+2]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x-1][pos_y+2]->get_name()<<" on "<<Mas[pos_x-1][pos_y+2]->get_x()<<" "<<Mas[pos_x-1][pos_y+2]->get_y()<<endl;
            }
        }  
        if(pos_x<=6){
            if(Mas[pos_x+1][pos_y+2]!=NULL){
                cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x+1][pos_y+2]->get_name()<<" on "<<Mas[pos_x+1][pos_y+2]->get_x()<<" "<<Mas[pos_x+1][pos_y+2]->get_y()<<endl;
            }
        }     
    }
    cout<<endl;
}



void Rook::check_capture(){
    for(int i=pos_x-1, j=pos_y-1;i>=0 && j>=0; i--, j--){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x+1, j=pos_y-1;i<=7 && j>=0; i++, j--){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x+1, j=pos_y+1;i<=7 && j<=7; i++, j++){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x-1, j=pos_y+1;i>=0 && j<=7; i--, j++){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    cout<<endl;
}



void Queen::check_capture(){
    for(int i=pos_x+1;i<8;i++){
        if(Mas[i][pos_y]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][pos_y]->get_name()<<" on "<<Mas[i][pos_y]->get_x()<<" "<<Mas[i][pos_y]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x+1, j=pos_y+1;i<=7 && j<=7; i++, j++){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_y+1;i<8;i++){
        if(Mas[pos_x][i]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x][i]->get_name()<<" on "<<Mas[pos_x][i]->get_x()<<" "<<Mas[pos_x][i]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x-1, j=pos_y+1;i>=0 && j<=7; i--, j++){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x-1;i>=0;i--){
        if(Mas[i][pos_y]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][pos_y]->get_name()<<" on "<<Mas[i][pos_y]->get_x()<<" "<<Mas[i][pos_y]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x-1, j=pos_y-1;i>=0 && j>=0; i--, j--){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_y-1;i>=0;i--){
        if(Mas[pos_x][i]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[pos_x][i]->get_name()<<" on "<<Mas[pos_x][i]->get_x()<<" "<<Mas[pos_x][i]->get_y()<<endl;
            break;
        }
    }
    for(int i=pos_x+1, j=pos_y-1;i<=7 && j>=0; i++, j--){
        if(Mas[i][j]!=NULL){
            cout<<this->get_name()<<" on "<<this->get_x()<<" "<<this->get_y()<<" capture "<<Mas[i][j]->get_name()<<" on "<<Mas[i][j]->get_x()<<" "<<Mas[i][j]->get_y()<<endl;
            break;
        }
    }
    

    cout<<endl;
}

