#include <iostream>
#include <string>

    //function to draw a rectangle
    void drawRectangle(int x, int y, int w, int h){
        std::cout << "  <rect x=\"" << x << "\" y=\"" << y
                  << "\" width=\"" << w << "\" height=\"" << h << "\"></rect>\n";
    }

    //function to draw a circle
    void drawCircle(int cx, int cy, int r){
        std::cout << "  <circle cx=\"" << cx << "\" cy=\"" << cy
                  << "\" r=\"" << r << "\"></circle>\n";
    }

int main() {
    //print the SVG template
    std::cout << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"700\" height=\"600\">\n";
    std::cout << "  <g transform=\"matrix(1,0,0,-1,50,550)\" fill=\"white\" fill-opacity=\"0.5\" stroke=\"black\" stroke-width=\"2\">\n";
    std::cout << "    <rect fill=\"lightgrey\" x=\"0\" y=\"0\" width=\"600\" height=\"500\"></rect>\n";

    //a string variable
    std::string shape; //-> stores either R or C

    //read input
    while (std::cin >> shape){//reading the next word from input
        //if the shape is a rectangle
        int x, y, w, h;
        if(shape == "R"){
            std::cin >> x >> y >> w >> h;
            drawRectangle(x, y, w, h);

        }
        //if the shape is a circle
        int cx, cy, r;
        if(shape == "C"){
            std::cin >> cx >> cy >> r;
            drawCircle(cx, cy, r);
            // std::cout<< "cx = " << cx;
            // std::cout<< "cy = " << cy;
            // std::cout<< "r = " << r;
        }
    }

    std::cout << " </g>\n";
    std::cout << "</svg>\n";
    return 0;
}