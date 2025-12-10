struct Vertex {
    glm::vec3 position;
    glm::vec3 normal;
    glm::vec2 texCoord;
};

std::vector<Vertex> characterVertices = {
    // Example vertices for character model
    {{-0.5f, 0.0f, 0.0f}, {0, 1, 0}, {0, 0}},
    {{ 0.5f, 0.0f, 0.0f}, {0, 1, 0}, {1, 0}},
    {{ 0.0f, 1.0f, 0.0f}, {0, 1, 0}, {0.5f, 1}}
};
