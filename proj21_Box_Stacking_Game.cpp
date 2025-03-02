// proj21_Box_Stacking_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Box {
private:
    int width;
    int height;

public:
    Box(int w, int h) : width(w), height(h) {}
    int getWidth() { return width; }
    int getHeight() { return height; }
    void display() { cout << "Box (" << width << "x" << height << ")\n"; }
};

class BoxStackGame {
private:
    vector<Box> stack;

public:
    void startGame() {
        cout << "Welcome to the Box Stacking Game!\n";
        while (true) {
            int w, h;
            cout << "Enter box width and height (or -1 to quit): ";
            cin >> w;
            if (w == -1) break;
            cin >> h;

            if (!stack.empty() && w >= stack.back().getWidth()) {
                cout << "Game Over! You cannot stack a box with width " << w << " on top of one with width " << stack.back().getWidth() << "\n";
                break;
            }

            stack.push_back(Box(w, h));
            cout << "Stacked successfully!\n";
        }
        cout << "Final Stack:\n";
        for (auto& box : stack) {
            box.display();
        }
    }
};

int main() {
    BoxStackGame game;
    game.startGame();
    return 0;
}
