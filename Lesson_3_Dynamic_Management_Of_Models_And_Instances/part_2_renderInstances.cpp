void renderInstances(const ModelAndInstanceData& modelData) {
    glBindVertexArray(modelData.modelID);

    GLuint instanceBuffer;
    glGenBuffers(1, &instanceBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, instanceBuffer);
    glBufferData(GL_ARRAY_BUFFER, modelData.instanceCount * sizeof(glm::mat4), &modelData.transformationMatrix, GL_DYNAMIC_DRAW);

    for (size_t i = 0; i < modelData.instanceCount; i++) {
        glDrawArraysInstanced(GL_TRIANGLES, 0, verticesCount, modelData.instanceCount);
    }

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glDeleteBuffers(1, &instanceBuffer);
}
