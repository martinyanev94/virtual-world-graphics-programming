void UpdateCharacterData(CharacterData& character, Shader& shader) {
    // Set shader uniforms
    shader.setUniform("position", character.position);
    shader.setUniform("rotation", character.rotation);
    shader.setUniform("animationState", static_cast<int>(character.animState));

    // Update Vertex Buffer Object with new data
    glBindBuffer(GL_ARRAY_BUFFER, characterVBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(CharacterData), &character, GL_DYNAMIC_DRAW);
}
