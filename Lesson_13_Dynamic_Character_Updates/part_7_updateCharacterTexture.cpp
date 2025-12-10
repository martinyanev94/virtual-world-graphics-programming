void updateCharacterTexture(Character& character, GLuint textureID) {
    glBindTexture(GL_TEXTURE_2D, textureID);
    character.sendToGPU(shaderProgram); // Ensure the new texture is used for updating
}
