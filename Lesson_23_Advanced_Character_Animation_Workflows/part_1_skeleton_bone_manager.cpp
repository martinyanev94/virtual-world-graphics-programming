class Bone {
public:
    Bone(std::string name) : name(name), parent(nullptr) {}

    void setParent(Bone* p) {
        parent = p;
    }

    void addChild(Bone* child) {
        child->setParent(this);
        children.push_back(child);
    }

    std::string getName() const {
        return name;
    }

    std::vector<Bone*> getChildren() const {
        return children;
    }

private:
    std::string name;
    Bone* parent;
    std::vector<Bone*> children;
};

class Skeleton {
public:
    void addBone(Bone* bone) {
        bones.push_back(bone);
    }

    void animate() {
        // Animation logic goes here
    }

private:
    std::vector<Bone*> bones;
};
