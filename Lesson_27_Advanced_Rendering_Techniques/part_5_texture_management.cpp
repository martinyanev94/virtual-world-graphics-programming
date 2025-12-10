unsigned char* image;
int width, height, nrChannels;

image = stbi_load("path/to/texture.jpg", &width, &height, &nrChannels, 0);
GLuint textureID;
glGenTextures(1, &textureID);
glBindTexture(GL_TEXTURE_2D, textureID);

// Set texture wrapping and filtering options
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

// Load the texture data
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
glGenerateMipmap(GL_TEXTURE_2D);
stbi_image_free(image);
glActiveTexture(GL_TEXTURE0);
glBindTexture(GL_TEXTURE_2D, textureID);
uniform sampler2D textureSampler;

void main() {
    vec2 texCoord = ...; // Obtain from vertex shader
    vec4 textureColor = texture(textureSampler, texCoord);
    gl_FragColor = textureColor;
}
