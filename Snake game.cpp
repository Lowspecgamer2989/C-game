#include <iostream>
using namespace std;
bool GameOver;
int height = 40;
int width = 40;
int x,y , fruitX , fruitY , score;
enum eDirection { STOP=0 , LEFT, RIGHT, UP , DOWN};
eDirection dir;
void Setup()
{
    GameOver=false;
    dir=STOP;
    x= width/2 ;
    y= height/2 ;
    fruitX=rand()%width;
    fruitY=rand()%height;
    score=0;
}
void Draw()
{
   system("cls");
   for(int i=0;i < width+2;i++)
        cout<<"*";
    cout<<endl;
    for (int i=0; i < height; i++)
    {
        for (int j=0; j < width; j++ )
        {
            if (j==0)
               cout<<"*";
               cout<<" ";
            if (j==width-1 )
               cout<<"*";   
        }
    cout<<endl;    
    }
    for (int i=0;i<width+2;i++)
        cout<<"*";
    cout<<endl; 
              
}
void Input()
{

}
void Logic()
{

}
int main()
{
    Setup();
    while (!GameOver);
    {
     Draw();
     Input();
     Logic;
    }
    return 0;
}
