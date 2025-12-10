struct Material {
    glm::vec3 diffuse;
    glm::vec3 specular;
    float shininess;
};

Material material;
material.diffuse = glm::vec3(0.8f, 0.7f, 0.6f);
material.specular = glm::vec3(1.0f, 1.0f, 1.0f);
material.shininess = 32.0f;
glUniform3fv(glGetUniformLocation(shaderProgram, "material.diffuse"), 1, glm::value_ptr(material.diffuse));
glUniform3fv(glGetUniformLocation(shaderProgram, "material.specular"), 1, glm::value_ptr(material.specular));
glUniform1f(glGetUniformLocation(shaderProgram, "material.shininess"), material.shininess);
