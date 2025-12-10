void renderCharacters(const std::vector<Character>& characters, GLuint shaderProgram) {
    glUseProgram(shaderProgram);
    glBindVertexArray(characterVAO);
    
    // Assume each character has a unique model matrix
    for (const Character& character : characters) {
        character.sendToGPU(shaderProgram);
        glDrawArrays(GL_TRIANGLES, 0, characterVertexCount);
    }
}
