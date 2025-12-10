struct InstanceData {
    glm::mat4 modelMatrix;  // Model's transformation matrix
};

std::vector<InstanceData> instances; // Store instance data

// During initialization, populate the instances vector
instances.push_back({ glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.0f)) });
instances.push_back({ glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f)) });
// Add more as needed...

GLuint instanceBuffer;
glGenBuffers(1, &instanceBuffer);
glBindBuffer(GL_ARRAY_BUFFER, instanceBuffer);
glBufferData(GL_ARRAY_BUFFER, instances.size() * sizeof(InstanceData), instances.data(), GL_STATIC_DRAW);
