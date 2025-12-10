void renderCharacters(const std::vector<Character>& characters) {
    // Assume we have already set up shader and proper state
    
    for (const auto& character : characters) {
        glBindVertexArray(character.VAO);
        glDrawArrays(GL_TRIANGLES, 0, character.vertexCount);
    }
}
