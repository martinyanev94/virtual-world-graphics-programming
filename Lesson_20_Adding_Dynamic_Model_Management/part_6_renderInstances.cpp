void renderInstances(const std::vector<ModelAndInstanceData>& models) {
    for (const auto& model : models) {
        glBindVertexArray(model.modelVAO);
        glBindTexture(GL_TEXTURE_2D, model.textureID);

        // Set the transformation uniform values here (position, rotation, scale)
        // For example:
        glm::mat4 modelMatrix = glm::translate(glm::mat4(1.0f), model.position) *
                                 glm::rotate(glm::mat4(1.0f), glm::radians(model.rotation.x), glm::vec3(1.0f, 0.0f, 0.0f)) *
                                 glm::scale(glm::mat4(1.0f), model.scale);

        // Send the model matrix to the shader (assuming they can handle instanced data)
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, GL_FALSE, glm::value_ptr(modelMatrix));
        glDrawArrays(GL_TRIANGLES, 0, /* Number of vertices */);
    }
}
