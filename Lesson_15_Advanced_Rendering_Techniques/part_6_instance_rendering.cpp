glBindVertexArray(VAO);
glBindBuffer(GL_ARRAY_BUFFER, instanceVBO);
glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3) * instanceCount, &offsets[0], GL_STATIC_DRAW);

// Assuming the first attribute is for the vertex positions
glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);
glVertexAttribDivisor(1, 1); // Increment for each instance

// Draw instances
glDrawElementsInstanced(GL_TRIANGLES, indexCount, GL_UNSIGNED_INT, 0, instanceCount);

glBindVertexArray(0);
