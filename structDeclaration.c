#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
}Point;

int main(){
    //Declaring a point variable without inicialization
    Point p1;

    //Initializing the point variable (members in order)
    Point p2 = {1,2};

    //Using designated initializers
    Point p3 = {.x = 3, .y = 4};

    //Designated initializers (other non initialized points will be 0)
    Point p4 = {.x = 5};

}
