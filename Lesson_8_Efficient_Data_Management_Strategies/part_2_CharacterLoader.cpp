class Character {
public:
    Mesh modelMesh;
    Texture modelTexture;
    Animation animationData;

    Character(const std::string& meshPath, const std::string& texturePath, const std::string& animationPath) {
        loadMesh(meshPath);
        loadTexture(texturePath);
        loadAnimation(animationPath);
    }

    void loadMesh(const std::string& path) {
        modelMesh = MeshLoader::loadMesh(path);
    }

    void loadTexture(const std::string& path) {
        modelTexture = TextureLoader::loadTexture(path);
    }

    void loadAnimation(const std::string& path) {
        animationData = AnimationLoader::loadAnimation(path);
    }
};
