GLuint characterVBO; // Vertex Buffer Object for character data

glGenBuffers(1, &characterVBO);
glBindBuffer(GL_ARRAY_BUFFER, characterVBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(CharacterData), &character, GL_DYNAMIC_DRAW);
