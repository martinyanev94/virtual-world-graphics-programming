void UpdateCharacterDataWithDelta(CharacterData& previous, CharacterData& current, Shader& shader) {
    if (previous.position != current.position) {
        shader.setUniform("position", current.position);
    }
    if (previous.rotation != current.rotation) {
        shader.setUniform("rotation", current.rotation);
    }
    if (previous.animState != current.animState) {
        shader.setUniform("animationState", static_cast<int>(current.animState));
    }

    // Update VBO only if any data changed
    if (previous.position != current.position || previous.rotation != current.rotation || previous.animState != current.animState) {
        glBindBuffer(GL_ARRAY_BUFFER, characterVBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(CharacterData), &current, GL_DYNAMIC_DRAW);
    }
}
