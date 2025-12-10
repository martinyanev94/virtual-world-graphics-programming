GLuint ssbo;
glGenBuffers(1, &ssbo);
glBindBuffer(GL_SHADER_STORAGE_BUFFER, ssbo);
glBufferData(GL_SHADER_STORAGE_BUFFER, sizeof(glm::mat4) * maxCharacters, nullptr, GL_DYNAMIC_DRAW);
glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 0, ssbo);
#version 330 core
layout(std430, binding = 0) buffer TransformBuffer {
    mat4 transforms[];
};

void main() {
    mat4 model = transforms[instanceID]; // Get the transformation for the specific instance
    gl_Position = projection * view * model * vec4(position, 1.0);
}
