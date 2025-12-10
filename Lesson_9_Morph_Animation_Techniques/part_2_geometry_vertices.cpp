#include <glm/glm.hpp>
#include <vector>

std::vector<glm::vec3> triangleVertices = {
    glm::vec3(0.0f, 1.0f, 0.0f), // Top vertex
    glm::vec3(-1.0f, -1.0f, 0.0f), // Bottom left vertex
    glm::vec3(1.0f, -1.0f, 0.0f) // Bottom right vertex
};

std::vector<glm::vec3> squareVertices = {
    glm::vec3(-1.0f, 1.0f, 0.0f), // Top left vertex
    glm::vec3(1.0f, 1.0f, 0.0f), // Top right vertex
    glm::vec3(1.0f, -1.0f, 0.0f), // Bottom right vertex
    glm::vec3(-1.0f, -1.0f, 0.0f) // Bottom left vertex
};
