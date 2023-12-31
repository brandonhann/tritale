#pragma once
#include "Window.h"
#include "shaders/Shader.h"
#include "player/Player.h"
#include "player/Camera.h"
#include "player/InputManager.h"
#include "terrain/Chunk.h"
#include "GameLoop.h"

class Game {
public:
    Game();
    ~Game();
    void run();

private:
    Window window;
    Shader shader;
    Player player;
    Camera camera;
    InputManager inputManager;
    Chunk chunk;
    GameLoop gameLoop;
    GuiManager guiManager; 
};
