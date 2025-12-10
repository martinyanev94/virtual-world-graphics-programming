GLuint SSBO;
glGenBuffers(1, &SSBO);
glBindBuffer(GL_SHADER_STORAGE_BUFFER, SSBO);
glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(boneData), boneData, GL_DYNAMIC_DRAW);
glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 0, SSBO); // Binding the buffer to index 0
