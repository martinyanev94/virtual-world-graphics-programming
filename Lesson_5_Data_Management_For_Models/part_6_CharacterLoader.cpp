struct Texture {
    unsigned int id;
    
    void load(const std::string& filename) {
        // Logic to load texture and generate OpenGL texture ID
        // This usually involves reading the file and using glew or similar
    }
};

class Character {
public:
    Model body;
    Model arms;
    Model legs;
    Texture texture;

    void loadCharacter(const std::string& basePath) {
        body.load(basePath + "/body.obj");
        arms.load(basePath + "/arms.obj");
        legs.load(basePath + "/legs.obj");
        
        texture.load(basePath + "/character_texture.png");
    }
};
