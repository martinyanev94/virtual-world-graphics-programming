GLuint dynamicVBO;
glGenBuffers(1, &dynamicVBO);
glBindBuffer(GL_ARRAY_BUFFER, dynamicVBO);

// Assume dynamicVertices is a vector containing the vertices that will change
glBufferData(GL_ARRAY_BUFFER, dynamicVertices.size() * sizeof(Vertex), &dynamicVertices[0], GL_DYNAMIC_DRAW);
