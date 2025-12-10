std::vector<glm::mat4> modelMatrices; // Store model matrices for each character
// Populate modelMatrices with transformation data

glBindVertexArray(characterVAO);
glBindTexture(GL_TEXTURE_2D, characterTexture);
glDrawElementsInstanced(GL_TRIANGLES, indexCount, GL_UNSIGNED_INT, 0, modelMatrices.size());
