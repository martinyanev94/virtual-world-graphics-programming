void updateCharacter(CharacterData& character) {
    // Update character's position based on input
    character.position += glm::vec3(1.0f, 0.0f, 0.0f); // Example: move character on the x-axis

    // Data transfer to GPU
    glBindBuffer(GL_ARRAY_BUFFER, characterVBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(CharacterData), &character);
}
