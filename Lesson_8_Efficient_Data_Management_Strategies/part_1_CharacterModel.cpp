class CharacterModel {
public:
    std::string modelPath;
    Mesh modelMesh;
    Animation animationData;

    CharacterModel(const std::string& path) : modelPath(path) {
        loadModel();
    }
    
    void loadModel() {
        // Load mesh and animation data from the single file
        modelMesh = MeshLoader::loadMesh(modelPath);
        animationData = AnimationLoader::loadAnimation(modelPath);
    }
};
