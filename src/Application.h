#pragma once
#include "Window.h"
#include "Shader.h"
#include "Cube.h"
#include "Camera.h"
#include "InputManager.h"

class Application {
public:
    Application();
    void run();

private:
    Window window;
    Shader shader;
    Cube cube;
    Camera camera;
    InputManager inputManager;
};

int main() {
    Application app;
    app.run();
    return 0;
}