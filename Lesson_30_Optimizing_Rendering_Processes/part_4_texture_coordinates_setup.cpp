GLuint textureAtlas;
// Assume textureAtlas is loaded with several character textures
glActiveTexture(GL_TEXTURE0);
glBindTexture(GL_TEXTURE_2D, textureAtlas);

// Set texture coordinates for a specific character section
GLfloat texCoords[] = {
    0.0f, 0.0f,  // Bottom left corner of character
    1.0f, 0.0f,  // Bottom right corner of character
    0.5f, 1.0f   // Top center of character
};

glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(GLfloat), (GLvoid*)0);
glEnableVertexAttribArray(1);
