GLuint textureAtlas;
glGenTextures(1, &textureAtlas);
glBindTexture(GL_TEXTURE_2D, textureAtlas);
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, atlasWidth, atlasHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, atlasData);
glGenerateMipmap(GL_TEXTURE_2D);
uniform sampler2D textureAtlas;
vec2 texCoords = ...; // Calculate based on animation frame data
vec4 color = texture(textureAtlas, texCoords);
