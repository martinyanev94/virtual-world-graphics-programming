for (const auto& character : characters) {
    glBindTexture(GL_TEXTURE_2D, character.textureID);
    glBindBuffer(GL_ARRAY_BUFFER, character.VBO);
    glDrawArrays(GL_TRIANGLES, 0, character.vertexCount);
}
