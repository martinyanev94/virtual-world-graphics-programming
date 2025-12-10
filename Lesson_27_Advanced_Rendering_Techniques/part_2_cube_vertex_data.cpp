struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 texCoord; // Texture coordinates for mapping
};

// Define a cube’s vertices
std::vector<Vertex> vertices = {
    // Front face
    {{-0.5f, -0.5f,  0.5f}, {0, 0, 1}, {0, 0}},
    {{ 0.5f, -0.5f,  0.5f}, {0, 0, 1}, {1, 0}},
    {{ 0.5f,  0.5f,  0.5f}, {0, 0, 1}, {1, 1}},
    {{-0.5f,  0.5f,  0.5f}, {0, 0, 1}, {0, 1}},
    // Back face
    {{-0.5f, -0.5f, -0.5f}, {0, 0, -1}, {0, 0}},
    {{ 0.5f, -0.5f, -0.5f}, {0, 0, -1}, {1, 0}},
    {{ 0.5f,  0.5f, -0.5f}, {0, 0, -1}, {1, 1}},
    {{-0.5f,  0.5f, -0.5f}, {0, 0, -1}, {0, 1}},
};

// Index Buffer
std::vector<uint32_t> indices = {
    0, 1, 2, 2, 3, 0,   // Front face
    4, 5, 6, 6, 7, 4,   // Back face
    0, 3, 7, 7, 4, 0,   // Left face
    1, 2, 6, 6, 5, 1,   // Right face
    3, 2, 6, 6, 7, 3,   // Top face
    0, 1, 5, 5, 4, 0    // Bottom face
};
