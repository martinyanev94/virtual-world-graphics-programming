void cleanupModel(ModelAndInstanceData& modelData) {
    glDeleteVertexArrays(1, &modelData.modelVAO);
    glDeleteTextures(1, &modelData.textureID);
}
