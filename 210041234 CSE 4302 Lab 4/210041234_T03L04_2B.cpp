#include <iostream>
#include <math.h>

using namespace std;

class Rectangle{
private:
    float length;
    float width;
    float diagonal;

public:
    Rectangle(float length, float width){
        length = length;
        width = width;
    }

    Rectangle(){
        length = 1.0;
        width = 1.0;
    }

    float calculatePerimeter(){
        float perimeter = 2 * (length + width);

        return perimeter;
    }

    float calculateArea(){
        float area = length * width;

        return area;
    }

    float calculateDiagonal(){
        diagonal = sqrt(length*length + width*width);

        return diagonal;
    }

    float calculateAngleWithLength(){
        float angle = atan(width/length);

        return angle;
    }

    void setDimensions(float newLength, float newWidth){
        if(newLength >= 1.0 && newLength < 20.0){
            length = newLength;
        }
        if(newWidth >= 1.0 && newWidth < 20.0){
            width = newWidth;
        }
    }

    float getLength(){
        cout << " Length = " << length << endl;
    }

    void getWidth(){
        cout << " Width = " << width << endl;
    }

    ~Rectangle(){
        cout << length << " and " << width << " has been destroyed" << endl;
    }



};

int main(){
    Rectangle rec;//(2,1);
    float peri = rec.calculatePerimeter();
    cout << peri << endl;
    float ara = rec.calculateArea();
    cout << ara << endl;
    float diag= rec.calculateDiagonal();
    cout << diag << endl;
    float ang = rec.calculateAngleWithLength();
    cout << ang << endl;

    cout << "Current Dimensions : " << endl;
    rec.getLength();
    rec.getWidth();

    rec.setDimensions(3,2);
    cout << "Dimensions using new values : " << endl;
    rec.getLength();
    rec.getWidth();
}
