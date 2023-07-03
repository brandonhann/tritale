#pragma once
#include "../shaders/Shader.h"
#include <GL/glew.h>
#include <vector>
#include "FastNoiseLite.h"

class Terrain {
public:
    Terrain(Shader& shader, int width, int length);
    void generateVertices();
    void drawTerrain();
    float getHeight(float x, float z);
    int getWidth();
    int getLength();
    Shader& getShader();

private:
    Shader& shader;
    int width;
    int length;
    std::vector<float> vertices;
    std::vector<unsigned int> indices;
    std::vector<float> normals;
    GLuint VAO, VBO, EBO;
    FastNoiseLite noiseGenerator;
};