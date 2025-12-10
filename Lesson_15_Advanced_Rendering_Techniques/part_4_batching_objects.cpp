// Pseudo-code for batching objects
std::vector<GLfloat> batchedVertices;
std::vector<GLuint> batchedIndices;

for (const auto& object : objects) {
    // Assume each object has its own vertices and indices
    batchedVertices.insert(batchedVertices.end(), object.vertices.begin(), object.vertices.end());
    GLuint offset = batchedVertices.size() / 3; // Every 3 points = 1 triangle
    for (auto index : object.indices) {
        batchedIndices.push_back(index + offset);
    }
}

// Now load batched vertices and indices to OpenGL
glBufferData(GL_ARRAY_BUFFER, batchedVertices.size() * sizeof(GLfloat), batchedVertices.data(), GL_STATIC_DRAW);
glBufferData(GL_ELEMENT_ARRAY_BUFFER, batchedIndices.size() * sizeof(GLuint), batchedIndices.data(), GL_STATIC_DRAW);
