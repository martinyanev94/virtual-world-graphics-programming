void renderCharacter(const CharacterData& character) {
    glBindBuffer(GL_ARRAY_BUFFER, characterVBO);
    // Draw with updated character data
    glDrawArrays(GL_TRIANGLES, 0, 36);  // Assuming we are drawing a cube as an example
}
