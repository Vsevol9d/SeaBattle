#include <bits/stdc++.h>
#include "Game.hpp"
#include "PlayerRandom.hpp"
#include "MyPlayer.hpp"

int main() {
    std::cout << "Hello World!\n";
    MyPlayer p1;
    PlayerRandom p2;
    Game game;
    game.game(p1, p2);
}
