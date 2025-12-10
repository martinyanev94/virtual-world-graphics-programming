class Character {
public:
    Model body;
    Model arms;
    Model legs;

    void loadCharacter(const std::string& basePath) {
        body.load(basePath + "/body.obj");
        arms.load(basePath + "/arms.obj");
        legs.load(basePath + "/legs.obj");
    }
};
