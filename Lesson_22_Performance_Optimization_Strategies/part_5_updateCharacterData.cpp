glBindBuffer(GL_ARRAY_BUFFER, dynamicVBO);
glBufferSubData(GL_ARRAY_BUFFER, 0, dynamicVertices.size() * sizeof(Vertex), &dynamicVertices[0]);
void updateCharacterData(Character& character) {
    // Update character position and vertices based on animation or movement logic
    // For example:
    character.position += character.velocity * deltaTime; // Update position based on velocity and time

    // Rebuild the vertex data based on the new position
    rebuildVertexData(character);
    glBindBuffer(GL_ARRAY_BUFFER, dynamicVBO);
    glBufferSubData(GL_ARRAY_BUFFER, 0, dynamicVertices.size() * sizeof(Vertex), &dynamicVertices[0]);
}
